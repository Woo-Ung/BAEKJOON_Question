#include <iostream>
#include <vector>
#include <algorithm>

//1.
//int N{}, M{};
//std::vector<int> num;
//
//void search(int a)
//{
//	int l{}, m{}, r{};
//	r = N - 1;
//
//	while (l <= r)
//	{
//		m = (l + r) / 2;
//
//		if (num[m] == a)
//		{
//			std::cout << 1 << '\n';
//			return;
//		}
//		else if (num[m] > a)
//		{
//			r = m - 1;
//		}
//		else
//		{
//			l = m + 1;
//		}
//
//	}
//	std::cout << 0 << '\n';
//}
//
//int main()
//{
//	std::ios_base::sync_with_stdio(false);
//	std::cin.tie(NULL);
//	std::cout.tie(NULL);
//
//	std::cin >> N;
//
//	for (int i = 0; i < N;i++)
//	{
//		int x{};
//		std::cin >> x;
//		num.push_back(x);
//	}
//
//	std::sort(num.begin(), num.end());
//
//	std::cin >> M;
//
//	for (int i = 0; i < M; i++)
//	{
//		int x{};
//		std::cin >> x;
//
//		search(x);
//	}
//}

//3.

int main()
{
	long long K{}, N{}, ans{}, m{};
	std::vector<long long> arry;

	std::cin >> K >> N;

	for (int i = 0; i < K;i++)
	{
		long long x{};
		std::cin >> x;
		m = std::max(m, x);
		arry.push_back(x);
	}
	
	long long left{ 1 }, right{ m }, mid{};

	while (left <= right)
	{
		long long count{};

		mid = (left + right) / 2;

		for (int i = 0; i < K;i++)
		{
			count += arry[i] / mid;
		}		

		if (count >= N)
		{
			left = mid + 1;

			ans = std::max(ans, mid);
		}

		else
		{
			right = mid - 1;
		}
	}

	std::cout << ans << '\n';
}