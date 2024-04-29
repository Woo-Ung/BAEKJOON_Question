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
int N{}, M{};
int array[9];
bool check[9];

void dfs(int a)
{
	if (a == M)
	{
		for (int i = 0; i < M;i++)
		{
			std::cout << array[i] << " ";
		}std::cout << '\n';
		return;
	}

	for (auto i = 1; i <= N; i++)
	{
		check[i] = true;
		array[a] = i;
		dfs(a + 1);
		check[i] = false;		
	}
}

int main()
{
	std::cin >> N >> M;
	dfs(0);
}