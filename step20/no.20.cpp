#include <iostream>

//1.

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
	}

	for (auto i = 1; i <= N; i++)
	{
		if (!check[i])
		{
			check[i] = true;
			array[a] = i;
			dfs(a + 1);
			check[i] = false;
		}
	}


}

int main()
{
	std::cin >> N >> M;
	dfs(0);
}