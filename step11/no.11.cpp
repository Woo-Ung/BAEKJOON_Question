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
int main()
{
	long long int n{}, sum{};
	std::cin >> n;
	for (int i = 1 ; i < n; i++)
	{
		for (int j = i + 1; j < n+1; j++)
		{
			sum += 1;
		}
	}
	std::cout << sum << std::endl;
	std::cout << 2 << std::endl;
}