#include <iostream>
#include <vector>
#include <algorithm>

//1.

int main()
{
	int N{}, K{}, count{};
	std::vector<int> coin;

	std::cin >> N >> K;

	for (int i = 0; i < N;i++)
	{
		int x{};
		std::cin >> x;
		coin.push_back(x);
	}

	std::sort(coin.begin(), coin.end(),std::greater<int>());

	for (int i = 0; i < N; i++)
	{
		if (K == 0)
		{
			break;
		}
		if (K >= coin[i])
		{
			K -= coin[i];
			count++;
			i--;
		}
	}
	
	std::cout << count << '\n';
}