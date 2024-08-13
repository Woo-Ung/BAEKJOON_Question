#include <iostream>
#include <string>
#include <stack>
#include <map>
#include <algorithm>

//1.

//int main()
//{
//	char x{};
//	std::string line{};
//	std::string temp{};
//	std::string bomb{};
//
//	std::cin >> line >> bomb;
//
//	x = bomb[bomb.size()-1];
//
//	for(int i = 0; i< line.size(); i++)
//	{
//		temp.push_back(line[i]);
//
//		if (line[i] == x && temp.size() >= bomb.size())
//		{
//			bool check{ true };
//			for (int j = 0; j < bomb.size();j++)
//			{
//				if (bomb[j] != temp[temp.size() - bomb.size() + j])
//				{
//					check = false;
//					break;
//				}
//			}
//
//			if (check)
//			{
//				for (int j = 0; j < bomb.size();j++)
//				{
//					temp.pop_back();
//				}
//			}
//		}
//	}
//
//	if (temp.empty())
//	{
//		std::cout << "FRULA" << '\n';
//	}
//
//	else
//	{
//		std::cout << temp << '\n';
//	}
//}

//2.

//int main()
//{
//	std::ios::sync_with_stdio(false);
//	std::cin.tie(NULL);
//	std::cout.tie(NULL);
//
//	int N{};
//	int num[1000001]{};
//	int ans[1000001]{};
//	std::stack<int> arry;
//
//	std::cin >> N;
//
//	for (int i = 0; i < N;i++)
//	{
//		std::cin >> num[i];
//	}
//
//	for (int i = N-1; i >= 0; i--)
//	{
//		while (!arry.empty() && arry.top() <= num[i])
//		{
//			arry.pop();
//		}
//
//		if (arry.empty())
//		{
//			ans[i] = -1;
//		}
//		else
//		{
//			ans[i] = arry.top();
//		}
//
//		arry.push(num[i]);
//	}
//
//	for (int i = 0; i < N; i++)
//	{
//		std::cout << ans[i] << " ";
//	}std::cout << '\n';
//}

//3.

//int N{};
//int num[1000001]{};
//int ans[1000001]{};
//int count[1000001]{};
//
//std::stack<int> arry;
//
//int main()
//{
//	std::ios::sync_with_stdio(false);
//	std::cin.tie(NULL);
//	std::cout.tie(NULL);
//
//	std::cin >> N;
//
//	for (int i = 0; i < N;i++)
//	{
//		std::cin >> num[i];
//		count[num[i]]++;
//	}
//
//	for (int i = N - 1; i >= 0;i--)
//	{
//		while (!arry.empty() && count[arry.top()] <= count[num[i]])
//		{
//			arry.pop();
//		}
//
//		if (arry.empty())
//		{
//			ans[i] = -1;
//		}
//
//		else
//		{
//			ans[i] = arry.top();
//		}
//
//		arry.push(num[i]);
//	}
//
//	for (int i = 0; i < N;i++)
//	{
//		std::cout << ans[i] << " ";
//	}std::cout << '\n';
//}

//4.

//int main()
//{
//	int N{}, ans{};
//	int arry[100001];
//
//	std::stack<int> rect;
//
//	std::cin >> N;
//
//	for (int i = 1; i <= N; i++)
//	{
//		std::cin >> arry[i];
//	}
//
//	rect.push(0);
//
//	for (int i = 0; i <= N + 1;i++)
//	{
//		while (!rect.empty() && arry[rect.top()] > arry[i])
//		{
//			int check{ rect.top() };
//			rect.pop();
//			ans = std::max(ans, arry[check] * (i - rect.top() - 1));
//		}
//
//		rect.push(i);
//	}
//
//	std::cout << ans << '\n';
//}

//5.

int N{};
long long ans{};

std::stack<std::pair<int,int>> arry;

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	std::cin >> N;

	for (int i = 0; i < N; i++)
	{
		int x{};
		int count{ 1 };

		std::cin >> x;

		while(!arry.empty() && arry.top().first <= x)
		{
			ans += arry.top().second;

			if (arry.top().first == x)
			{
				count += arry.top().second;
			}

			arry.pop();
		}

		if (!arry.empty())
		{
			ans++;
		}

		arry.push({x,count});
	}

	std::cout << ans << '\n';
}