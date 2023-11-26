#include <iostream>

//1.
//int main()
//{
//	int first{}, second{};
//
//	while (true)
//	{
//		std::cin >> first >> second;
//		if (first == 0 && second == 0)
//		{
//			break;
//		}
//
//		if (second % first == 0)
//		{
//			std::cout << "factor" << std::endl;
//		}
//
//		else if (first % second == 0)
//		{
//			std::cout << "multiple" << std::endl;
//		}
//
//		else
//		{
//			std::cout << "neither" << std::endl;
//		}
//	}
//
//}

//2.
//int main()
//{
//	int N{}, K{}, factors{}, count{};
//
//	std::cin >> N >> K;
//
//	for (int i = 1; i <= N; i++)
//	{
//		if (N % i == 0)
//		{
//			factors = i;
//			count++;
//			if (K == count)
//			{
//				std::cout << factors << std::endl;
//				break;
//			}			
//		}
//	}
//	if (K > count)
//	{
//		std::cout << "0" << std::endl;
//	}
//}

//3.
int main()
{
	int N{};
	
	
	while (true)
	{
		int sum{}, count{};
		int factors[100000]{};
		std::cin >> N;

		if (N == -1)
		{
			break;
		}

		for (int i = 1; i < N; i++)
		{
			if (N % i == 0)
			{
				factors[count+1] = i;
				sum += i;
				count++;
			}
		}

		if (sum == N)
		{
			std::cout << N << " = ";
			for (int i = 1; i <= count ;i++)
			{
				if (i != 1)
				{
					std::cout << " + ";
				}
				std::cout << factors[i];
			}
			std::cout << std::endl;
		}

		else
		{
			std::cout << N <<" is NOT perfect." << std::endl;
		}
	}
}