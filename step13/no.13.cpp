#include <iostream>
#include <vector>
#include <algorithm>

//1.
//int main()
//{
//	int N{};
//
//	std::cin >> N;
//
//	int* num = new int[N];
//
//	for (int i = 0; i < N;i++)
//	{
//		std::cin >> num[i];
//	}
//	for (int i = 0; i < N;i++)
//	{
//		for (int j = i + 1; j < N;j++)
//		{
//			if (num[i] > num[j])
//			{
//				int temp = num[i];
//				num[i] = num[j];
//				num[j] = temp;
//			}
//		}
//	}
//
//	for (int i = 0; i < N;i++)
//	{
//		std::cout << num[i] << std::endl;
//	}
//
//	delete[] num;
//}

//2.
//int main()
//{
//	int num[5]{};
//	int sum{};
//
//	for (int i = 0; i < 5;i++)
//	{
//		std::cin >> num[i];
//		sum += num[i];
//	}
//
//	for (int i = 0; i < 5;i++)
//	{
//		for (int j = i + 1; j < 5;j++)
//		{
//			if (num[i] > num[j])
//			{
//				int temp = num[i];
//				num[i] = num[j];
//				num[j] = temp;
//			}
//		}
//	}
//
//	std::cout << sum/5 << std::endl;
//	std::cout << num[2] << std::endl;
//}

//3.
//int main()
//{
//	int N{}, k{}, x{};
//
//	std::cin >> N >> k;
//
//	int* student = new int[N];
//
//	for (int i = 0; i < N;i++)
//	{
//		std::cin >> x;
//		student[i] = x;
//	}
//
//	for (int i = 0; i < N;i++)
//	{
//		for (int j = i + 1; j < N;j++)
//		{
//			if (student[i] < student[j])
//			{
//				int temp = student[i];
//				student[i] = student[j];
//				student[j] = temp;
//			}
//		}
//	}
//
//	std::cout << student[k - 1] << std::endl;
//
//	delete[] student;
//}

//4.
int main()
{
	int N{};

	std::cin >> N;

	int* num = new int[N];

	for (int i = 0; i < N;i++)
	{
		std::cin >> num[i];
	}

	std::sort(num, num + N);

	for (int i = 0; i < N;i++)
	{
		std::cout << num[i] << '\n';
	}

	delete[] num;
}