#include <iostream>
#include <vector>
#include <algorithm>

//1.
int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(NULL);

	int N{}, M{};
	std::vector<int> array{};
	std::vector<int> num{};
	std::vector<int> check{};

	std::cin >> N;

	for (int i = 0; i < N; i++)
	{
		int x{};
		std::cin >> x;
		array.push_back(x);
	}

	std::sort(array.begin(), array.end());

	std::cin >> M;

	for (int i = 0; i < M; i++)
	{
		int y{};
		std::cin >> y;
		num.push_back(y);
		check.push_back(0);
	}

	for (int i = 0; i < M;i++)
	{
		int right = N - 1;
		int left = 0;
		
		while (left <= right)
		{			
			int mid = (right + left) / 2;
			if (num[i] == array[mid])
			{
				check[i] = 1;
				break;
			}
			if (num[i] < array[mid])
			{
				right = mid - 1;				
			}
			else
			{
				left = mid + 1;				
			}
		}
	}

	for (int i = 0; i < M;i++)
	{
		std::cout << check[i] << " ";
	}
}