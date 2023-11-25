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
int main()
{
	int N{}, K{}, factors{}, count{};

	std::cin >> N >> K;

	for (int i = 1; i <= N; i++)
	{
		if (N % i == 0)
		{
			factors = i;
			count++;
			if (K == count)
			{
				std::cout << factors << std::endl;
				break;
			}			
		}
	}
	if (K > count)
	{
		std::cout << "0" << std::endl;
	}
}