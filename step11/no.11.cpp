#include <iostream>

//1.
//int main()
//{
//	int n{};
//	std::cin >> n;
//	std::cout << 1 << std::endl;
//	std::cout << 0 << std::endl;
//}

//2.
//int main()
//{
//	int n{};
//	std::cin >> n;
//	std::cout << n << std::endl;
//	std::cout << 1 << std::endl;
//}

//3.
//int main()
//{
//	long long int n{};
//	std::cin >> n;
//	std::cout << n * n << std::endl;
//	std::cout << 2 << std::endl;
//}

//4.
//int main()
//{
//	long long int n{}, sum{};
//	std::cin >> n;
//	for (int i = 1 ; i < n; i++)
//	{
//		for (int j = i + 1; j < n+1; j++)
//		{
//			sum += 1;
//		}
//	}
//	std::cout << sum << std::endl;
//	std::cout << 2 << std::endl;
//}

//5.
//int main()
//{
//	long long int n{}, sum{};
//	std::cin >> n;
//	for (int i = 0 ; i < n; i++)
//	{
//		for (int j =  0; j < n; j++)
//		{
//			for (int k = 0; k < n; k++)
//			{
//				sum += 1;
//			}			
//		}
//	}
//	std::cout << sum << std::endl;
//	std::cout << 3 << std::endl;
//}

//6.
//int main()
//{
//	long long int n{}, sum{};
//	std::cin >> n;
//	
//	sum = (n * (n - 1) * (n - 2)) / 6;
//
//	std::cout << sum << std::endl;
//	std::cout << 3 << std::endl;
//}

//7.
int main()
{
	int fn{}, a1{}, a2{}, c{}, n{};

	std::cin >> a1 >> a2 >> c >> n;
	
	fn = a1 * n + a2;
	if (fn <= c * n && a1 <= c)
	{
		std::cout << 1 << std::endl;
	}
	else
	{
		std::cout << 0 << std::endl;
	}
}