#include <iostream>
#include <vector>
#include <string>

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

//7.
//int main()
//{
//	std::string S{};
//	int R{}, T{};
//	std::cin >> T;	
//	
//	
//
//	for (int k = 0; k < T;k++)
//	{
//		std::cin >> R;
//		std::cin >> S;
//
//		for (int i = 0; i < size(S);i++)
//		{
//			for (int j = 0; j < R;j++)
//			{
//				std::cout << S[i];
//			}
//		}std::cout << std::endl;
//	}
//}

//8.
//int main()
//{
//	int count{};	
//	std::string S{};
//	std::getline(std::cin,S);
//
//	for (int i = 0; i < size(S);i++)
//	{		
//		if (S[i] == ' ')
//		{			
//			count++;
//		}
//	}	
//
//	if (S[0] == ' ')
//	{
//		count--;
//	}
//
//	if (S[size(S) - 1] == ' ')
//	{
//		count--;
//	}
//
//	std::cout << count+1 << std::endl;
//}

//9.
//int main()
//{
//	std::string A, B;
//	std::cin >> A >> B;
//	
//	char temp = A[0];
//	A[0] = A[2];
//	A[2] = temp;
//
//	char temp2 = B[0];
//	B[0] = B[2];
//	B[2] = temp2;
//
//	for (int i = 0;i < 3;i++)
//	{
//		if (A > B)
//		{
//			std::cout << (int)A[i]-48;
//		}
//		else
//		{
//			std::cout << (int)B[i]-48;
//		}
//		
//	}std::cout << std::endl;
//}

//10.
//int main()
//{
//	std::string AB;
//	int sum{};
//
//	std::cin >> AB;
//	
//	while (true)
//	{
//		static int i{};
//
//		if (AB[i] == NULL)
//		{
//			break;
//		}
//		
//		if ('A' <= AB[i] && 'C' >= AB[i])
//		{
//			sum += 3;
//		}
//		if ('D' <= AB[i] && 'F' >= AB[i])
//		{
//			sum += 4;
//		}
//		if ('G' <= AB[i] && 'I' >= AB[i])
//		{
//			sum += 5;
//		}
//		if ('J' <= AB[i] && 'L' >= AB[i])
//		{
//			sum += 6;
//		}
//		if ('M' <= AB[i] && 'O' >= AB[i])
//		{
//			sum += 7;
//		}
//		if ('P' <= AB[i] && 'S' >= AB[i])
//		{
//			sum += 8;
//		}
//		if ('T' <= AB[i] && 'V' >= AB[i])
//		{
//			sum += 9;
//		}
//		if ('W' <= AB[i] && 'Z' >= AB[i])
//		{
//			sum += 10;
//		}
//		i++;
//	}
//	std::cout << sum << std::endl;
//}

//11.
//int main()
//{
//	char X[101];
//
//	for (int i = 0;i < 100;i++)
//	{
//		std::cin.getline(X, 101, '\n');
//
//		std::cout << X << std::endl;
//	}
//}