#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <string.h>

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

//int visited[100001]{ 0, };
//int result[100001]{};
//int count{};
//
//std::vector<int> graph[100001];
//std::queue<int> q;
//
//void bfs(int a)
//{
//	q.push(a);
//
//	while (!q.empty())
//	{
//		int b = q.front();
//		q.pop();
//		
//		visited[b] = 1;
//		count++;
//		result[b] = count;
//
//		for (int i = 0;i < graph[b].size();i++)
//		{
//			if (!visited[graph[b][i]])
//			{	
//				visited[graph[b][i]] = 1;
//				q.push(graph[b][i]);
//			}
//		}
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
//		std::sort(graph[i].begin(), graph[i].end());
//	}
//
//	bfs(R);
//
//	for (int i = 1;i <= N;i++)
//	{
//		std::cout << result[i] << '\n';
//	}
//}

//4.

//int visited[100001]{ 0, };
//int result[100001]{};
//int count{};
//
//std::vector<int> graph[100001];
//std::queue<int> q;
//
//void bfs(int a)
//{
//	q.push(a);
//
//	while (!q.empty())
//	{
//		int b = q.front();
//
//		q.pop();
//
//		visited[b] = 1;
//		count++;
//		result[b] = count;
//
//		for (int i = 0; i < graph[b].size();i++)
//		{
//			if (!visited[graph[b][i]])
//			{
//				visited[graph[b][i]] = 1;
//				q.push(graph[b][i]);
//			}
//		}
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
//	bfs(R);
//
//	for (int i = 1;i <= N;i++)
//	{
//		std::cout << result[i] << '\n';
//	}
//}

//5.

//int visited[101]{ 0, };
//int count{};
//
//std::vector<int> cpt[101];
//
//void virus(int a)
//{
//	if (visited[a] == 1)
//	{
//		return;
//	}
//
//	visited[a] = 1;
//	count++;
//	
//	for (int i = 0; i < cpt[a].size();i++)
//	{
//		virus(cpt[a][i]);
//	}
//
//}
//
//int main()
//{
//	int N{}, M{};
//
//	std::cin >> N >> M;
//
//	for (int i = 1; i <= M;i++)
//	{
//		int x{}, y{};
//
//		std::cin >> x >> y;
//
//		cpt[x].push_back(y);
//		cpt[y].push_back(x);
//	}
//
//	virus(1);
//
//	std::cout << count - 1 << '\n';
//}

//6.

//int visited[1001]{ 0, };
//
//std::vector<int> Dresult;
//std::vector<int> Bresult;
//std::vector<int> graph[10001];
//
//void DFS(int a)
//{
//	if (visited[a] == 1)
//	{
//		return;
//	}
//
//	visited[a] = 1;
//	Dresult.push_back(a);
//
//	for (int i = 0; i < graph[a].size();i++)
//	{
//		DFS(graph[a][i]);
//	}
//}
//
//void BFS(int a)
//{
//	std::queue<int> q;
//	q.push(a);
//	visited[a] = 1;
//
//	while (!q.empty())
//	{
//		int x = q.front();
//		q.pop();
//		Bresult.push_back(x);
//
//		for (int i = 0; i < graph[x].size(); i++)
//		{
//			if (!visited[graph[x][i]])
//			{
//				q.push(graph[x][i]);
//				visited[graph[x][i]] = 1;
//			}
//		}
//	}	
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
//
//		graph[x].push_back(y);
//		graph[y].push_back(x);
//	}
//
//	for (int i = 1;i <= N;i++)
//	{
//		std::sort(graph[i].begin(), graph[i].end());
//	}
//
//	DFS(R);
//
//	memset(visited, 0, sizeof(visited));
//
//	BFS(R);
//
//	for (auto e : Dresult)
//	{
//		std::cout << e << " ";
//	}std::cout << '\n';
//
//	for (auto e : Bresult)
//	{
//		std::cout << e << " ";
//	}std::cout << '\n';
//
//}

//7.

//int N{}, count{};
//std::string arry[26];
//int visited[26][26]{0,};
//
//int dx[4] = { 1,-1,0,0 };
//int dy[4] = { 0,0,1,-1 };
//
//std::vector<int> result;
//
//void bfs(int a, int b)
//{
//	std::queue<std::pair<int, int>> q;
//	q.push({ a, b });
//	visited[a][b] = 1;
//	count++;
//
//	while (!q.empty())
//	{
//		int x = q.front().first;
//		int y = q.front().second;
//		q.pop();
//
//		for (int i = 0;i < 4;i++)
//		{
//			int nx = x + dx[i];
//			int ny = y + dy[i];
//
//			if (0 <= nx && 0 <= ny && nx < N && ny < N && visited[nx][ny] == 0 && arry[nx][ny] == '1')
//			{
//				q.push({ nx,ny });
//				visited[nx][ny] = 1;
//				count++;
//			}
//		}
//	}
//
//	result.push_back(count);
//}
//
//int main()
//{
//	std::cin >> N;
//
//	for (int i = 0;i < N;i++)
//	{		
//		std::cin >> arry[i];
//	}
//
//	for (int i = 0; i < N;i++)
//	{
//		for (int j = 0; j < N;j++)
//		{
//			if (arry[i][j] == '1' && visited[i][j] == 0)
//			{
//				count = 0;
//				bfs(i, j);
//			}
//		}
//	}
//
//	std::sort(result.begin(), result.end());
//
//	std::cout << result.size() << '\n';
//
//	for (int i = 0; i < result.size();i++)
//	{
//		std::cout << result[i] << '\n';
//	}
//
//}

//8.

//int T{}, N{}, M{}, K{}, count{};
//int field[51][51]{};
//int visited[51][51]{0,};
//
//int dx[4] = { 1,-1,0,0 };
//int dy[4] = { 0,0,1,-1 };
//
//void bfs(int a, int b)
//{
//	std::queue<std::pair<int, int>> q;
//
//	q.push({ a,b });
//	visited[a][b] = 1;
//	count++;
//
//	while (!q.empty())
//	{
//		int x = q.front().first;
//		int y = q.front().second;
//		q.pop();
//
//		for (int i = 0;i < 4;i++)
//		{
//			int nx = x + dx[i];
//			int ny = y + dy[i];
//
//			if (0 <= nx && 0 <= ny && nx < N && ny < M && visited[nx][ny] == 0 && field[nx][ny] == 1)
//			{
//				q.push({ nx,ny });
//				visited[nx][ny] = 1;				
//			}
//		}
//	}
//}
//
//int main()
//{
//	std::cin >> T;
//
//	for (int z = 0;z < T;z++)
//	{
//		count = 0;
//		memset(field, 0, sizeof(field));
//		memset(visited, 0, sizeof(visited));
//
//		std::cin >> M >> N >> K;
//
//		for (int i = 0; i < K;i++)
//		{
//			int x{}, y{};
//
//			std::cin >> x >> y;
//
//			field[y][x] = 1;
//		}
//
//		for (int i = 0; i < N;i++)
//		{
//			for (int j = 0; j < M;j++)
//			{
//				if (field[i][j] == 1 && visited[i][j] == 0)
//				{					
//					bfs(i, j);
//				}
//			}
//		}
//
//		std::cout << count << '\n';
//	}
//}

//9.

int N{}, M{}, min{}, count{};
int visited[101][101]{};
int check[101][101]{};

int dx[4] = { 1,-1,0,0 };
int dy[4] = { 0,0,1,-1 };

std::string board[101];

void bfs(int a, int b)
{
	std::queue<std::pair<int,int>> q;

	q.push({ a,b });
	visited[a][b] = 1;
	check[a][b]++;

	while (!q.empty())
	{
		int x = q.front().first;
		int y = q.front().second;

		q.pop();

		for (int i = 0;i < 4;i++)
		{			
			int nx = x + dx[i];
			int ny = y + dy[i];

			if (0 <= nx && 0 <= ny && nx < N && ny < M && board[nx][ny] == '1' && visited[nx][ny] == 0)
			{
				q.push({ nx,ny });
				visited[nx][ny] = 1;

				check[nx][ny] = check[x][y] + 1;
			}			
		}
	}
}

int main()
{
	std::cin >> N >> M;

	for (int i = 0;i < N;i++)
	{	
		std::cin >> board[i];
	}

	bfs(0, 0);

	std::cout << check[N-1][M-1] << '\n';
}