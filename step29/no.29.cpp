#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <string.h>
#include <map>

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

//int N{}, M{}, min{}, count{};
//int visited[101][101]{};
//int check[101][101]{};
//
//int dx[4] = { 1,-1,0,0 };
//int dy[4] = { 0,0,1,-1 };
//
//std::string board[101];
//
//void bfs(int a, int b)
//{
//	std::queue<std::pair<int,int>> q;
//
//	q.push({ a,b });
//	visited[a][b] = 1;
//	check[a][b]++;
//
//	while (!q.empty())
//	{
//		int x = q.front().first;
//		int y = q.front().second;
//
//		q.pop();
//
//		for (int i = 0;i < 4;i++)
//		{			
//			int nx = x + dx[i];
//			int ny = y + dy[i];
//
//			if (0 <= nx && 0 <= ny && nx < N && ny < M && board[nx][ny] == '1' && visited[nx][ny] == 0)
//			{
//				q.push({ nx,ny });
//				visited[nx][ny] = 1;
//
//				check[nx][ny] = check[x][y] + 1;
//			}			
//		}
//	}
//}
//
//int main()
//{
//	std::cin >> N >> M;
//
//	for (int i = 0;i < N;i++)
//	{	
//		std::cin >> board[i];
//	}
//
//	bfs(0, 0);
//
//	std::cout << check[N-1][M-1] << '\n';
//}

//10.

//int N{}, K{}, ans{};
//int visited[100001]{};
//int count[100001]{};
//
//void bfs(int a)
//{
//	std::queue<int> q;
//
//	q.push(a);
//	visited[a] = 1;
//	
//	while (!q.empty())
//	{
//		int x = q.front();
//		q.pop();
//
//		if (x == K)
//		{
//			ans = count[x];
//			break;
//		}
//
//		if (visited[x - 1] == 0 && x - 1 >= 0 && x - 1 <= 100000)
//		{
//			q.push(x - 1);
//			visited[x - 1] = 1;
//			count[x - 1] = count[x] + 1;
//		}
//
//		if (visited[x+1] == 0 && x + 1 >= 0 && x + 1 <= 100000)
//		{
//			q.push(x + 1);
//			visited[x + 1] = 1;
//			count[x + 1] = count[x] + 1;
//		}
//
//		if (visited[x * 2] == 0 && x * 2 >= 0 && x * 2 <= 100000)
//		{
//			q.push(x * 2);
//			visited[x * 2] = 1;
//			count[x * 2] = count[x] + 1;
//		}
//	}
//}
//
//int main()
//{
//	std::cin >> N >> K;
//
//	bfs(N);
//
//	std::cout << ans << '\n';
//}

//11.

//int L{};
//int start[2]{}, end[2]{};
//int visited[301][301]{}, count[301][301]{};
//
//int dx[8]{ 2,2,-2,-2,1,-1,1,-1 };
//int dy[8]{ 1,-1,1,-1,-2,-2,2,2 };
//
//void bfs(int a, int b)
//{
//	std::queue<std::pair<int, int>> q;
//
//	q.push({ a,b });
//	visited[a][b] = 1;
//	
//	while (!q.empty())
//	{
//		int x = q.front().first;
//		int y = q.front().second;
//
//		q.pop();
//	
//		for (int i = 0;i < 8;i++)
//		{
//			int nx = x + dx[i];
//			int ny = y + dy[i];
//
//			if (nx == end[0] && ny == end[1])
//			{
//				count[nx][ny] = count[x][y] + 1;
//				return;
//			}
//
//			if (nx >= 0 && ny >= 0 && nx < L && ny < L && visited[nx][ny] == 0)
//			{
//				q.push({ nx,ny });
//				visited[nx][ny] = 1;
//				count[nx][ny] = count[x][y] + 1;
//			}
//		}
//	}
//}
//
//int main()
//{
//	int N{};
//
//	std::cin >> N;
//
//	for (int i = 0;i < N;i++)
//	{
//		memset(visited, 0, sizeof(visited));
//		memset(count, 0, sizeof(count));
//
//		std::cin >> L;
//		std::cin >> start[0] >> start[1];
//		std::cin >> end[0] >> end[1];
//
//		if (start[0] == end[0] && start[1] == end[1])
//		{
//			std::cout << 0 << '\n';
//		}
//		
//		else
//		{
//			bfs(start[0], start[1]);
//
//			std::cout << count[end[0]][end[1]] << '\n';
//		}
//	}
//}

//12.

//int N{}, M{}, max{};
//int visited[1001][1001]{};
//int count[1001][1001]{};
//
//int dx[4]{ 1,-1,0,0 };
//int dy[4]{ 0,0,-1,1 };
//
//std::queue<std::pair<int,int>> q;
//
//void bfs()
//{
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
//			if (nx >= 0 && ny >= 0 && nx < N && ny < M && visited[nx][ny] == 0)
//			{
//				q.push({ nx,ny });
//				visited[nx][ny] = 1;
//				count[nx][ny] = count[x][y] + 1;
//				max = std::max(max, count[nx][ny]);
//			}
//		}
//	}
//
//	for (int i = 0;i < N;i++)
//	{
//		for (int j = 0;j < M;j++)
//		{
//			if (visited[i][j] == 0)
//			{
//				max = -1;
//				break;
//			}			
//		}
//	}
//}
//
//int main()
//{
//	std::cin >> M >> N;
//
//	for (int i = 0;i < N;i++)
//	{
//		for (int j = 0;j < M;j++)
//		{
//			std::cin >> visited[i][j];
//			if (visited[i][j] == 1)
//			{
//				q.push({ i,j });				
//			}
//		}
//	}
//
//	bfs();
//
//	std::cout << max << '\n';
//}

//13.

//int N{}, M{}, H{}, max{};
//int visited[101][101][101]{};
//int count[101][101][101]{};
//
//int dx[6]{ 1,-1,0,0,0,0 };
//int dy[6]{ 0,0,-1,1,0,0 };
//int dz[6]{ 0,0,0,0,1,-1 };
//
//std::queue<std::pair<int,std::pair<int, int>>> q;
//
//void bfs()
//{
//	while (!q.empty())
//	{
//		int z = q.front().first;
//		int x = q.front().second.first;
//		int y = q.front().second.second;
//		q.pop();
//
//			
//		for (int i = 0;i < 6;i++)
//		{
//			int nx = x + dx[i];
//			int ny = y + dy[i];
//			int nz = z + dz[i];
//
//			if (nx >= 0 && ny >= 0 && nz >= 0 && nz < H && nx < N && ny < M && visited[nz][nx][ny] == 0)
//			{
//				q.push({ nz,{ nx,ny } });
//				visited[nz][nx][ny] = 1;
//				count[nz][nx][ny] = count[z][x][y] + 1;
//				max = std::max(max, count[nz][nx][ny]);
//			}
//		}
//		
//	}
//
//	for (int k = 0; k < H;k++)
//	{
//		for (int i = 0;i < N;i++)
//		{
//			for (int j = 0;j < M;j++)
//			{
//				if (visited[k][i][j] == 0)
//				{
//					max = -1;
//					break;
//				}
//			}
//		}
//	}
//}
//
//int main()
//{
//	std::cin >> M >> N >> H;
//
//	for (int k = 0; k < H;k++)
//	{
//		for (int i = 0;i < N;i++)
//		{
//			for (int j = 0;j < M;j++)
//			{
//				std::cin >> visited[k][i][j];
//				if (visited[k][i][j] == 1)
//				{
//					q.push({ k,{ i,j } });
//				}
//			}
//		}
//	}
//
//	bfs();
//
//	std::cout << max << '\n';
//}

//14.

//int N{}, M{};
//
//int visited[101]{};
//int board[101]{};
//int count[101]{};
//std::map<int, int> ladder;
//std::map<int, int> snake;
//
//void bfs(int a)
//{
//	std::queue<int> q;
//
//	q.push(a);
//	visited[a] = 1;
//
//	while (!q.empty())
//	{
//		int x = q.front();
//		q.pop();
//
//		for (int i = 1;i <= 6;i++)
//		{
//			int dx = x + i;
//
//			if (dx == 100)
//			{
//				count[dx] = count[x] + 1;
//				return;
//			}
//			if (dx > 100)
//			{
//				break;
//			}
//				
//			if (ladder[dx] && visited[ladder[dx]] == 0)
//			{
//				q.push(ladder[dx]);
//				visited[ladder[dx]] = 1;
//				count[ladder[dx]] = count[x] + 1;
//				continue;
//			}
//			if (snake[dx] && visited[snake[dx]] == 0)
//			{
//				q.push(snake[dx]);
//				visited[snake[dx]] = 1;
//				count[snake[dx]] = count[x] + 1;
//				continue;
//			}			
//
//			else if (visited[dx] == 0 && !snake[dx] && !ladder[dx])
//			{
//				q.push(dx);
//				visited[dx] = 1;
//				count[dx] = count[x] + 1;
//				continue;
//			}
//		}
//	}
//}
//
//
//int main()
//{
//	std::cin >> N >> M;
//
//	for (int i = 0;i < N;i++)
//	{
//		int x{}, y{};
//
//		std::cin >> x >> y;
//
//		ladder[x] = y;
//	}
//
//	for (int i = 0;i < M;i++)
//	{
//		int x{}, y{};
//
//		std::cin >> x >> y;
//
//		snake[x] = y;
//	}
//
//	bfs(1);
//
//	std::cout << count[100] << '\n';
//}

//15.

//int N{}, M{}, min{1000001};
//
//std::string map[1001];
//int visited[1001][1001][2]{};
//int count[1001][1001][2]{};
//
//int dx[4] = { -1,1,0,0 };
//int dy[4] = { 0,0,-1,1 };
//
//void bfs(int a, int b)
//{
//	std::queue<std::pair<std::pair<int,int>,int>> q;
//
//	q.push({{ a,b },0});
//	visited[a][b][0] = 1;
//	count[a][b][0] = 1;
//
//	while (!q.empty())
//	{
//		int x = q.front().first.first;
//		int y = q.front().first.second;
//		int z = q.front().second;
//
//		q.pop();
//
//		if (x == N-1 && y == M-1)
//		{
//			min = std::min(min, count[x][y][z]);
//			return;
//		}
//
//		for (int i = 0; i < 4; i++)
//		{
//			int nx = x + dx[i];
//			int ny = y + dy[i];
//
//			if (nx >= 0 && ny >= 0 && nx < N && ny < M)
//			{
//				if (visited[nx][ny][z] == 0 && map[nx][ny] == '0')
//				{
//					q.push({{ nx,ny },z});
//					visited[nx][ny][z] = 1;
//					count[nx][ny][z] = count[x][y][z] + 1;
//				}
//
//				if (z == 0 && map[nx][ny] == '1')
//				{
//					visited[nx][ny][1] = 1;
//					count[nx][ny][1] = count[x][y][z] + 1;
//					q.push({ {nx,ny},1 });
//				}
//			}
//		}
//	}
//	
//	min = -1;
//}
//
//int main()
//{
//	std::cin >> N >> M;
//
//	for (int i = 0; i < N; i++)
//	{
//		std::cin >> map[i];
//	}
//
//	bfs(0, 0);
//
//	std::cout << min << '\n';
//}

//16.

int K{}, V{}, E{};
std::vector<int> graph[20001];
int visited[20001];

void bfs(int a)
{
	std::queue<int> q;

	visited[a] = 1;
	q.push(a);

	while (!q.empty())
	{
		int x = q.front();
		q.pop();

		for (int i = 0; i < graph[x].size();i++)
		{
			if (visited[graph[x][i]] == 0)
			{
				q.push(graph[x][i]);

				if (visited[x] == 1)
				{
					visited[graph[x][i]] = 2;
				}

				else if (visited[x] == 2)
				{
					visited[graph[x][i]] = 1;
				}

			}
		}
	}
}

void check()
{
	for (int i = 1;i <= V;i++)
	{
		for (int j = 0; j < graph[i].size();j++)
		{
			if (visited[i] == visited[graph[i][j]])
			{
				std::cout << "NO" << '\n';
				return;
			}
		}
	}
	std::cout << "YES" << '\n';
	return;
}

int main()
{
	std::cin >> K;

	for (int z = 0; z < K;z++)
	{		
		std::cin >> V >> E;

		for (int i = 0; i < E; i++)
		{
			int x{}, y{};

			std::cin >> x >> y;

			graph[x].push_back(y);
			graph[y].push_back(x);
		}

		for (int i = 1;i <= V;i++)
		{
			if (visited[i] == 0)
			{
				bfs(i);
			}
		}

		check();

		memset(graph, 0, sizeof(graph));
		memset(visited, 0, sizeof(visited));
	}
}