#include <iostream>
#include <algorithm>
#include <vector>

//1.

//int N{}, x{}, ans{};
//int arr[1000001]{};
//
//int main()
//{
//	std::cin >> N;
//
//	for (int i = 0; i < N;i++)
//	{
//		std::cin >> arr[i];
//	}
//
//	std::cin >> x;
//
//	std::sort(arr, arr+N);
//
//	int l = 0;
//	int r = N - 1;
//
//	while (l < r)
//	{
//		int sum = arr[l] + arr[r];
//
//		if (sum < x)
//		{
//			l++;
//		}
//		else if (sum > x)
//		{
//			r--;
//		}
//
//		else if (sum == x)
//		{
//			ans++;
//			l++;
//			r--;
//		}
//	}
//
//	std::cout << ans << '\n';
//}


//2.

//int N{}, min{ 2000000001 }, a{}, b{};
//int arr[100001]{};
//
//int main()
//{
//	std::cin >> N;
//
//	for (int i = 0; i < N;i++)
//	{
//		std::cin >> arr[i];
//	}
//
//	std::sort(arr, arr + N);
//
//	int l = 0;
//	int r = N - 1;
//
//	while (l<r)
//	{
//		int sum = arr[l] + arr[r];
//
//		if (min > abs(sum))
//		{
//			min = abs(sum);
//			a = arr[l];
//			b = arr[r];
//
//			if (sum == 0)
//			{
//				break;
//			}
//		}
//
//		if (sum < 0)
//		{
//			l++;
//		}
//
//		else
//		{
//			r--;
//		}
//	}
//
//	std::cout << a << " " << b << '\n';
//}

//3.

//int N{}, S{}, min{100001}, arrSum;
//
//int arr[100001]{};
//
//bool sumOver{ false };
//bool oneOver{ false };
//
//int main()
//{
//	std::ios_base::sync_with_stdio(false);
//	std::cout.tie(NULL);
//	std::cin.tie(NULL);
//
//	std::cin >> N >> S;
//
//	for (int i = 0; i < N;i++)
//	{
//		std::cin >> arr[i];
//		arrSum += arr[i];
//
//		if (arrSum >= S)
//		{
//			sumOver = true;
//		}
//		if (arr[i] >= S)
//		{
//			oneOver = true;
//		}
//	}
//	
//	if (!sumOver)
//	{
//		std::cout << 0 << '\n';
//	}
//
//	else if (oneOver)
//	{
//		std::cout << 1 << '\n';
//	}
//
//	else
//	{
//		int l = 0;
//		int r = 0;
//		int sum = arr[0];
//
//		while (l <= r && r<= N)
//		{
//			if (sum >= S)
//			{
//				min = std::min(min, r - l + 1);
//				if (min == 2)
//				{
//					break;
//				}
//			}
//
//			if (sum < S)
//			{
//				r++;
//				sum += arr[r];
//			}
//
//			else
//			{
//				sum -= arr[l];
//				l++;
//			}
//		}
//
//		std::cout << min << '\n';
//	}
//}


//4.

int N{}, ans{};

int main()
{
	std::cin >> N;

	std::vector<bool> checkPrime(N + 1, true);
	std::vector<int> prime;

	for (int i = 2; i * i <= N;i++)
	{
		for (int j = i * 2;j <= N;j += i)
		{
			checkPrime[j] = false;
		}
	}

	for (int i = 2; i <= N;i++)
	{
		if (checkPrime[i])
		{
			prime.push_back(i);
		}
	}

	int l = 0;
	int r = 0;
	int sum = 0;

	while (true)
	{
		if (sum > N)
		{
			sum -= prime[l];
			l++;
		}

		else if (sum < N)
		{
			if (r >= prime.size())
			{
				break;
			}
			sum += prime[r];
			r++;
		}
		
		else
		{
			ans++;
			if (r >= prime.size())
			{
				break;
			}
			sum += prime[r];
			r++;
		}
	}

	std::cout << ans << '\n';
}