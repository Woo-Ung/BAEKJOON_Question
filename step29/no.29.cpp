#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

//1.

//int visited[100001]{ 0, };
//int result[100001]{};
//int count{};
//
//std::vector<int> graph[100001];
//
//void dfs(int a)
//{
//	if (visited[a] == 1)
//	{
//		return;
//	}
//
//	visited[a] = 1;
//	count++;
//	result[a] = count;
//
//	for (int i = 0; i < graph[a].size();i++)
//	{
//		dfs(graph[a][i]);
//	}
//
//}
//
//int main()
//{
//	int N{}, M{}, R{};
//
//	std::cin >> N >> M >> R;
//
//	for (int i = 1; i <= M;i++)
//	{
//		int x{}, y{};
//
//		std::cin >> x >> y;
//		graph[x].push_back(y);
//		graph[y].push_back(x);
//	}
//	
//	for (int i = 1;i <= N;i++)
//	{
//		std::sort(graph[i].begin(), graph[i].end());
//	}
//
//	dfs(R);
//
//	for (int i = 1;i <= N;i++)
//	{
//		std::cout << result[i] << '\n';
//	}
//}

//2.

//int visited[100001]{0,};
//int result[100001]{};
//int count{};
//
//std::vector<int> graph[100001];
//
//void dfs(int a)
//{
//	if (visited[a] == 1)
//	{
//		return;
//	}
//
//	visited[a] = 1;
//	count++;
//	result[a] = count;
//
//	for (int i = 0; i < graph[a].size();i++)
//	{
//		dfs(graph[a][i]);
//	}
//}
//
//int main()
//{
//	int N{}, M{}, R{};
//
//	std::cin >> N >> M >> R;
//
//	for (int i = 1;i <= M;i++)
//	{
//		int x{}, y{};
//
//		std::cin >> x >> y;
//
//		graph[x].push_back(y);
//		graph[y].push_back(x);
//	}
//
//	for (int i = 1;i <= N;i++)
//	{
//		std::sort(graph[i].begin(), graph[i].end(), std::greater<int>());
//	}
//
//	dfs(R);
//
//	for (int i = 1;i <= N;i++)
//	{
//		std::cout << result[i] << '\n';
//	}
//}

//3.

int visited[100001]{ 0, };
int result[100001]{};
int count{};

std::vector<int> graph[100001];
std::queue<int> q;

void bfs(int a)
{
	q.push(a);

	while (!q.empty())
	{
		int b = q.front();
		q.pop();
		
		visited[b] = 1;
		count++;
		result[b] = count;

		for (int i = 0;i < graph[b].size();i++)
		{
			if (!visited[graph[b][i]])
			{	
				visited[graph[b][i]] = 1;
				q.push(graph[b][i]);
			}
		}
	}
}

int main()
{
	int N{}, M{}, R{};

	std::cin >> N >> M >> R;

	for (int i = 1;i <= M;i++)
	{
		int x{}, y{};

		std::cin >> x >> y;

		graph[x].push_back(y);
		graph[y].push_back(x);
	}

	for (int i = 1;i <= N;i++)
	{
		std::sort(graph[i].begin(), graph[i].end());
	}

	bfs(R);

	for (int i = 1;i <= N;i++)
	{
		std::cout << result[i] << '\n';
	}
}