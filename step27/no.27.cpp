#include <iostream>
#include <algorithm>
#include <limits.h>
#include <vector>

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

//int N{};
//int arry[501][2]{};
//int dp[501][501]{};
//
//int main()
//{
//	std::cin >> N;
//
//	for (int i = 1; i <= N;i++)
//	{
//		std::cin >> arry[i][0] >> arry[i][1];
//	}
//
//	for (int i = 1; i < N; i++)
//	{
//		for (int j = 1; i + j <= N; j++)
//		{
//			dp[j][i + j] = INT_MAX;
//
//			for (int k = j; k <= i + j; k++)
//			{
//				dp[j][i + j] = std::min(dp[j][i + j], dp[j][k] + dp[k + 1][i + j] + arry[j][0] * arry[k][1] * arry[i + j][1]);
//			}
//		}
//	}
//
//	std::cout << dp[1][N] << '\n';
//}

//3.

//int N{}, M{};
//int arry[501][501];
//int check[501][501];
//int dx[] = { -1,1,0,0 };
//int dy[] = { 0,0,-1,1 };
//
//int find(int x, int y)
//{
//	if (x == N - 1 && y == M - 1)
//	{
//		return 1;
//	}
//
//	if (check[x][y] == -1)
//	{
//		check[x][y] = 0;
//		for (int i = 0; i < 4; i++)
//		{
//			int nx = dx[i] + x;
//			int ny = dy[i] + y;
//			if (nx >= 0 && nx < N && ny >= 0 && ny < M)
//			{
//				if (arry[nx][ny] < arry[x][y])
//				{
//					check[x][y] = check[x][y] + find(nx, ny);
//				}
//			}
//		}
//	}
//
//	return check[x][y];
//}
//
//int main()
//{	
//	std::cin >> N >> M;
//
//	for (int i = 0; i < N;i++)
//	{
//		for (int j = 0; j < M;j++)
//		{
//			std::cin >> arry[i][j];
//			check[i][j] = -1;
//		}
//	}
//
//	std::cout << find(0, 0) << '\n';
//}

//4.
//int N{}, M{};
//int weight[31];
//bool check[31][15001];
//
//void solve(int a, int b)
//{
//	if (a > N || check[a][b])
//	{
//		return;
//	}
//
//	check[a][b] = true;
//
//	solve(a + 1, b + weight[a]);
//	solve(a + 1, b);
//	solve(a + 1, abs(b - weight[a]));
//}
//
//int main()
//{
//	std::cin >> N;
//
//	for (int i = 0; i < N; i++)
//	{
//		std::cin >> weight[i];
//	}
//
//	solve(0, 0);
//
//	std::cin >> M;
//
//	for (int i = 0; i < M; i++)
//	{
//		int x{};
//		std::cin >> x;
//
//		if (x > 15000)
//		{
//			std::cout << "N" << '\n';
//		}
//
//		else if (check[N][x])
//		{
//			std::cout << "Y" << '\n';
//		}
//
//		else
//		{
//			std::cout << "N" << '\n';
//		}
//	}
//}

//5.

int main()
{
	int n{}, k{};

	int coin[101]{};
	int dp[10001]{};

	std::cin >> n >> k;

	for (int i = 0; i < n;i++)
	{		
		std::cin >> coin[i];
	}		

	dp[0] = 1;
	for (int i = 0; i < n;i++)
	{
		for (int j = coin[i];j <= k;j++)
		{
			dp[j] += dp[j - coin[i]];
		}
	}
	
	std::cout << dp[k] << '\n';
}