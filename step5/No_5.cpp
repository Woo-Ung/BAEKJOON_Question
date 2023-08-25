#include <iostream>

//1.
//int main()
//{
//	int x{};
//	std::string word;
//
//	std::cin >> word;
//	std::cin >> x;
//
//	x -= 1;
//
//	std::cout << word[x] << std::endl;
//}

//2.
//int main()
//{
//	int x{};
//	std::string word;
//
//	std::cin >> word;
//
//	for (int e : word)
//	{
//		if (e == NULL)
//			break;
//		x++;
//	}
//
//	std::cout << x << std::endl;
//}

//3.
//int main()
//{
//	int  T{};
//	std::string word;
//
//	std::cin >> T;
//
//	for (int i = 0;i < T;i++)
//	{		
//		std::cin >> word;
//
//		int count{};
//
//		for (int e : word)
//		{						
//			if (e == NULL)
//				break;
//
//			count++;
//		}		
//		std::cout << word[0] << word[count-1] << std::endl;		
//	}	
//}

//4.
//int main()
//{
//	char x{};
//
//	std::cin >> x;
//
//	std::cout << (int)x << std::endl;
//}

//5.
//int main()
//{
//	int N{}, sum{};
//	std::string x;
//	std::cin >> N;
//	std::cin >> x;
//
//	for (int i = 0; i < N;i++)
//	{
//		sum += (int)x[i]-48;
//	}
//	
//	std::cout << sum << std::endl;
//
//}

//6.
//int main()
//{
//	std::string x;
//	std::cin >> x;
//	char abc[26]{ 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
//
//
//
//	for (int i = 0; i < 26;i++)
//	{
//		for (int j = 0;j < size(x);j++)
//		{
//			if (abc[i] == x[j])
//			{
//				abc[i] = j;
//				break;
//			}
//			if (j == size(x)-1)
//			{
//				abc[i] = -1;
//			}
//		}
//	}
//
//	for (int i = 0; i < 26;i++)
//	{
//		std::cout << (int)abc[i] << " ";
//	}std::cout << std::endl;
//}