#include <iostream>


//1.
//int main()
//{
//    std::string A{ R"(         ,r'"7
//r`-_   ,'  ,/
// \. ". L_r'
//   `~\/
//      |
//      |)" };
//
//    std::cout << A << std::endl;
//}

//2.
//int main()
//{
//	int a[6]{ 1,1,2,2,2,8 };
//	int b[6]{};
//
//	for (int i = 0; i < 6;i++)
//	{
//		std::cin >> b[i];
//	}
//
//	for (int i = 0; i < 6;i++)
//	{
//		std::cout << a[i] - b[i] << " ";
//	} std::cout << std::endl;
//
//}

//3.
//int main()
//{
//	int N{};
//	std::cin >> N;
//
//	for (int i = 0; i < 2 * N - 1; i++)
//	{
//		if (i < N)
//		{
//			for (int j = N; j > i + 1; j--)
//			{
//				std::cout << " ";
//			}
//			for (int j = 0; j < 2 * i + 1; j++)
//			{
//				std::cout << "*";
//			}
//		}
//		if (i >= N)
//		{
//			for (int j = N; j <= i; j++)
//			{
//				std::cout << " ";
//			}
//			for (int j = (2 * N - 1) - 2 * (i - N+1); j > 0; j--)
//			{
//				std::cout << "*";
//			}			
//		}std::cout << std::endl;
//	}
//}

//4.
//int main()
//{
//	int count{};
//	std::string word;
//	std::cin >> word;
//
//	if(size(word) / 2 == 0)
//	{
//		std::cout << 1 << std::endl;
//	}
//	for (int i = 0; i < size(word)/2; i++)
//	{
//		if (word[i] == word[size(word) - i - 1])
//		{
//			count++;
//		}
//		else
//		{
//			std::cout << 0 << std::endl;
//			break;
//		}
//		if (count == size(word)/2)
//		{
//			std::cout << 1 << std::endl;
//		}
//	}
//}