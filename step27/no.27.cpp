#include <iostream>
#include <algorithm>
#include <limits.h>

//1.

int T{}, K{};
int dp[501][501]{};
int sum[501]{};

int main()
{
	std::ios::sync_with_stdio(false);
	std::cout.tie(NULL);
	std::cin.tie(NULL);



	std::cin >> T;

	for (int z = 0; z < T; z++)
	{
		std::cin >> K;

		for (int i = 1; i <= K;i++)
		{
			int x{};

			std::cin >> x;
			sum[i] = sum[i - 1] + x;
		}

		for (int i = 1;i < K;i++)
		{			
			int a = 1;
			int b = i + 1;

			for (int l = 0; l < K - i;l++)
			{
				dp[a][b] = INT_MAX;
				for (int m = b - i;m <= b - 1;m++)
				{
					dp[a][b] = std::min(dp[a][b], dp[a][m] + dp[m + 1][b] + sum[b] - sum[a - 1]);
				}
				a++;
				b++;
			}
					
		}
		std::cout << dp[1][K] << '\n';
	}

}