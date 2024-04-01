#include<iostream>
#include <cmath>

//1.
//int main()
//{
//	int N{};
//
//	std::cin >> N;
//
//	std::cout << N * (N - 1) << std::endl;
//}

//2.
//int main()
//{
//	int N{};
//
//	std::cin >> N;
//
//	std::cout << pow(2, N) << std::endl;
//
//}

//3.
//int main()
//{
//	int N{}, P{1};
//
//	std::cin >> N;
//
//	if (N == 0)
//	{
//		std::cout << 1 << std::endl;
//	}
//
//	else
//	{
//		for (int i = N; i > 0;i--)
//		{
//			P = P * i;
//		}
//		std::cout << P << std::endl;
//	}
//}

//4.
int factorial(int n)
{
	if (n <= 1)
	{
		return 1;
	}

	else
	{
		return n * factorial(n - 1);
	}
}

int main()
{
	int N{}, K{};

	std::cin >> N >> K;

	if (K == 0 && K == N)
	{
		std::cout << 1 << '\n';
	}
	else
	{
		std::cout << factorial(N) / (factorial(N - K) * factorial(K)) << '\n';
	}
}