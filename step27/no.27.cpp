#include <iostream>
#include <algorithm>
#include <limits.h>

//1.

//int T{}, K{};
//int dp[501][501]{};
//int sum[501]{};
//
//int main()
//{
//	std::ios::sync_with_stdio(false);
//	std::cout.tie(NULL);
//	std::cin.tie(NULL);
//
//
//
//	std::cin >> T;
//
//	for (int z = 0; z < T; z++)
//	{
//		std::cin >> K;
//
//		for (int i = 1; i <= K;i++)
//		{
//			int x{};
//
//			std::cin >> x;
//			sum[i] = sum[i - 1] + x;
//		}
//
//		for (int i = 1;i < K;i++)
//		{			
//			int a = 1;
//			int b = i + 1;
//
//			for (int l = 0; l < K - i;l++)
//			{
//				dp[a][b] = INT_MAX;
//				for (int m = b - i;m <= b - 1;m++)
//				{
//					dp[a][b] = std::min(dp[a][b], dp[a][m] + dp[m + 1][b] + sum[b] - sum[a - 1]);
//				}
//				a++;
//				b++;
//			}
//					
//		}
//		std::cout << dp[1][K] << '\n';
//	}
//
//}

//2.

int N{};
int arry[501][2]{};
int dp[501][501]{};

int main()
{
	std::cin >> N;

	for (int i = 1; i <= N;i++)
	{
		std::cin >> arry[i][0] >> arry[i][1];
	}

	for (int i = 1; i < N; i++)
	{
		for (int j = 1; i + j <= N; j++)
		{
			dp[j][i + j] = INT_MAX;

			for (int k = j; k <= i + j; k++)
			{
				dp[j][i + j] = std::min(dp[j][i + j], dp[j][k] + dp[k + 1][i + j] + arry[j][0] * arry[k][1] * arry[i + j][1]);
			}
		}
	}

	std::cout << dp[1][N] << '\n';
}