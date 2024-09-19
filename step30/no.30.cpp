#include <iostream>
#include <vector>
#include <queue>
#include <cstring>

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

int N{}, K{}, ans{};
int visited[100001]{};

void bfs(int a)
{
	std::priority_queue<std::pair<int, int>,std::vector<std::pair<int,int>>,std::greater<std::pair<int,int>>> q;
	q.push({ 0,a });

	while (!q.empty())
	{
		int time = q.top().first;
		int x = q.top().second;

		q.pop();

		if (x == K)
		{
			ans = time;
			return;
		}

		if (x * 2 < 100001 && visited[x*2] == 0)
		{
			q.push({ time,x * 2 });
			visited[x * 2] = 1;
		}

		if (x + 1 < 100001 && visited[x + 1] == 0)
		{
			q.push({ time + 1,x + 1 });
			visited[x + 1] = 1;
		}

		if (x - 1 >= 0 && visited[x - 1] == 0)
		{
			q.push({ time + 1,x - 1 });
			visited[x - 1] = 1;
		}
	}
}

int main()
{
	std::cin >> N >> K;

	bfs(N);

	std::cout << ans << '\n';
}