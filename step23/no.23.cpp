#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

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
//bool cmp(std::pair<int, int> a, std::pair<int, int> b)
//{
//	if (a.second == b.second)
//	{
//		return a.first < b.first;
//	}
//
//	return a.second < b.second;
//}
//
//int main()
//{
//	int N{}, count{1};
//
//	std::vector<std::pair<int, int>> time;
//
//	std::cin >> N;
//
//	for (int i = 0; i < N;i++)
//	{
//		int x{}, y{};
//		std::cin >> x >> y;
//
//		time.push_back({ x,y });
//	}
//
//	std::sort(time.begin(), time.end(),cmp);
//
//	int start = time[0].second;
//
//	for (int i = 1; i < N;i++)
//	{			
//		if (time[i].first >= start)
//		{
//			count++;
//
//			start = time[i].second;
//		}
//	}
//
//	std::cout << count << '\n';
//}

//3.

//int main()
//{
//	int N{}, time{};
//
//	std::cin >> N;
//
//	std::vector<int> arry;
//
//	for (int i = 0; i < N; i++)
//	{
//		int x{};
//
//		std::cin >> x;
//
//		arry.push_back(x);
//
//	}
//
//	std::sort(arry.begin(), arry.end());
//
//	for (int i = 0; i < N; i++)
//	{
//		if (i > 0)
//		{
//			arry[i] += arry[i - 1];
//		}
//
//		time += arry[i];
//	}
//
//
//	std::cout << time << '\n';
//
//}

//4.

//int main()
//{
//	int answer{};
//	bool min{ false };
//
//	std::string expression{};
//	std::string num{};	
//
//	std::cin >> expression;
//
//	for (int i = 0; i <= size(expression); i++)
//	{	
//			if (expression[i] == '+' || expression[i] == '-' || i == size(expression))
//			{
//				if (min)
//				{
//					answer -= std::stoi(num);
//					num = "";
//				}
//
//				else if(!min)
//				{
//					answer += std::stoi(num);
//					num = "";
//				}
//			}
//
//			else
//			{
//				num += expression[i];
//			}
//
//
//			if (expression[i] == '-')
//			{
//				min = true;
//			}
//
//	}
//
//	std::cout << answer << '\n';
//}

//5.
std::vector<long long> Km{};
std::vector<long long> L{};

int main()
{
	long long N{}, min{ 1000000001 };
	long long money{};

	std::cin >> N;

	for (int i = 0; i < N-1;i++)
	{
		long long x{};

		std::cin >> x;

		Km.push_back(x);
	}

	for (int i = 0; i < N;i++)
	{
		long long x{};

		std::cin >> x;

		L.push_back(x);
	}
	
	for (int i = 0; i < N-1; i++)
	{
		if (min > L[i])
		{
			min = L[i];
		}

		money += min * Km[i];

	}

	std::cout << money << '\n';
}