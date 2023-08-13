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

//7.
//int main()
//{
//	int array[30]{};
//	int x;
//	for (int i = 0;i < 30;i++)
//	{
//		array[i] = i + 1;
//	}
//
//	for (int i = 0; i < 28;i++)
//	{
//		std::cin >> x;
//		for (int j = 0;j < 30;j++)
//		{
//			if (array[j] == x)
//			{
//				array[j] = 0;
//			}
//		}
//	}
//
//	for (int i = 0;i < 30;i++)
//	{
//		if (array[i] != 0)
//		{
//			std::cout << array[i] << std::endl;
//		}
//	}
//}

//8.
//int main()
//{
//	int A{}, x{}, count{};
//
//	int array[10]{}, empty[10]{};
//
//	for (int i = 0; i < 10;i++)
//	{
//		std::cin >> x;
//		array[i] = x;
//	}
//	for (int i = 0; i < 10;i++)
//	{
//		empty[i] = array[i] % 42;
//	}
//
//	for (int i = 0; i < 10;i++)
//	{
//		for (int j = i + 1; j < 10;j++)
//		{
//			if (empty[i] == empty[j])
//			{
//				empty[j] = -1;
//			}		
//		}
//	}
//	for (int i = 0; i < 10;i++)
//	{
//		if (empty[i] == -1)
//		{
//			count++;
//		}
//	}
//
//
//	std::cout << 10-count << std::endl;
//}

//9.
int main()
{
	int N{}, M{}, x{}, y{};
	std::cin >> N >> M;
	
	int* array = new int[N] {};;

	for (int i = 0; i < N;i++)
	{
		array[i] = i + 1;
	}

	for (int i = 0; i < M;i++)
	{
		std::cin >> x >> y;
		x -= 1;
		y -= 1;
		for (int j = x; j < y; j++)
		{
			int k = y;
			if (j > k)			
				break;			
			int temp = array[j];
			array[j] = array[k];
			array[k] = temp;
			y--;
		}
	}

	for (int i = 0; i < N;i++)
	{
		std::cout << array[i] << " ";
	}std::cout << std::endl;

	delete array;
}