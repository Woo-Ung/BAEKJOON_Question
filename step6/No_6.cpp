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
//int main()
//{		
//	std::string W;
//
//	std::cin >> W;
//
//	int count = size(W);
//
//	for (static int i = 0; size(W) > i;i++)
//	{		
//		if (W[i] == 'c' && W[i + 1] == '=' || W[i + 1] == '-')
//		{
//			count--;
//			i++;
//		}
//
//		if (W[i] == 'd' && W[i + 1] == '-')
//		{
//			count --;
//			i++;
//		}
//
//		if (W[i] == 'd' && W[i + 1] == 'z' && W[i+2]=='=')
//		{
//			count -= 2;
//			i += 2;
//		}
//
//		if (W[i] == 'l' && W[i + 1] == 'j')
//		{
//			count--;
//			i++;
//		}
//
//		if (W[i] == 'n' && W[i + 1] == 'j')
//		{
//			count--;
//			i++;
//		}
//
//		if (W[i] == 's' && W[i + 1] == '=')
//		{
//			count--;
//			i++;
//		}
//
//		if (W[i] == 'z' && W[i + 1] == '=')
//		{
//			count--;
//			i++;
//		}		
//	}
//	std::cout << count << std::endl;
//}

//7.
//int main()
//{
//	int N{}, count{};
//	
//	std::string word;
//
//	std::cin >> N;
//
//	count = N;
//
//	for (int i = 0; i < N; i++)
//	{
//		std::cin >> word;
//
//		int check[26]{};
//
//		for (int j = 0; j < size(word);j++)
//		{			
//			check[word[j] - 97]++;
//			if (j > 0 && word[j] == word[j - 1])
//			{
//				check[word[j] - 97] --;
//			}
//			
//			if (check[word[j] - 97] > 1)
//			{
//				count--;
//				break;
//			}				
//		}		
//	}
//	std::cout << count << std::endl;
//}

//8.
int main()
{
	std::string subject{}, ABC{};
	double score{}, scoreA{}, scoreB{};

	double sum{}, avg{};

	std::cout << std::fixed;
	std::cout.precision(6);

	for (int i = 0;i < 20;i++)
	{
		std::cin >> subject;
		std::cin >> score;
		std::cin >> ABC;

		if (ABC == "A+")
		{
			scoreA = 4.5;
		}
		if (ABC == "A0")
		{
			scoreA = 4.0;
		}
		if (ABC == "B+")
		{
			scoreA = 3.5;
		}
		if (ABC == "B0")
		{
			scoreA = 3.0;
		}
		if (ABC == "C+")
		{
			scoreA = 2.5;
		}
		if (ABC == "C0")
		{
			scoreA = 2.0;
		}
		if (ABC == "D+")
		{
			scoreA = 1.5;
		}
		if (ABC == "D0")
		{
			scoreA = 1.0;
		}
		if (ABC == "F")
		{
			scoreA = 0.0;
		}
		if (ABC == "P")
		{
			continue;
		}

		scoreB += score;
		sum += (score * scoreA);
	}

	avg = sum / scoreB;

	std::cout << avg << std::endl;
}