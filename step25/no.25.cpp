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

//int main()
//{
//	long long K{}, N{}, ans{}, m{};
//	std::vector<long long> arry;
//
//	std::cin >> K >> N;
//
//	for (int i = 0; i < K;i++)
//	{
//		long long x{};
//		std::cin >> x;
//		m = std::max(m, x);
//		arry.push_back(x);
//	}
//	
//	long long left{ 1 }, right{ m }, mid{};
//
//	while (left <= right)
//	{
//		long long count{};
//
//		mid = (left + right) / 2;
//
//		for (int i = 0; i < K;i++)
//		{
//			count += arry[i] / mid;
//		}		
//
//		if (count >= N)
//		{
//			left = mid + 1;
//
//			ans = std::max(ans, mid);
//		}
//
//		else
//		{
//			right = mid - 1;
//		}
//	}
//
//	std::cout << ans << '\n';
//}

//4.

//int main()
//{
//	std::ios_base::sync_with_stdio(false);
//	std::cout.tie(NULL);
//	std::cin.tie(NULL);
//
//	long long N{}, M{}, max{}, ans{};
//	std::vector<long long> tree;
//
//	std::cin >> N >> M;
//
//	for (int i = 0;i < N;i++)
//	{
//		long long x{};
//		std::cin >> x;
//
//		max = std::max(max, x);
//
//		tree.push_back(x);
//	}
//
//	long long left{0}, right{max}, mid{};
//
//	while (left <= right)
//	{
//		long long temp{};
//
//		mid = (left + right) / 2;
//
//		for (int i = 0; i < N;i++)
//		{
//			if (tree[i] > mid)
//			{
//				temp += tree[i] - mid;
//			}
//		}
//
//		if (temp >= M)
//		{
//			left = mid + 1;
//
//			ans = std::max(ans, mid);
//		}
//
//		else
//		{
//			right = mid - 1;
//		}
//
//	}
//
//	std::cout << ans << '\n';
//}

//5.
//int main()
//{
//	int N{}, C{}, ans{};
//	std::vector<int> arry;
//
//	std::cin >> N >> C;
//
//	for (int i = 0;i < N;i++)
//	{
//		int x{};
//
//		std::cin >> x;
//
//		arry.push_back(x);
//	}
//
//	std::sort(arry.begin(), arry.end());
//
//	int left{ 1 }, right{}, mid{};
//
//	right = arry[N - 1] - arry[0];
//
//	while (left <= right)
//	{
//		mid = (left + right) / 2;
//
//		int count{ 1 };
//		int temp = arry[0];
//
//		for (int i = 1;i < N;i++)
//		{
//			if (arry[i] - temp >= mid)
//			{
//				count++;
//				temp = arry[i];
//			}
//		}
//
//		if (count >= C)
//		{
//			ans = std::max(ans, mid);
//			left = mid + 1;
//		}
//		else
//		{
//			right = mid - 1;
//		}
//	}
//
//	std::cout << ans << '\n';
//}

//6.

int main()
{
	long long N{}, k{};

	std::cin >> N >> k;

	long long left{ 1 }, right{}, mid{};

	right = N * N;

	while (left <= right)
	{
		long long count{};
		mid = (left + right) / 2;

		for (int i = 1;i <= N;i++)
		{
			count += std::min(N, mid / i);
		}

		if (count < k)
		{
			left = mid + 1;
		}
		else
		{
			right = mid - 1;
		}

	}

	std::cout << left << '\n';
}