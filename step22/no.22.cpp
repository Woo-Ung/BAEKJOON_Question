#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

//1.
//
//int main()
//{
//	std::ios::sync_with_stdio(false);
//	std::cin.tie(NULL);
//	std::cout.tie(NULL);
//
//	int N{}, M{}, i{}, j{};
//
//	std::vector<long long int> arry{ 0, };
//
//	std::cin >> N >> M;
//
//	for (int a = 1; a <= N;a++)
//	{
//		long long int x{};
//		std::cin >> x;
//		x += arry[a - 1];	
//
//		arry.push_back(x);
//	}
//
//	for (int a = 0; a < M;a++)
//	{		
//		std::cin >> i >> j;		
//		long long int sum{};
//
//		sum = arry[j] - arry[i - 1];
//
//		std::cout << sum << '\n';
//	}
//
//}

//2.

//int main()
//{
//	std::ios::sync_with_stdio(false);
//	std::cin.tie(NULL);
//	std::cout.tie(NULL);
//
//	int N{}, K{}, mx{INT_MIN};
//
//	int arry[100001]{};
//
//	std::cin >> N >> K;
//
//	for (int i = 1; i <= N;i++)
//	{
//		int x{};
//		std::cin >> x;		
//
//		arry[i] = arry[i - 1] + x;
//	}
//
//	for (int i = K; i <= N; i++)
//	{
//		mx = std::max(mx, arry[i] - arry[i-K]);
//	}
//
//	std::cout << mx << '\n';
//}

//3.
//int arry[26][200001]{};
//
//int main()
//{
//	std::ios::sync_with_stdio(false);
//	std::cin.tie(NULL);
//	std::cout.tie(NULL);
//
//	int N{}, l{}, r{};
//
//	char a;
//	std::string S;
//	std::cin >> S >> N;
//
//	for (int i = 0; i < size(S);i++)
//	{
//		if (i != 0)
//		{
//			for (int j = 0;j < 26;j++)
//			{
//				arry[j][i] += arry[j][i - 1];
//			}
//		}
//		arry[S[i] - 'a'][i]++;
//	}
//
//	for (int i = 0; i < N;i++)
//	{		
//		std::cin >> a >> l >> r;
//	
//		if (l == 0)
//		{
//			std::cout << arry[a - 'a'][r] << '\n';
//		}
//
//		else
//		{
//			std::cout << arry[a - 'a'][r] - arry[a - 'a'][l - 1] << '\n';
//		}
//	}
//}

//4.
//int main()
//{
//	std::ios::sync_with_stdio(false);
//	std::cin.tie(NULL);
//	std::cout.tie(NULL);
//
//	int N{}, M{};
//	long long sum{}, ans{};
//	long long arry[1001]{};
//
//	std::cin >> N >> M;
//
//	for (int i = 0; i < N; i++)
//	{
//		int x{};
//		std::cin >> x;
//
//		sum += x;
//
//		arry[sum % M]++;
//	}
//
//	for (int i = 0; i < M;i++)
//	{
//		ans += (arry[i] * (arry[i] - 1)) / 2;
//	}
//
//	std::cout << arry[0] + ans << '\n';
//}

//5.
int arry[1025][1025]{};
int dp[1025][1025]{};

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	int N{}, M{}, a{}, b{}, c{}, d{}, ans{};


	std::cin >> N >> M;

	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= N;j++)
		{
			std::cin >> arry[i][j];

			dp[i][j] = arry[i][j] + dp[i - 1][j] + dp[i][j - 1] - dp[i - 1][j - 1];
		}
	}

	for (int i = 0;i < M;i++)
	{
		std::cin >> a >> b >> c >> d;

		ans = dp[c][d]  - dp[a - 1][d] - dp[c][b - 1] + dp[a - 1][b - 1];

		std::cout << ans << '\n';
	}
}