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

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	int N{}, K{}, mx{INT_MIN};

	int arry[100001]{};

	std::cin >> N >> K;

	for (int i = 1; i <= N;i++)
	{
		int x{};
		std::cin >> x;		

		arry[i] = arry[i - 1] + x;
	}

	for (int i = K; i <= N; i++)
	{
		mx = std::max(mx, arry[i] - arry[i-K]);
	}

	std::cout << mx << '\n';
}