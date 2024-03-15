#include <iostream>
#include <stack>
#include <vector>
#include <string>
#include <queue>

//1.
//std::stack<int> stack;
//
//void Pop()
//{
//	if (stack.empty())
//	{
//		std::cout << -1 << '\n';
//	}
//	else
//	{		
//		std::cout << stack.top() << '\n';
//		stack.pop();
//	}
//}
//
//void tPrint()
//{
//	if (stack.empty())
//	{
//		std::cout << -1 << '\n';
//	}
//	else
//	{
//		std::cout << stack.top() << '\n';
//	}
//}
//
//int main()
//{
//	std::ios::sync_with_stdio(false);
//	std::cin.tie(NULL);
//	std::cout.tie(NULL);
//
//	int N{}, cmd{}, x{};
//
//	std::cin >> N;
//
//	for (int i = 0; i < N; i++)
//	{
//		std::cin >> cmd;
//
//		switch (cmd)
//		{
//		case 1:	
//			std::cin >> x;
//			stack.push(x);			
//			break;
//
//		case 2:
//			Pop();
//			break;
//
//		case 3:
//			std::cout << size(stack) << '\n';
//			break;
//
//		case 4:
//			if (stack.empty())
//			{
//				std::cout << 1 << '\n';
//			}
//			else
//			{
//				std::cout << 0 << '\n';
//			}
//			break;
//
//		case 5:
//			tPrint();
//			break;
//		}
//	}
//}

//2.
//int main()
//{
//	int k{}, max{};
//	std::stack<int> check;
//
//	std::cin >> k;
//
//	for (int i = 0; i < k;i++)
//	{
//		int x{};
//		std::cin >> x;
//		if (x == 0)
//		{
//			check.pop();
//		}
//		else
//		{
//			check.push(x);
//		}
//	}
//
//	while(!check.empty())
//	{
//		max += check.top();
//		check.pop();
//	}
//
//	std::cout << max << '\n';
//}

//3.
//int main()
//{
//	int T{};
//	std::string VPS{};
//
//	std::cin >> T;
//
//	for (int i = 0; i < T; i++)
//	{
//		int x{}, y{}, count{};
//		std::cin >> VPS;
//
//		
//
//		if (size(VPS) % 2 != 0)
//		{
//			std::cout << "NO" << '\n';
//			continue;
//		}
//		else
//		{
//			for (int j = 0; j < size(VPS); j++)
//			{
//				if (VPS[j] == '(')
//				{
//					x++;
//					count++;
//				}
//				if (VPS[j] == ')')
//				{
//					y++;
//					count--;
//				}
//				if(count<0)
//				{
//					break;
//				}
//			}
//
//			if (x == y)
//			{
//				std::cout << "YES" << '\n';
//				continue;
//			}
//			else
//			{
//				std::cout << "NO" << '\n';
//				continue;
//			}
//		}
//	}
//}

//4.
//void test(std::string a)
//{
//	
//	std::stack<char> check;
//
//	for (int i = 0; i<size(a) ;i++)
//	{	
//		if (a[i] == '(')
//		{
//			check.push('(');
//		}
//		else if (a[i] == ')')
//		{
//			if (check.empty() || check.top() == '[')
//			{
//				std::cout << "no" << '\n';
//				return;
//			}
//			check.pop();
//		}
//
//		if (a[i] == '[')
//		{
//			check.push('[');
//		}
//		else if (a[i] == ']')
//		{
//			if (check.empty() || check.top() == '(')
//			{
//				std::cout << "no" << '\n';
//				return;
//			}
//			check.pop();
//		}
//		
//		if (a[i] == '.')
//		{
//			break;
//		}
//	}
//
//	if (check.empty() && a[size(a)-1] == '.')
//	{
//		std::cout << "yes" << '\n';
//		return;
//	}
//	else
//	{
//		std::cout << "no" << '\n';
//		return;
//	}
//}
//
//int main()
//{
//	std::string x{};
//
//	while (true)
//	{
//		getline(std::cin, x);
//
//		if (x[0] == '.')
//		{
//			break;
//		}
//
//		test(x);
//	}
//}

//5.
int main()
{
	int N{}, x{}, count{1};
	std::stack<int> line;
	std::queue<int> random;

	std::cin >> N;

	for (int i = 0; i < N; i++)
	{
		std::cin >> x;
		random.push(x);
	}


	while(!random.empty())
	{
		if (count == random.front())
		{
			random.pop();
			count++;
		}
		else
		{
			if (!line.empty() && count == line.top())
			{
				line.pop();
				count++;
			}
			else
			{
				line.push(random.front());
				random.pop();
			}
		}
	}

	if (!line.empty())
	{
		N = size(line);

		for (int i = 0; i < N; i++)
		{
			if (count == line.top())
			{
				line.pop();
				count++;
			}
			else
			{
				break;
			}
		}
	}

	if (line.empty())
	{
		std::cout << "Nice" << '\n';
	}

	else
	{
		std::cout << "Sad" << '\n';
	}
}