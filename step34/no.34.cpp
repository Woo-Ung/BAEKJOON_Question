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

int N{}, M{};
int parent[1001]{};

double answer{};

std::vector<std::pair<int, int>> point;
std::vector<std::pair<int, int>> v;
std::vector<std::pair<double, std::pair<int, int>>> edge;

int findP(int a)
{
	if (a == parent[a])
	{
		return a;
	}

	return parent[a] = findP(parent[a]);
}

bool sameP(int a, int b)
{
	a = findP(a);
	b = findP(b);

	if (a == b)
	{
		return true;
	}

	return false;
}

void unionP(int a, int b)
{
	a = findP(a);
	b = findP(b);

	parent[b] = a;
}

double distance(int a, int b, int na, int nb)
{
	long long x = pow(a - na, 2);
	long long y = pow(b - nb, 2);
	
	return sqrt(x + y);
}

int main()
{
	std::cin >> N >> M;

	for (int i = 0;i <= N;i++)
	{
		parent[i] = i;
	}

	for (int i = 0; i < N;i++)
	{
		int a{}, b{};

		std::cin >> a >> b;

		point.push_back({ a,b });
	}

	for (int i = 0; i < M; i++)
	{
		int a{}, b{};

		std::cin >> a >> b;

		v.push_back({ a,b });
	}

	for (int i = 0; i < M;i++)
	{
		int x = v[i].first;
		int y = v[i].second;

		if (!sameP(x, y))
		{
			unionP(x, y);
		}
	}

	for (int i = 0; i < N;i++)
	{
		int x = point[i].first;
		int y = point[i].second;

		for (int j = i + 1;j < N;j++)
		{
			int nx = point[j].first;
			int ny = point[j].second;

			double d = distance(x, y, nx, ny);
			edge.push_back({ d,{i + 1,j + 1} });
		}
	}

	std::sort(edge.begin(), edge.end());

	for (int i = 0; i < edge.size();i++)
	{
		int x = edge[i].second.first;
		int y = edge[i].second.second;

		double d = edge[i].first;

		if (!sameP(x,y))
		{
			unionP(x, y);
			answer += d;
		}
	}

	std::cout << std::fixed;
	std::cout.precision(2);
	std::cout << answer << '\n';
}