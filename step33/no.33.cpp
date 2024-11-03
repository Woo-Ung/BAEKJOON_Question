#include <iostream>

//1.

int n{}, m{};
int parent[1000001];

int getP(int x)
{
	if (parent[x] == x)
	{
		return x;
	}

	return parent[x] = getP(parent[x]);
}

void unionP(int x, int y)
{
	x = getP(x);
	y = getP(y);

	if (x > y) parent[x] = y;
	else
	{
		parent[y] = x;
	}
}

void findP(int x, int y)
{
	x = getP(x);
	y = getP(y);

	if (x == y)
	{
		std::cout << "YES" << '\n';
	}
	else
	{
		std::cout << "NO" << '\n';
	}
}

int main()
{
	std::ios::sync_with_stdio(false);
	std::cout.tie(NULL);
	std::cin.tie(NULL);

	std::cin >> n >> m;

	for (int i = 1;i <= n;i++)
	{
		parent[i] = i;
	}

	for (int i = 0;i < m;i++)
	{
		int a{}, b{}, c{};

		std::cin >> a >> b >> c;

		if (!a)
		{
			unionP(b, c);
		}
		else if (a)
		{
			findP(b, c);
		}
	}
}