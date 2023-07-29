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
int main()
{
	int x{}, N{};
	std::cin >> N;

	int* Array = new int[N];

	for (int i = 0; i < N;i++)
	{
		std::cin >> x;
		Array[i] = x;
	}

	for (int i = 0; i < N;i++)
	{
		for (int j = i+1; j < N;j++)
		{
			if (Array[i] > Array[j])
			{
				int temp = Array[i];
				Array[i] = Array[j];
				Array[j] = temp;
			}
		}		
	}
	std::cout << Array[0] << " " << Array[N - 1] << std::endl;

	delete[] Array;
}