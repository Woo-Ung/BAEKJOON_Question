#include <iostream>
#include <queue>

//1.

//int main()
//{
//	std::ios::sync_with_stdio(false);
//	std::cout.tie(NULL);
//	std::cin.tie(NULL);
//
//	int N{};
//	std::priority_queue<int> arry;
//
//	std::cin >> N;
//
//	for (int i = 0; i < N;i++)
//	{
//		int x{};
//
//		std::cin >> x;
//		if (x == 0)
//		{
//			if (arry.empty())
//			{
//				std::cout << 0 << '\n';
//			}
//			else
//			{
//				std::cout << arry.top() << '\n';
//				arry.pop();
//			}
//		}
//
//		else
//		{
//			arry.push(x);
//		}
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
//
//	std::priority_queue<int,std::vector<int>,std::greater<int>> arry;
//
//	std::cin >> N;
//
//	for (int i = 0; i < N; i++)
//	{
//		int x{};
//
//		std::cin >> x;
//
//		if (x == 0)
//		{
//			if (arry.empty())
//			{
//				std::cout << 0 << '\n';
//			}
//			else
//			{
//				std::cout << arry.top() << '\n';
//				arry.pop();
//			}
//		}
//
//		else
//		{
//			arry.push(x);
//		}
//	}
//}

//3.

struct cmp
{
	bool operator()(int a, int b)
	{
		if (abs(a) == abs(b))
		{
			return a > b;
		}

		return abs(a) > abs(b);
	}
};

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	int N{};

	std::priority_queue<int, std::vector<int>, cmp> arry;

	std::cin >> N;

	for (int i = 0; i < N; i++)
	{
		int x{};

		std::cin >> x;

		if (x == 0)
		{
			if (arry.empty())
			{
				std::cout << 0 << '\n';
			}
			else
			{
				std::cout << arry.top() << '\n';
				arry.pop();
			}
		}

		else
		{
			arry.push(x);
		}
	}
}