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

//int N{}, ans{};
//
//int main()
//{
//	std::cin >> N;
//
//	std::vector<bool> checkPrime(N + 1, true);
//	std::vector<int> prime;
//
//	for (int i = 2; i * i <= N;i++)
//	{
//		for (int j = i * 2;j <= N;j += i)
//		{
//			checkPrime[j] = false;
//		}
//	}
//
//	for (int i = 2; i <= N;i++)
//	{
//		if (checkPrime[i])
//		{
//			prime.push_back(i);
//		}
//	}
//
//	int l = 0;
//	int r = 0;
//	int sum = 0;
//
//	while (true)
//	{
//		if (sum > N)
//		{
//			sum -= prime[l];
//			l++;
//		}
//
//		else if (sum < N)
//		{
//			if (r >= prime.size())
//			{
//				break;
//			}
//			sum += prime[r];
//			r++;
//		}
//		
//		else
//		{
//			ans++;
//			if (r >= prime.size())
//			{
//				break;
//			}
//			sum += prime[r];
//			r++;
//		}
//	}
//
//	std::cout << ans << '\n';
//}

//5.

//int N{}, C{}, count{};
//
//std::vector<long long> arr;
//
//void cases(int start, int end, std::vector<long long>& p, long long x)
//{
//	if (start > end)
//	{
//		p.push_back(x);
//		return;
//	}
//
//	else
//	{
//		cases(start + 1, end, p, x);
//		cases(start + 1, end, p, x + arr[start]);
//	}
//
//}
//
//int main()
//{
//	std::cin >> N >> C;
//
//	arr.resize(N, 0);
//
//	for (int i = 0; i < N; i++)
//	{
//		std::cin >> arr[i];
//	}
//
//	std::vector<long long> p1;
//	std::vector<long long> p2;
//
//	cases(0, N / 2 - 1, p1, 0);
//	cases(N / 2, N - 1, p2, 0);
//
//	std::sort(p2.begin(), p2.end());
//
//	for (int i = 0; i < p1.size(); i++)
//	{
//		long long x = C - p1[i];
//		count += std::upper_bound(p2.begin(), p2.end(), x) - p2.begin();
//	}
//
//	std::cout << count << '\n';
//}

//6.
//int N{}, count{};
//
//int dp[1000001]{};
//
//int main()
//{
//	std::cin >> N;
//
//	for (int i = 1;i <= N;i++)
//	{
//		dp[i] = i;
//	}
//
//	for (int i = 2; i <= N;i++)
//	{
//		if (i % 2 == 0)
//		{
//			dp[i] = std::min(dp[i], dp[i / 2] +1);
//		}
//
//		if (i % 3 == 0)
//		{
//			dp[i] = std::min(dp[i], dp[i / 3] + 1);
//		}
//
//		dp[i] = std::min(dp[i], dp[i - 1] + 1);
//	}
//
//	std::cout << dp[N] - 1 << '\n';
//
//	std::cout << N << " ";
//
//	while (true)
//	{
//		if (N == 1)
//		{
//			break;
//		}
//
//		if (N % 3 == 0 && dp[N / 3] == dp[N] - 1)
//		{
//			N /= 3;
//			std::cout << N << " ";			
//		}
//
//		else if (N % 2 == 0 && dp[N / 2] == dp[N] - 1)
//		{
//			N /= 2;
//			std::cout << N << " ";			
//		}
//
//		else if (dp[N - 1] == dp[N] - 1)
//		{
//			N -= 1;
//			std::cout << N << " ";			
//		}
//	}
//}

//7.

int N{}, ans{}, max{}, x{};

int A[1001]{};
int dp[1001]{};

std::vector<int> arr;

int main()
{
	std::cin >> N;

	for (int i = 0; i < N; i++)
	{
		int count{};

		std::cin >> A[i];

		for (int j = 0; j < i;j++)
		{
			if (A[j]<A[i])
			{
				count = std::max(dp[j], count);
			}			
		}

		dp[i] = count + 1;
		
		if (max < dp[i])
		{
			max = dp[i];
			x = i;
		}
	}

	for (int i = x; i >= 0;i--)
	{
		if (dp[i] == max)
		{
			arr.push_back(A[i]);
			max--;
		}
	}

	std::sort(arr.begin(), arr.end());

	std::cout << arr.size() << '\n';

	for (auto& e : arr)
	{
		std::cout << e << " ";
	}std::cout << '\n';
}