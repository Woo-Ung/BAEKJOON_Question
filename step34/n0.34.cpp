#include <iostream>
#include <vector>
#include <queue>

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

int V{}, E{};

std::vector<std::pair<int, int>> v[10001];

int prim()
{
	int result{};
	int visited[10001]{};

	std::priority_queue<std::pair<int, int>> pq;

	pq.push({ 0,1 });

	while (!pq.empty())
	{
		int a = pq.top().second;
		int b = -pq.top().first;
		pq.pop();

		if (visited[a])
		{
			continue;
		}

		result += b;
		visited[a] = 1;

		for (int i = 0; i < v[a].size();i++)
		{
			int n = v[a][i].first;
			int na = v[a][i].second;
			pq.push({ -na,n });
		}
	}

	return result;
}

int main()
{
	std::cin >> V >> E;

	for (int i = 0;i < E;i++)
	{
		int x{}, y{}, z{};

		std::cin >> x >> y >> z;

		v[x].push_back({ y,z });
		v[y].push_back({ x,z });
	}

	std::cout << prim() << '\n';
}