#include <iostream>

//1.
//int main()
//{
//	const int N{100};	
//	int A[N]{}, n{}, x{}, v{}, count{};
//	std::cin >> n;
//	for (int i = 0; i < n;i++)
//	{
//		std::cin >> x;
//		A[i] = x;
//	}
//	std::cin >> v;
//	for (int i = 0;i < n;i++)
//	{
//		if (A[i] == v)
//		{
//			count++;
//		}
//	}
//	std::cout << count << std::endl;
//}

//2.
//int main()
//{
//	const int N{10000};	
//	int A[N]{}, n{}, x{}, v{};
//	std::cin >> n >> v;
//	for (int i = 0; i < n;i++)
//	{
//		std::cin >> x;
//		A[i] = x;
//	}	
//	for (int i = 0;i < n;i++)
//	{
//		if (A[i] < v)
//		{
//			std::cout << A[i] << std::endl;
//		}
//	}	
//}

//3.
//int main()
//{
//	int x{}, N{};
//	int max = -1000000;
//	int min = 1000000;
//	std::cin >> N;	
//
//	for (int i = 0; i < N;i++)
//	{
//		std::cin >> x;
//		if (x > max)
//		{
//			max = x;
//		}
//		if (x < min)
//		{
//			min = x;
//		}
//	}
//	std::cout << min << " " << max << std::endl;	
//}

//4.
//int main()
//{
//	int A[9]{};
//	int x{}, y{}, max{};
//
//	for (int i = 0; i < 9;i++)
//	{
//		std::cin >> x;
//		A[i] = x;
//	}	
//	for (int i = 0;i < 9;i++)
//	{
//		if (A[i] >max )
//		{
//			max = A[i];
//			y = i;
//		}		
//	}
//
//	std::cout << A[y] << std::endl;
//	std::cout << y+1 << std::endl;
//}

//5.
//int main()
//{
//	
//	int N{}, M{}, i{}, j{}, k{};
//	std::cin >> N >> M;
//	
//	int* array = new int[N] {};
//
//	for (int a = 0; a < M;a++)
//	{
//		std::cin >> i >> j >> k;
//		i = i - 1;
//		j = j - 1;
//		for (int b = 0; b < abs(j-i)+1 ; b++)
//		{
//			array[i+b] = k;
//		}
//	}
//
//	for (int a = 0; a < N;a++)
//	{
//		std::cout << array[a] << " ";
//	}std::cout << std::endl;
//
//	delete array;
//}

//6.
//int main()
//{
//	
//	int N{}, M{}, i{}, j{}, k{};
//	std::cin >> N >> M;
//	
//	int* array = new int[N] {};
//
//	for (int a = 0; a < N;a++)
//	{
//		array[a] = a + 1;
//	}
//
//	for (int a = 0; a < M;a++)
//	{
//		std::cin >> i >> j;
//		i = i - 1;
//		j = j - 1;		
//		int temp = array[i];
//		array[i] = array[j];
//		array[j] = temp;
//	}
//
//	for (int a = 0; a < N;a++)
//	{
//		std::cout << array[a] << " ";
//	}std::cout << std::endl;
//
//	delete array;
//}