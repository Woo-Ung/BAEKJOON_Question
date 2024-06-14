#include <iostream>
#include <vector>

//1.

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	int N{}, M{}, i{}, j{};

	std::vector<long long int> arry{ 0, };

	std::cin >> N >> M;

	for (int a = 1; a <= N;a++)
	{
		long long int x{};
		std::cin >> x;
		x += arry[a - 1];	

		arry.push_back(x);
	}

	for (int a = 0; a < M;a++)
	{		
		std::cin >> i >> j;		
		long long int sum{};

		sum = arry[j] - arry[i - 1];

		std::cout << sum << '\n';
	}

}