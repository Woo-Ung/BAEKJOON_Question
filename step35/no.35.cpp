#include <iostream>
#include <vector>

//1.

int N{}, R{}, Q{};
int dp[100001]{};
int visited[100001]{};

std::vector<int> v[100001];

int dfs(int a)
{
	if (dp[a] != 0)
	{
		return dp[a];
	}

	visited[a] = 1;

	int ret{ 1 };

	for (int i = 0; i < v[a].size();i++)
	{
		int n = v[a][i];
		if (visited[n])
		{
			continue;
		}

		ret += dfs(n);
	}
	dp[a] = ret;
	return ret;
}

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	std::cin >> N >> R >> Q;

	for (int i = 0; i < N - 1;i++)
	{
		int a{}, b{};

		std::cin >> a >> b;

		v[a].push_back(b);
		v[b].push_back(a);
	}

	dp[R] = dfs(R);

	for (int i = 0; i < Q;i++)
	{
		int a;
		std::cin >> a;
		std::cout << dp[a] << '\n';
	}
}

