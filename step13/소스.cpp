#include <iostream>

//1.
int main()
{
	int N{};

	std::cin >> N;

	int* num = new int[N];

	for (int i = 0; i < N;i++)
	{
		std::cin >> num[i];
	}
	for (int i = 0; i < N;i++)
	{
		for (int j = i + 1; j < N;j++)
		{
			if (num[i] > num[j])
			{
				int temp = num[i];
				num[i] = num[j];
				num[j] = temp;
			}
		}
	}

	for (int i = 0; i < N;i++)
	{
		std::cout << num[i] << std::endl;
	}

	delete[] num;
}