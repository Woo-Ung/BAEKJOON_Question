#include <iostream>
#include <vector>
#include <queue>
#include <string.h>

//1.

//int N{};
//int arr[100001] {};
//int visitied[100001] {};
//
//std::vector<int> v[100001];
//
//void bfs(int a)
//{
//	std::queue<int> q;
//
//	q.push(a);
//	visitied[a] = 1;
//
//	while (!q.empty())
//	{
//		int x = q.front();
//		q.pop();
//
//		for (int i = 0; i < v[x].size();i++)
//		{
//			int next = v[x][i];
//			if (!visitied[next])
//			{
//				arr[next] = x;
//				visitied[next] = 1;
//				q.push(next);
//			}
//		}
//	}
//}
//
//int main()
//{
//	std::cin >> N;
//
//	for (int i = 0; i < N-1;i++)
//	{
//		int x{}, y{};
//
//		std::cin >> x >> y;
//
//		v[x].push_back(y);
//		v[y].push_back(x);
//	}
//	
//	bfs(1);
//
//	for (int i = 2;i <= N;i++)
//	{
//		std::cout << arr[i] << '\n';
//	}
//}

//2.

int N{}, max{}, maxP{};
int visited[100001]{};

std::vector<std::pair<int, int>> v[100001];

void dfs(int a, int b)
{
	if (visited[a])
	{
		return;
	}
	if (max < b)
	{
		max = b;
		maxP = a;
	}
	visited[a] = 1;

	for (int i = 0; i < v[a].size();i++)
	{
		int na = v[a][i].first;
		int nb = v[a][i].second;
		dfs(na, nb + b);
	}
}

int main()
{
	std::cin >> N;

	for (int i = 0; i < N;i++)
	{
		int x{}, y{}, z{};

		std::cin >> x;

		while (true)
		{
			std::cin >> y;
			if (y == -1)
			{
				break;
			}
			std::cin >> z;

			v[x].push_back({ y,z });
			v[y].push_back({ x,z });
		}
	}

	dfs(1,0);

	memset(visited, 0, sizeof(visited));
	max = 0;

	dfs(maxP, 0);

	std::cout << max << '\n';
}