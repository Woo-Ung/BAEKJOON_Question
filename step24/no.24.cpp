#include <iostream>

//1.
//int W{}, B{};
//int ret[128][128]{};
//
//void check(int a,int b, int c)
//{	
//	bool cut{ false };
//
//	int BW = ret[a][b];
//
//	for (int i = a; i < a+c;i++)
//	{		
//		for (int j = b; j < b+c;j++)
//		{
//			if (BW != ret[i][j])
//			{
//				cut = true;
//				break;
//			}
//		}
//	}
//
//	if (cut)
//	{
//		check(a, b, c / 2);
//		check(a, b + c / 2, c / 2);
//		check(a + c / 2, b, c / 2);
//		check(a + c / 2, b + c / 2, c / 2);
//	}
//
//	else
//	{
//		if (BW == 0)
//		{
//			W++;
//		}
//		else if (BW == 1)
//		{
//			B++;
//		}
//	}
//}
//
//int main()
//{
//	int N{};
//	
//	std::cin >> N;
//
//	for (int i = 0; i < N;i++)
//	{
//		for (int j = 0; j < N;j++)
//		{
//			std::cin >> ret[i][j];
//		}
//	}
//
//	check(0, 0 , N);
//
//	std::cout << W << '\n' << B << '\n';
//	
//}


//2.

//char ret[64][64] {};
//
//void check(int a, int b, int c)
//{
//	bool cut{ false };
//
//	char point = ret[a][b];
//
//	for (int i = a; i < a + c;i++)
//	{
//		for (int j = b; j < b + c;j++)
//		{
//			if (point != ret[i][j])
//			{
//				cut = true;
//				break;
//			}			
//		}
//
//	}	
//
//	if (cut)
//	{
//		std::cout << "(";
//		check(a, b, c / 2);
//		check(a, b + c / 2, c / 2);
//		check(a + c / 2, b, c / 2);
//		check(a + c / 2, b + c / 2, c / 2);
//		std::cout << ")";
//	}
//
//	else
//	{
//		std::cout << point;		
//	}
//}
//
//int main()
//{
//	int N{};
//
//	std::cin >> N;
//
//	for (int i = 0; i < N;i++)
//	{
//		for (int j = 0; j < N;j++)
//		{
//			std::cin >> ret[i][j];
//		}
//	}
//
//	check(0, 0, N);
//}

//3.
//
//int one{}, zero{}, mone{};
//int ret[2187][2187];
//
//void check(int a, int b, int c)
//{
//	bool cut{ false };
//
//	int point = ret[a][b];
//
//	for (int i = a; i < a + c; i++)
//	{
//		for (int j = b; j < b + c; j++)
//		{
//			if (ret[i][j] != point)
//			{
//				cut = true;
//				break;
//			}
//		}
//	}
//
//	if (cut)
//	{
//		check(a, b, c / 3);
//		check(a + c / 3, b, c / 3);
//		check(a + c * 2 / 3, b, c / 3);
//		check(a, b + c / 3, c / 3);
//		check(a + c / 3, b + c / 3, c / 3);
//		check(a + c * 2/ 3, b + c / 3, c / 3);
//		check(a, b + c * 2 / 3, c / 3);
//		check(a + c / 3, b + c * 2 / 3, c / 3);
//		check(a + c * 2 / 3, b + c * 2 / 3, c / 3);
//	}
//
//	else
//	{
//		if (point == 1)
//		{
//			one++;
//		}
//		else if (point == 0)
//		{
//			zero++;
//		}
//		else
//		{
//			mone++;
//		}
//	}
//}
//
//int main()
//{
//	int N{};
//
//	std::cin >> N;
//
//	for (int i = 0; i < N; i++)
//	{
//		for (int j = 0; j < N; j++)
//		{
//			std::cin >> ret[i][j];
//		}
//	}
//
//	check(0, 0, N);
//
//	std::cout << mone << '\n' << zero << '\n' << one << '\n';
//
//}

//4.
//
//long long x{}, A{}, B{}, C{};
//
//long long power(long long b)
//{
//	if (b == 0)
//	{
//		return 1;
//	}
//
//	if (b == 1)
//	{
//		return A % C;
//	}
//
//	x = power(b / 2) % C;
//
//	if (b % 2 == 0)
//	{
//		return x * x % C;
//	}
//
//	return x * x % C * A % C;
//}
//
//int main()
//{
//
//	std::cin >> A >> B >> C;
//
//	std::cout << power(B) << '\n';
//
//}

//5.
const long long mod = 1000000007;

long long N{}, K{}, A{}, B{};

int BC(int a)
{
	if (a == 0)
	{
		return 1;
	}

	if (a % 2 == 1)
	{
		return B * BC(a - 1) % mod;
	}

	else
	{
		long long x = BC(a / 2);
		return x * x % mod;
	}
}

int main()
{
	std::cin >> N >> K;

	A = 1;
	for (int i = N; i >= N - K + 1;i--)
	{
		A = (A * i) % mod;
	}

	B = 1;
	for (int i = 1; i <= K;i++)
	{
		B = (B * i) % mod;
	}

	B = BC(mod - 2);

	std::cout << (A * B) % mod << '\n';

}