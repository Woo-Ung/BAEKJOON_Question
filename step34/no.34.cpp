#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <cmath>

//1.

//int T{}, N{}, M{};
//
//int main()
//{
//	std::cin >> T;
//
//	for (int i = 0; i < T;i++)
//	{
//		std::cin >> N >> M;
//
//		for (int i = 0; i < M;i++)
//		{
//			int a{}, b{};
//
//			std::cin >> a >> b;
//		}
//
//		std::cout << N - 1 << '\n';
//	}
//}

//2.

//int V{}, E{};
//
//std::vector<std::pair<int, int>> v[10001];
//
//int prim()
//{
//	int result{};
//	int visited[10001]{};
//
//	std::priority_queue<std::pair<int, int>> pq;
//
//	pq.push({ 0,1 });
//
//	while (!pq.empty())
//	{
//		int a = pq.top().second;
//		int b = -pq.top().first;
//		pq.pop();
//
//		if (visited[a])
//		{
//			continue;
//		}
//
//		result += b;
//		visited[a] = 1;
//
//		for (int i = 0; i < v[a].size();i++)
//		{
//			int n = v[a][i].first;
//			int na = v[a][i].second;
//			pq.push({ -na,n });
//		}
//	}
//
//	return result;
//}
//
//int main()
//{
//	std::cin >> V >> E;
//
//	for (int i = 0;i < E;i++)
//	{
//		int x{}, y{}, z{};
//
//		std::cin >> x >> y >> z;
//
//		v[x].push_back({ y,z });
//		v[y].push_back({ x,z });
//	}
//
//	std::cout << prim() << '\n';
//}

//3.

//int N{};
//int parent[101]{};
//
//double answer{};
//
//std::vector<std::pair<double, double>> v;
//std::vector<std::pair<double, std::pair<int, int>>> edge;
//
//double distance(double a1, double a2, double b1, double b2)
//{
//	return std::sqrt(std::pow(b1 - a1, 2) + std::pow(b2 - a2, 2));
//}
//
//int findP(int a)
//{
//	if (a == parent[a])
//	{
//		return a;
//	}
//
//	return parent[a] = findP(parent[a]);
//}
//
//int main()
//{
//	std::cin >> N;
//
//	for (int i = 0; i < N; i++)
//	{
//		double a{}, b{};
//
//		std::cin >> a >> b;
//
//		v.push_back({ a,b });
//	}
//
//	for (int i = 0; i < v.size();i++)
//	{
//		for (int j = i + 1;j < v.size();j++)
//		{
//			double x = distance(v[i].first, v[i].second, v[j].first, v[j].second);			
//			edge.push_back({ x,{i,j} });
//		}
//	}
//
//	for (int i = 0; i <= N;i++)
//	{
//		parent[i] = i;
//	}
//
//	std::sort(edge.begin(), edge.end());
//
//	for (int i = 0; i < edge.size();i++)
//	{
//		double cost = edge[i].first;
//
//		int x = edge[i].second.first;
//		int y = edge[i].second.second;
//
//		int a = findP(x);
//		int b = findP(y);
//
//		if (a != b)
//		{
//			parent[a] = b;
//			answer += cost;
//		}		
//	}
//
//	std::cout.precision(3);
//	std::cout << answer << '\n';
//}

//4.

//int N{}, M{};
//int parent[1001]{};
//
//double answer{};
//
//std::vector<std::pair<int, int>> point;
//std::vector<std::pair<int, int>> v;
//std::vector<std::pair<double, std::pair<int, int>>> edge;
//
//int findP(int a)
//{
//	if (a == parent[a])
//	{
//		return a;
//	}
//
//	return parent[a] = findP(parent[a]);
//}
//
//bool sameP(int a, int b)
//{
//	a = findP(a);
//	b = findP(b);
//
//	if (a == b)
//	{
//		return true;
//	}
//
//	return false;
//}
//
//void unionP(int a, int b)
//{
//	a = findP(a);
//	b = findP(b);
//
//	parent[b] = a;
//}
//
//double distance(int a, int b, int na, int nb)
//{
//	long long x = pow(a - na, 2);
//	long long y = pow(b - nb, 2);
//	
//	return sqrt(x + y);
//}
//
//int main()
//{
//	std::cin >> N >> M;
//
//	for (int i = 0;i <= N;i++)
//	{
//		parent[i] = i;
//	}
//
//	for (int i = 0; i < N;i++)
//	{
//		int a{}, b{};
//
//		std::cin >> a >> b;
//
//		point.push_back({ a,b });
//	}
//
//	for (int i = 0; i < M; i++)
//	{
//		int a{}, b{};
//
//		std::cin >> a >> b;
//
//		v.push_back({ a,b });
//	}
//
//	for (int i = 0; i < M;i++)
//	{
//		int x = v[i].first;
//		int y = v[i].second;
//
//		if (!sameP(x, y))
//		{
//			unionP(x, y);
//		}
//	}
//
//	for (int i = 0; i < N;i++)
//	{
//		int x = point[i].first;
//		int y = point[i].second;
//
//		for (int j = i + 1;j < N;j++)
//		{
//			int nx = point[j].first;
//			int ny = point[j].second;
//
//			double d = distance(x, y, nx, ny);
//			edge.push_back({ d,{i + 1,j + 1} });
//		}
//	}
//
//	std::sort(edge.begin(), edge.end());
//
//	for (int i = 0; i < edge.size();i++)
//	{
//		int x = edge[i].second.first;
//		int y = edge[i].second.second;
//
//		double d = edge[i].first;
//
//		if (!sameP(x,y))
//		{
//			unionP(x, y);
//			answer += d;
//		}
//	}
//
//	std::cout << std::fixed;
//	std::cout.precision(2);
//	std::cout << answer << '\n';
//}

//5.

//int n{}, m{}, answer{};
//int parent[200001]{};
//
//bool flag;
//
//std::vector<std::pair<int, std::pair<int, int>>> v;
//
//int findP(int a)
//{
//	if (a == parent[a])
//	{
//		return a;
//	}
//	return parent[a] = findP(parent[a]);
//}
//
//void unionP(int a, int b)
//{
//	flag = false;
//
//	a = findP(a);
//	b = findP(b);
//
//	if (a == b)
//	{
//		return;
//	}
//
//	flag = true;
//	parent[a] = b;
//}
//
//int main()
//{
//	while (true)
//	{
//		answer = 0;
//		v.clear();
//
//		std::cin >> m >> n;
//		if (!m && !n)
//		{
//			break;
//		}
//
//		for (int i = 0; i < m;i++)
//		{
//			parent[i] = i;
//		}
//
//		for (int i = 0; i < n; i++)
//		{
//			int a{}, b{}, c{};
//
//			std::cin >> a >> b >> c;
//
//			v.push_back({ c,{a,b} });
//			answer += c;
//		}
//
//		std::sort(v.begin(), v.end());
//
//		for (int i = 0; i < n;i++)
//		{
//			unionP(v[i].second.first, v[i].second.second);
//
//			if (flag)
//			{
//				answer -= v[i].first;
//			}
//		}
//
//		std::cout << answer << '\n';
//	}		
//}

//6.

int N{}, M{}, answer{}, Inum{};

int parent[7]{};

int map[10][10]{};
int visited[10][10]{};
int island[10][10]{};

int dx[]{ 0,0,1,-1 };
int dy[]{ 1,-1,0,0 };

bool can{true};

std::vector<std::pair<int, int>> v;
std::vector < std::pair<int, std::pair<int, int>>> bridge;

int findP(int a)
{
	if (parent[a] == a)
	{
		return a;
	}

	return parent[a] = findP(parent[a]);
}

void unionP(int a, int b)
{
	a = findP(a);
	b = findP(b);

	if (a != b)
	{
		if (a < b)
			parent[b] = a;
		else
			parent[a] = b;
	}
}

bool sameP(int a, int b)
{
	a = findP(a);
	b = findP(b);

	if (a != b)
	{
		return false;
	}
	return true;
}

void unionI()
{
	std::queue < std::pair<int, int>> q;

	for (int i = 0; i < v.size();i++)
	{
		if (visited[v[i].first][v[i].second])
		{
			continue;
		}

		q.push({ v[i].first,v[i].second });
		visited[q.front().first][q.front().second] = 1;
		island[q.front().first][q.front().second] = ++Inum;

		while (!q.empty())
		{
			int a = q.front().first;
			int b = q.front().second;
			q.pop();

			for (int j = 0; j < 4;j++)
			{
				int na = a + dx[j];
				int nb = b + dy[j];
				if (na >= 0 && nb >= 0 && na < N && nb < M && !visited[na][nb] && map[na][nb])
				{
					q.push({ na,nb });
					visited[na][nb] = 1;
					island[na][nb] = Inum;
				}
			}
		}

	}

}

void makeB(int a, int b, int c)
{
	int count{};
	int start = island[a][b];

	while (true)
	{
		int na = a + dx[c];
		int nb = b + dy[c];

		if (na >= 0 && nb >= 0 && na < N && nb < M)
		{
			if (!map[na][nb])
			{
				a = na;
				b = nb;
				count += 1;
			}

			else if (map[na][nb] && count >= 2 && start != island[na][nb])
			{
				bridge.push_back({ count,{start,island[na][nb]} });
				break;
			}

			else
			{
				break;
			}
		}
		else
		{
			break;
		}
	}
}

int main()
{
	std::cin >> N >> M;

	for (int i = 0; i < N;i++)
	{
		for (int j = 0;j < M;j++)
		{			
			std::cin >> map[i][j];
			if (map[i][j])
			{
				v.push_back({ i,j });
			}
		}
	}

	unionI();

	for (int i = 0; i < v.size();i++)
	{
		for (int j = 0; j < 4; j++)
		{
			makeB(v[i].first, v[i].second, j);
		}
	}

	std::sort(bridge.begin(), bridge.end());

	for (int i = 1; i <= Inum;i++)
	{
		parent[i] = i;
	}

	for (int i = 0; i < bridge.size(); i++)
	{
		if (!sameP(bridge[i].second.first, bridge[i].second.second))
		{
			unionP(bridge[i].second.first, bridge[i].second.second);
			answer += bridge[i].first;
		}
	}

	for (int i = 1; i <= Inum;i++)
	{
		if (findP(i) != 1)
		{
			can = false;
			break;
		}
	}

	if (can)
	{
		std::cout << answer << '\n';
	}
	else
	{
		std::cout << -1 << '\n';
	}
}