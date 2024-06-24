#include <iostream>
#include <vector>
#include <algorithm>

//1.

//int main()
//{
//	int N{}, K{}, count{};
//	std::vector<int> coin;
//
//	std::cin >> N >> K;
//
//	for (int i = 0; i < N;i++)
//	{
//		int x{};
//		std::cin >> x;
//		coin.push_back(x);
//	}
//
//	std::sort(coin.begin(), coin.end(),std::greater<int>());
//
//	for (int i = 0; i < N; i++)
//	{
//		if (K == 0)
//		{
//			break;
//		}
//		if (K >= coin[i])
//		{
//			K -= coin[i];
//			count++;
//			i--;
//		}
//	}
//	
//	std::cout << count << '\n';
//}

//2.
bool cmp(std::pair<int, int> a, std::pair<int, int> b)
{
	if (a.second == b.second)
	{
		return a.first < b.first;
	}

	return a.second < b.second;
}

int main()
{
	int N{}, count{1};

	std::vector<std::pair<int, int>> time;

	std::cin >> N;

	for (int i = 0; i < N;i++)
	{
		int x{}, y{};
		std::cin >> x >> y;

		time.push_back({ x,y });
	}

	std::sort(time.begin(), time.end(),cmp);

	int start = time[0].second;

	for (int i = 1; i < N;i++)
	{			
		if (time[i].first >= start)
		{
			count++;

			start = time[i].second;
		}
	}

	std::cout << count << '\n';
}