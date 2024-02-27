#include <iostream>
#include <vector>

//1.
//int main()
//{
//	std::ios::sync_with_stdio(false);
//	std::cin.tie(nullptr);
//	std::cout.tie(NULL);
//
//	int T{}, A{}, B{}, C{}, D{};	
//
//	std::cin >> T;
//
//	for (int i = 0;i < T;i++)
//	{
//		std::vector<int> num{};
//		int answer{ 1 };
//
//		std::cin >> A >> B;
//
//		if (A > B)
//		{
//			C = A;
//			D = B;
//		}
//		else
//		{
//			C = B;
//			D = A;
//		}
//
//		int E = C;
//
//		for (int i = 2; i <= E;i++)
//		{
//			if (C == 1)
//			{
//				break;
//			}
//			if (C % i == 0)
//			{
//				C = C / i;
//				num.push_back(i);
//				i--;
//			}
//		}
//
//		for (int i = 0; i < size(num); i++)
//		{
//			if (D == 1)
//			{
//				break;
//			}
//			if (D % num[i] == 0)
//			{
//				D = D / num[i];
//			}
//		}
//
//		for (auto e : num)
//		{
//			answer *= e;
//		}
//
//		std::cout << answer * D << '\n';
//	}
//}

//2.
//int gcd(int a, int b)
//{
//	int r;
//	while (b != 0)
//	{
//		r = a % b;
//		a = b;
//		b = r;
//	}
//	return a;
//}
//
//int main()
//{
//	std::ios::sync_with_stdio(false);
//	std::cin.tie(nullptr);
//	std::cout.tie(NULL);
//
//	long long int A{}, B{}, C{}, D{};
//
//	std::cin >> A >> B;
//
//	if (A > B)
//	{
//		C = A;
//		D = B;
//	}
//	else
//	{
//		C = B;
//		D = A;
//	}
//
//	std::cout << (C * D) / gcd(C, D) << '\n';
//}

//3.
int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(NULL);

	int A{}, B{}, C{}, D{}, E{}, a{}, b{}, n{}, m{};

	std::cin >> A >> B >> a >> b;

	n = (A * b) + (a*B);
	m = b * B;

	if (n > m)
	{
		C = m;
	}
	else
	{
		C = n;
	}

	for (int i = 2; i <= C;i++)
	{
		if (n % i == 0 && m % i == 0)
		{
			n /= i;
			m /= i;
			C /= i;
			i--;
		}
	}
	
	std::cout << n << " " << m << '\n';
}