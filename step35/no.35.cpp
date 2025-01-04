#include <iostream>
#include <vector>
#include <algorithm>

//1.

//int N{}, R{}, Q{};
//int dp[100001]{};
//int visited[100001]{};
//
//std::vector<int> v[100001];
//
//int dfs(int a)
//{
//	if (dp[a] != 0)
//	{
//		return dp[a];
//	}
//
//	visited[a] = 1;
//
//	int ret{ 1 };
//
//	for (int i = 0; i < v[a].size();i++)
//	{
//		int n = v[a][i];
//		if (visited[n])
//		{
//			continue;
//		}
//
//		ret += dfs(n);
//	}
//	dp[a] = ret;
//	return ret;
//}
//
//int main()
//{
//	std::ios_base::sync_with_stdio(false);
//	std::cin.tie(NULL);
//	std::cout.tie(NULL);
//
//	std::cin >> N >> R >> Q;
//
//	for (int i = 0; i < N - 1;i++)
//	{
//		int a{}, b{};
//
//		std::cin >> a >> b;
//
//		v[a].push_back(b);
//		v[b].push_back(a);
//	}
//
//	dp[R] = dfs(R);
//
//	for (int i = 0; i < Q;i++)
//	{
//		int a;
//		std::cin >> a;
//		std::cout << dp[a] << '\n';
//	}
//}


//2.

//int N{};
//
//int cost[10001]{};
//int dp[10001][2]{};
//
//bool check[10001]{};
//bool check2[10001]{};
//
//std::vector<int> graph[10001];
//std::vector<int> result;
//
//void dfs(int a)
//{
//	check[a] = true;
//	dp[a][0] = 0;
//	dp[a][1] = cost[a];
//
//	for (int i = 0; i < graph[a].size(); i++)
//	{
//		int next = graph[a][i];
//		if (!check[next])
//		{
//			dfs(next);
//			dp[a][0] += std::max(dp[next][0], dp[next][1]);
//			dp[a][1] += dp[next][0];
//		}
//	}
//}
//
//void path(int a, int b)
//{
//	if (dp[a][1] > dp[a][0])
//	{
//		if (!check2[b])
//		{
//			result.push_back(a);
//			check2[a] = true;
//		}
//	}
//
//	for (int i = 0; i < graph[a].size(); i++)
//	{
//		int next = graph[a][i];
//		if (next != b)
//		{
//			path(next, a);
//		}
//	}
//}
//
//int main()
//{
//	std::cin >> N;
//
//	for (int i = 1; i <= N;i++)
//	{
//		std::cin >> cost[i];
//	}
//
//	for (int i = 1; i < N;i++)
//	{
//		int a{}, b{};
//
//		std::cin >> a >> b;
//
//		graph[a].push_back(b);
//		graph[b].push_back(a);
//	}
//
//	dfs(1);
//	path(1, 1);
//	std::sort(result.begin(), result.end());
//
//	std::cout << std::max(dp[1][0], dp[1][1]) << '\n';
//	for (int i = 0; i < result.size(); i++)
//	{
//		std::cout << result[i] << ' ';
//	}
//}

//3.

int N{};

int vistited[1000001]{};
int dp[1000001][2]{};

std::vector<int> v[1000001];

void solve(int a)
{
	vistited[a] = 1;

	dp[a][0] = 1;

	for (int i = 0; i < v[a].size();i++)
	{
		int n = v[a][i];
		if (!vistited[n])
		{
			solve(n);
			dp[a][1] += dp[n][0];
			dp[a][0] += std::min(dp[n][1], dp[n][0]);
		}
	}
}

int main()
{
	std::cin >> N;

	for (int i = 0; i < N-1; i++)
	{
		int a{}, b{};
		std::cin >> a >> b;

		v[a].push_back(b);
		v[b].push_back(a);
	}

	solve(1);

	std::cout << std::min(dp[1][0], dp[1][1]);
}