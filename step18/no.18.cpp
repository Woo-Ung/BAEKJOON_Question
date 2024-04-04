#include<iostream>
#include <vector>
#include <algorithm>

//1.
int main()
{
	int T{}, x{};
	std::vector<int> num;

	std::cin >> T;

	for (int i = 0; i < T; i++)
	{
		std::cin >> x;

		num.push_back(x);
	}

	std::sort(num.begin(), num.end());

	std::cout << num[0] * num[size(num)-1] << '\n';
}