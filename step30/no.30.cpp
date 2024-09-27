#include <iostream>
#include <vector>
#include <queue>
#include <cstring>
#include <algorithm>

//1.

//int V{}, E{}, start{};
//const int INF{ 9999999 };
//int dp[20001]{};
//
//std::vector<std::pair<int, int>> point[20001];
//
//void bfs(int a)
//{
//	std::priority_queue<std::pair<int,int>, std::vector<std::pair<int,int>>, std::greater<std::pair<int,int>>> pq;
//	pq.push({0,a});
//	dp[a] = 0;
//
//	while (!pq.empty())
//	{	
//		int x = pq.top().second;
//		int cost = pq.top().first;
//
//		pq.pop();
//
//		for (int i = 0; i < point[x].size();i++)
//		{
//			int ncost = cost + point[x][i].second;
//			int nx = point[x][i].first;
//			
//
//			if (dp[nx] > ncost)
//			{
//				pq.push({ ncost,nx });
//				dp[nx] = ncost;
//			}
//		}
//	}
//}
//
//int main()
//{
//	std::cin >> V >> E >> start;
//
//	for (int i = 0; i < E;i++)
//	{
//		int x{}, y{}, z{};
//
//		std::cin >> x >> y >> z;
//		point[x].push_back({ y,z });
//	}
//
//	memset(dp, INF, sizeof(dp));
//
//	bfs(start);
//
//	for (int i = 1;i <= V;i++)
//	{
//		if (dp[i] <= INF)
//		{
//			std::cout << dp[i] << '\n';
//		}
//		else
//		{
//			std::cout << "INF" << '\n';
//		}
//	}
//}

//2.

//int N{}, E{}, INF{ 9999999 };
//int dp[801]{};
//
//std::vector<std::pair<int, int>> graph[801];
//
//void bfs(int a)
//{
//	memset(dp,INF, sizeof(dp));
//
//	std::priority_queue<std::pair<int, int>, std::vector<std::pair<int,int>>, std::greater<std::pair<int,int>>> q;
//
//	q.push({ 0, a });
//	dp[a] = 0;
//
//	
//	while (!q.empty())
//	{
//		int sum = q.top().first;
//		int x = q.top().second;
//		q.pop();
//
//		if (dp[x] < sum)
//		{
//			continue;
//		}
//
//		for (int i = 0; i < graph[x].size(); i++)
//		{
//			int nx = graph[x][i].first;
//			int ncost = sum + graph[x][i].second;
//
//			if (dp[nx] > ncost)
//			{
//				q.push({ ncost, nx });
//				dp[nx] = ncost;
//			}
//		}
//	}
//}
//
//
//int main()
//{
//	std::cin >> N >> E;
//
//	for (int i = 0;i < E;i++)
//	{
//		int x{}, y{}, z{};
//		std::cin >> x >> y >> z;
//
//		graph[x].push_back({ y,z });
//		graph[y].push_back({ x,z });
//	}
//	int V1{}, V2{};
//	std::cin >> V1 >> V2;
//
//	bfs(1);
//	int toV1 = dp[V1];
//	int toV2 = dp[V2];
//
//	bfs(V1);
//	int V1toV2 = dp[V2];
//	int V1toN = dp[N];
//
//	bfs(V2);
//	int V2toN = dp[N];
//
//	int ans{};
//
//	ans = std::min(INF, toV1 + V1toV2 + V2toN);
//	ans = std::min(ans, toV2 + V1toV2 + V1toN);
//
//	if (ans >= INF)
//	{
//		std::cout << -1 << '\n';
//	}
//	else
//	{
//		std::cout << ans << '\n';
//	}
//}

//3.

//int N{}, K{}, ans{};
//int visited[100001]{};
//
//void bfs(int a)
//{
//	std::priority_queue<std::pair<int, int>,std::vector<std::pair<int,int>>,std::greater<std::pair<int,int>>> q;
//	q.push({ 0,a });
//
//	while (!q.empty())
//	{
//		int time = q.top().first;
//		int x = q.top().second;
//
//		q.pop();
//
//		if (x == K)
//		{
//			ans = time;
//			return;
//		}
//
//		if (x * 2 < 100001 && visited[x*2] == 0)
//		{
//			q.push({ time,x * 2 });
//			visited[x * 2] = 1;
//		}
//
//		if (x + 1 < 100001 && visited[x + 1] == 0)
//		{
//			q.push({ time + 1,x + 1 });
//			visited[x + 1] = 1;
//		}
//
//		if (x - 1 >= 0 && visited[x - 1] == 0)
//		{
//			q.push({ time + 1,x - 1 });
//			visited[x - 1] = 1;
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

//4.

//#define INF 9999999
//
//int N{}, M{}, T{}, S{}, G{}, H{}, Dist_GH{};
//
//int Dist_S[2001]{};
//int Dist_G[2001]{};
//int Dist_H[2001]{};
//
//std::vector<std::pair<int, int>> V[2001];
//std::vector<int> C;
//
//void bfs(int start, int* a)
//{
//	std::priority_queue<std::pair<int, int>> q;
//	q.push({ 0,start });
//	a[start] = 0;
//
//	while(!q.empty())
//	{
//		int cost = -q.top().first;
//		int cur = q.top().second;
//		q.pop();
//
//		for (int i = 0; i < V[cur].size(); i++)
//		{
//			int next = V[cur][i].first;
//			int ncost = V[cur][i].second;
//
//			if (a[next] > cost + ncost)
//			{
//				a[next] = cost + ncost;
//				q.push({ -a[next],next });
//			}
//		}
//	
//	}
//
//
//}
//
//int main()
//{
//	int TT{};
//
//	std::cin >> TT;
//
//	for (int i = 0;i < TT;i++)
//	{		
//		memset(Dist_S, INF, sizeof(Dist_S));
//		memset(Dist_G, INF, sizeof(Dist_G));
//		memset(Dist_H, INF, sizeof(Dist_H));
//		for (int i = 0;i < 2001;i++)
//		{
//			V[i].clear();
//		}
//		C.clear();
//
//		std::cin >> N >> M >> T;
//		std::cin >> S >> G >> H;
//
//		for (int i = 0;i < M;i++)
//		{
//			int x{}, y{}, z{};
//			std::cin >> x >> y >> z;
//
//			V[x].push_back({ y,z });
//			V[y].push_back({ x,z });
//		}
//
//		for (int i = 0; i < T;i++)
//		{
//			int x{};
//			std::cin >> x;
//			C.push_back(x);
//		}
//
//		bfs(S, Dist_S);
//		bfs(G, Dist_G);
//
//		Dist_GH = Dist_G[H];
//
//		bfs(H, Dist_H);
//
//		std::sort(C.begin(), C.end());
//
//		for (int i = 0; i < C.size();i++)
//		{
//			int ans = C[i];
//			if (Dist_S[ans] == Dist_S[G] + Dist_GH + Dist_H[ans])
//			{
//				std::cout << ans << " ";
//			}
//			else if (Dist_S[ans] == Dist_S[H] + Dist_GH + Dist_G[ans])
//			{
//				std::cout << ans << " ";
//			}
//		}std::cout << '\n';
//	}	
//}

//5.

//#define INF 9999999
//
//int N{}, M{};
//long long dist[501]{};
//bool cycle;
//
//std::vector<std::pair<int, int>> city[501];
//
//void bellmanFord()
//{
//	for (int i = 1; i <= N;i++)
//	{
//		dist[i] = INF;
//	}
//	dist[1] = 0;
//
//	for (int i = 1; i <= N;i++)
//	{
//		for (int j = 1; j <= N;j++)
//		{
//			for (int k = 0; k < city[j].size();k++)
//			{
//				int next = city[j][k].first;
//				int x = city[j][k].second;
//
//				if (dist[j] != INF && dist[next] > dist[j] + x)
//				{
//					dist[next] = dist[j] + x;
//					if (i == N)
//					{
//						cycle = true;
//					}
//				}
//			}
//		}
//	}
//
//	if (cycle)
//	{
//		std::cout << -1 << '\n';
//	}
//	else
//	{
//		for (int i = 2; i <= N;i++)
//		{
//			std::cout << (dist[i] != INF ? dist[i] : -1) << '\n';
//		}
//	}
//}
//
//int main()
//{
//	std::cin >> N >> M;
//
//	for (int i = 0; i < M;i++)
//	{
//		int  A{}, B{}, C{};
//
//		std::cin >> A >> B >> C;
//
//		city[A].push_back({ B,C });
//	}
//
//	bellmanFord();
//}


//6.

//#define INF 9999999
//
//int n{}, m{};
//int dp[101][101]{};
//
//int main()
//{
//	std::cin >> n >> m;
//
//	std::fill(dp[0], dp[101], INF);
//
//	for (int i = 1;i <= n;i++)
//	{
//		dp[i][i] = 0;
//	}
//
//	for (int i = 0; i < m ;i++)
//	{
//		int x{}, y{}, z{};
//
//		std::cin >> x >> y >> z;
//		dp[x][y] = std::min(dp[x][y], z);
//	}
//
//	for (int i = 1; i <= n;i++)
//	{
//		for (int j = 1; j <= n;j++)
//		{
//			for (int k = 1; k <= n;k++)
//			{
//				dp[j][k] = std::min(dp[j][k], dp[j][i] + dp[i][k]);
//			}
//		}
//	}
//
//	for (int i = 1; i <= n;i++)
//	{
//		for (int j = 1;j <= n;j++)
//		{
//			if (dp[i][j] == INF)
//			{
//				std::cout << 0 << " ";
//				continue;
//			}
//			std::cout << dp[i][j] << " ";
//		}std::cout << '\n';
//	}
//}

//7.

#define INF 9999999

int V{}, E{}, ans{INF};
int dp[401][401]{};

int main()
{
	std::cin >> V >> E;

	std::fill(dp[0], dp[401], INF);

	for (int i = 0; i < E;i++)
	{
		int x{}, y{}, z{};

		std::cin >> x >> y >> z;

		dp[x][y] = z;
	}

	for (int i = 1;i <= V;i++)
	{
		for (int j = 1; j <= V;j++)
		{
			for (int k = 1; k <= V;k++)
			{
				if (dp[j][k] > dp[j][i] + dp[i][k])
				{
					dp[j][k] = dp[j][i] + dp[i][k];
				}
			}
		}
	}

	for (int i = 1; i <= V;i++)
	{
		ans = std::min(ans, dp[i][i]);
	}

	std::cout << (ans == INF ? -1 : ans) << '\n';
}