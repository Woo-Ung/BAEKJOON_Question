#include <iostream>

//1.
int main()
{
	int N{}, M{}, temp{}, max{};

	std::cin >> N >> M;

	int* card = new int[N];

	for (int i = 0; i < N; i++)
	{
		std::cin >> card[i];	
	}

	for (int i = 0; i < N;i++)
	{
		for (int j = i+1 ;j < N;j++)
		{
			if (card[i] < card[j])
			{
				temp = card[i];
				card[i] = card[j];
				card[j] = temp;
			}
		}
	}

	for (int i = 0;i < N;i++)
	{
		for (int j = i + 1; j < N;j++)
		{
			for (int k = j + 1; k < N;k++)
			{
				if (max < card[i] + card[j] + card[k] && card[i] + card[j] + card[k] <= M)
				{
					max = card[i] + card[j] + card[k];
				}
			}
		}
	}
	std::cout << max << std::endl;

	delete[] card;
}