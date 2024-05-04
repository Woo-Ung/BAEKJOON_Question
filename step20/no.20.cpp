#include <iostream>

//1.
//int N{}, M{};
//int array[9];
//bool check[9];
//
//void dfs(int a)
//{
//	if (a == M)
//	{
//		for (int i = 0; i < M;i++)
//		{
//			std::cout << array[i] << " ";
//		}std::cout << '\n';
//	}
//
//	for (auto i = 1; i <= N; i++)
//	{
//		if (!check[i])
//		{
//			check[i] = true;
//			array[a] = i;
//			dfs(a + 1);
//			check[i] = false;
//		}
//	}
//
//
//}
//
//int main()
//{
//	std::cin >> N >> M;
//	dfs(0);
//}

//2.

//int N{}, M{};
//int array[9];
//bool check[9];
//
//void dfs(int b, int a)
//{
//	if (a == M)
//	{
//		for (int i = 0; i < M;i++)
//		{
//			std::cout << array[i] << " ";
//		}std::cout << '\n';
//	}
//
//	for (auto i = b; i <= N; i++)
//	{
//		if (!check[i])
//		{
//			check[i] = true;
//			array[a] = i;
//			dfs(i + 1, a + 1);
//			check[i] = false;
//		}
//	}
//}
//
//int main()
//{
//	std::cin >> N >> M;
//	dfs(1,0);
//}

//3.
//int N{}, M{};
//int array[9];
//bool check[9];
//
//void dfs(int a)
//{
//	if (a == M)
//	{
//		for (int i = 0; i < M;i++)
//		{
//			std::cout << array[i] << " ";
//		}std::cout << '\n';
//		return;
//	}
//
//	for (auto i = 1; i <= N; i++)
//	{
//		check[i] = true;
//		array[a] = i;
//		dfs(a + 1);
//		check[i] = false;		
//	}
//}
//
//int main()
//{
//	std::cin >> N >> M;
//	dfs(0);
//}

//4.

//int N{}, M{};
//int array[9];
//bool check[9];
//
//void dfs(int b, int a)
//{
//	if (a == M)
//	{
//		
//		for (int i = 0; i < M;i++)
//		{
//			std::cout << array[i] << " ";
//		}std::cout << '\n';
//		return;
//	}
//
//	for (auto i = b; i <= N; i++)
//	{		
//		
//			check[i] = true;
//			array[a] = i;
//			dfs(i,a + 1);
//			check[i] = false;
//		
//	}
//}
//
//int main()
//{
//	std::cin >> N >> M;
//	dfs(1,0);
//}

//5.
int col[15];
int N{}, count{};

bool check(int a)
{
	for (int i = 0; i < a;i++)
	{
		if (col[i] == col[a] || abs(col[a] - col[i]) == a - i)
		{
			return false;
		}
	}
	return true;
}

void queen(int x)
{
	if (x == N)
	{
		count++;
	}
	else
	{
		for (int i = 0; i < N;i++)
		{
			col[x] = i;
			if (check(x))
			{
				queen(x + 1);
			}
		}
	}
}


int main()
{
	std::cin >> N;

	queen(0);

	std::cout << count << '\n';
}