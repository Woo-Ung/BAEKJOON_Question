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

//5.
//int main()
//{
//	int max{};
//	int word[26]{};
//	char correct{};
//	std::string A{};
//	std::cin >> A;
//
//	for (int i = 0; i < size(A);i++)
//	{		
//		if (A[i] >= 97)
//		{
//			A[i] -= 32;
//		}
//		word[A[i] - 65] += 1;		
//	}
//	for (int j = 0; j < 26;j++)
//	{
//		if (word[j] == max)
//		{
//			correct = '?';
//		}
//
//		if (word[j] > max)
//		{
//			max = word[j];
//			correct = (char)(j + 65);
//		}
//	}
//	std::cout << correct << std::endl;
//}

//6.
int main()
{
	static int i{};
	std::string word[8]{ "c=","c-" ,"dz=","d-","lj","nj","s=","z=" };
	std::string W;

	std::cin >> W;

	int count = size(W);

	for (int i = 0; size(W) > i;i++);
	{
		if (W[i] == 'c' && W[i + 1] == '=' || '-');
		{
			count = -1;
		}
	}

}
