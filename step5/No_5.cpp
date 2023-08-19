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