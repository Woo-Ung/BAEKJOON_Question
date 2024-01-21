#include <iostream>

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
int main()
{
	int num[5]{};
	int sum{};

	for (int i = 0; i < 5;i++)
	{
		std::cin >> num[i];
		sum += num[i];
	}

	for (int i = 0; i < 5;i++)
	{
		for (int j = i + 1; j < 5;j++)
		{
			if (num[i] > num[j])
			{
				int temp = num[i];
				num[i] = num[j];
				num[j] = temp;
			}
		}
	}

	std::cout << sum/5 << std::endl;
	std::cout << num[2] << std::endl;

}