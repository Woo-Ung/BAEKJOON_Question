#include <iostream>
#include <vector>
#include <queue>
#include <cstring>

//1.

int V{}, E{}, start{};
const int INF{ 9999999 };
int dp[20001]{};

std::vector<std::pair<int, int>> point[20001];

void bfs(int a)
{
	std::priority_queue<std::pair<int,int>, std::vector<std::pair<int,int>>, std::greater<std::pair<int,int>>> pq;
	pq.push({0,a});
	dp[a] = 0;

	while (!pq.empty())
	{	
		int x = pq.top().second;
		int cost = pq.top().first;

		pq.pop();

		for (int i = 0; i < point[x].size();i++)
		{
			int ncost = cost + point[x][i].second;
			int nx = point[x][i].first;
			

			if (dp[nx] > ncost)
			{
				pq.push({ ncost,nx });
				dp[nx] = ncost;
			}
		}
	}
}

int main()
{
	std::cin >> V >> E >> start;

	for (int i = 0; i < E;i++)
	{
		int x{}, y{}, z{};

		std::cin >> x >> y >> z;
		point[x].push_back({ y,z });
	}

	memset(dp, INF, sizeof(dp));

	bfs(start);

	for (int i = 1;i <= V;i++)
	{
		if (dp[i] <= INF)
		{
			std::cout << dp[i] << '\n';
		}
		else
		{
			std::cout << "INF" << '\n';
		}
	}
}