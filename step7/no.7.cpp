#include <iostream>

//1.
//int main()
//{
//	int n{}, m{};
//
//	std::cin >> n >> m;
//	
//	int** array = new int*[n];	
//
//	for (int i = 0;i < n;i++)
//	{
//		array[i] = new int[m];		
//	}
//
//	for (int i = 0;i < 2 *n;i++)
//	{
//		for (int j = 0;j < m;j++)
//		{			
//			int x{};
//			std::cin >> x;
//
//			if (i >= n) 
//			{				
//				array[i%n][j] += x;
//			}
//			else
//			{
//				array[i][j] = x;
//			}
//		}
//		
//	}
//
//	for (int i = 0;i < n;i++)
//	{
//		for (int j = 0;j < m;j++)
//		{
//			std::cout << array[i][j] << " ";
//		}std::cout << std::endl;
//	}
//
//	for (int i = 0; i < n;i++)
//	{
//		delete array[i];
//	}
//	delete array;
//}

//2.
//int main()
//{
//	int array[9][9]{};
//	int max{}, a{}, b{};
//
//
//	for (int i = 0;i < 9;i++)
//	{
//		for (int j = 0;j < 9;j++)
//		{
//			int x{};
//			std::cin >> x;
//			array[i][j] = x;
//			if (max < x)
//			{
//				max = x;
//				a = i;
//				b = j;
//			}			
//		}
//	}
//
//	std::cout << max << std::endl;
//	std::cout << a+1 << " " << b + 1 << std::endl;
//}

//3.
//int main()
//{
//	char array[5][16]{};
//	std::string x{};
//	for (int i = 0;i < 5;i++)
//	{			
//		std::cin >> x;
//		for (int j = 0;i < 16;j++)
//		{
//			if (x[j] == '\0')
//			{
//				break;
//			}
//			array[i][j] = x[j];
//		}
//	}
//
//	for (int i = 0;i < 16;i++)
//	{
//		for (int j = 0;j < 5;j++)
//		{
//			if(array[j][i] != '\0')
//			{
//				std::cout << array[j][i];
//			}
//		}
//	}	
//}

//4.
//int main()
//{
//	int N{}, count{}, x{}, y{};
//	int array[100][100]{};	
//	std::cin >> N;
//
//	for (int k = 0; k < N;k++)
//	{
//		std::cin >> x >> y;
//
//		for (int i = x; i<x+10;i++)
//		{
//			for (int j = y; j < y + 10;j++)
//			{
//				if (array[i][j] == 0)
//				{
//					array[i][j] = 1;
//					count++;
//				}
//			}
//		}
//	}
//	std::cout << count << std::endl;
//}