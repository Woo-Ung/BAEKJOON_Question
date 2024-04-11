#include<iostream>

//1.
//long long int Fac(long long int a)
//{
//	if (a <= 1)
//	{
//		return 1;
//	}
//
//	return a * Fac(a - 1);
//}
//
//int main()
//{
//	long long int N{};
//
//	std::cin >> N;
//
//	std::cout << Fac(N) << '\n';
//}

//2.
int fb(int a)
{
	if (a == 0)
	{
		return 0;
	}

	if (a == 1 || a == 2)
	{
		return 1;
	}

	return fb(a - 1) + fb(a - 2);
}

int main()
{
	int N{};

	std::cin >> N;

	std::cout << fb(N) << '\n';
}