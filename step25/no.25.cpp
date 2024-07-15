#include <iostream>
#include <vector>
#include <algorithm>

//1.
int N{}, M{};
std::vector<int> num;

void search(int a)
{
	int l{}, m{}, r{};
	r = N - 1;

	while (l <= r)
	{
		m = (l + r) / 2;

		if (num[m] == a)
		{
			std::cout << 1 << '\n';
			return;
		}
		else if (num[m] > a)
		{
			r = m - 1;
		}
		else
		{
			l = m + 1;
		}

	}
	std::cout << 0 << '\n';
}

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	std::cin >> N;

	for (int i = 0; i < N;i++)
	{
		int x{};
		std::cin >> x;
		num.push_back(x);
	}

	std::sort(num.begin(), num.end());

	std::cin >> M;

	for (int i = 0; i < M; i++)
	{
		int x{};
		std::cin >> x;

		search(x);
	}
}