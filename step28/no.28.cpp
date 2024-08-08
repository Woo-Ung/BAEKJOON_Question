#include <iostream>
#include <string>
#include <stack>
#include <map>

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

int N{};
int num[1000001]{};
int ans[1000001]{};
int count[1000001]{};

std::stack<int> arry;

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	std::cin >> N;

	for (int i = 0; i < N;i++)
	{
		std::cin >> num[i];
		count[num[i]]++;
	}

	for (int i = N - 1; i >= 0;i--)
	{
		while (!arry.empty() && count[arry.top()] <= count[num[i]])
		{
			arry.pop();
		}

		if (arry.empty())
		{
			ans[i] = -1;
		}

		else
		{
			ans[i] = arry.top();
		}

		arry.push(num[i]);
	}

	for (int i = 0; i < N;i++)
	{
		std::cout << ans[i] << " ";
	}std::cout << '\n';
}