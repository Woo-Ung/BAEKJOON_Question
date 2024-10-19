#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <cstring>

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

//int N{}, ans{}, max{}, x{};
//
//int A[1001]{};
//int dp[1001]{};
//
//std::vector<int> arr;
//
//int main()
//{
//	std::cin >> N;
//
//	for (int i = 0; i < N; i++)
//	{
//		int count{};
//
//		std::cin >> A[i];
//
//		for (int j = 0; j < i;j++)
//		{
//			if (A[j]<A[i])
//			{
//				count = std::max(dp[j], count);
//			}			
//		}
//
//		dp[i] = count + 1;
//		
//		if (max < dp[i])
//		{
//			max = dp[i];
//			x = i;
//		}
//	}
//
//	for (int i = x; i >= 0;i--)
//	{
//		if (dp[i] == max)
//		{
//			arr.push_back(A[i]);
//			max--;
//		}
//	}
//
//	std::sort(arr.begin(), arr.end());
//
//	std::cout << arr.size() << '\n';
//
//	for (auto& e : arr)
//	{
//		std::cout << e << " ";
//	}std::cout << '\n';
//}

//8.

//int N{}, count{};
//int A[1000001]{};
//int dp[1000001]{};
//std::vector<int> v;
//std::vector<int> ans;
//
//int main()
//{
//	std::cin >> N;
//
//	for (int i = 1; i <= N; i++)
//	{
//		std::cin >> A[i];
//	}
//
//	v.push_back(A[1]);
//
//	for (int i = 2; i <= N;i++)
//	{
//		if (v[count] < A[i])
//		{
//			v.push_back(A[i]);
//			count++;
//			dp[i] = count;
//		}
//		else
//		{
//			int temp = std::lower_bound(v.begin(), v.end(), A[i]) - v.begin();
//			v[temp] = A[i];
//			dp[i] = temp;
//		}
//	}
//
//	for (int i = N; i >= 0;i--)
//	{
//		if (dp[i] == count)
//		{
//			ans.push_back(A[i]);
//			count--;
//		}
//	}
//
//	std::cout << ans.size() << '\n';
//
//	int x = ans.size();
//	for (int i = 0; i < x;i++)
//	{
//		std::cout << ans.back() << " ";
//		ans.pop_back();
//	}
//}

//9.

//int dp[1001][1001]{};
//std::string A{};
//std::string B{};
//std::string ans{};
//
//int main()
//{
//	std::cin >> A >> B;
//
//	int N = A.size();
//	int M = B.size();
//
//	for (int i = 1; i <= N;i++)
//	{
//		for (int j = 1; j <= M;j++)
//		{
//			if (A[i - 1] == B[j - 1])
//			{
//				dp[i][j] = dp[i - 1][j - 1] + 1;
//			}
//			else
//			{
//				dp[i][j] = std::max(dp[i][j - 1], dp[i - 1][j]);
//			}
//		}
//	}
//
//	while (N > 0 && M > 0)
//	{
//		if (dp[N][M] == dp[N - 1][M])
//		{
//			N--;
//		}
//		else if (dp[N][M] == dp[N][M - 1])
//		{
//			M--;
//		}
//		else
//		{
//			ans.push_back(A[N - 1]);
//			N--;
//			M--;
//		}
//	}
//
//	std::cout << ans.size() << '\n';
//	for (int i = ans.size() - 1;i >= 0;i--)
//	{
//		std::cout << ans[i];
//	}
//}

//10.

//int N{}, W{}, count{};
//int dp[1001][1001]{};
//int dp2[1001][1001]{};
//
//std::vector<std::pair<int, int>> V;
//
//int solution(int a, int b)
//{
//	if (a == W + 1 || b == W + 1)
//	{
//		return 0;
//	}
//
//	if (dp[a][b] != 0)
//	{
//		return dp[a][b];
//	}
//
//	int next = std::max(a, b) + 1;
//
//	int c = solution(a, next) + abs(V[b].first - V[next].first) + abs(V[b].second - V[next].second);
//	int d = solution(next, b) + abs(V[a].first - V[next].first) + abs(V[a].second - V[next].second);
//
//	if (c < d)
//	{
//		dp2[a][b] = 2;
//	}
//	else
//	{
//		dp2[a][b] = 1;
//	}
//	dp[a][b] = std::min(c, d);
//
//	return dp[a][b];
//}
//
//int main()
//{
//	std::cin >> N >> W;
//
//	V.push_back({ 1,1 });
//	V.push_back({ N,N });
//
//	
//	for (int i = 0; i < W;i++)
//	{
//		int x{}, y{};
//		std::cin >> x >> y;
//
//		V.push_back({ x,y });
//	}
//
//	std::cout << solution(0, 1) << '\n';
//
//	int a{0}, b{1};
//
//	for (int i = 2;i < W + 2;i++)
//	{
//		if (dp2[a][b] == 1)
//		{
//			std::cout << 1 << '\n';
//			a = i;
//		}
//		else
//		{
//			std::cout << 2 << '\n';
//			b = i;
//		}
//	}
//}

//11.

//int N{}, K{};
//
//int visited[100001]{};
//int dp[100001]{};
//
//std::vector<int> ans;
//
//void bfs(int a)
//{
//	std::queue<int> q;
//	q.push(a);
//	visited[a] = 1;	
//
//	while (!q.empty())
//	{
//		int x = q.front();
//		q.pop();
//
//		for (int nx : {2 * x, x + 1, x - 1})
//		{
//			if (nx >= 0 && nx < 100001)
//			{
//				if (!visited[nx])
//				{
//					q.push(nx);
//					visited[nx] = visited[x] + 1;
//					dp[nx] = x;					
//				}
//			}
//		}
//	}
//}
//
//int main()
//{
//	std::cin >> N >> K;
//
//	bfs(N);
//
//	int x = K;
//
//	while (x != N)
//	{
//		ans.push_back(x);
//		x = dp[x];
//	}
//	ans.push_back(N);
//
//	std::cout << visited[K] - 1 << '\n';
//
//	int y = ans.size();
//	for (int i = 0; i < y;i++)
//	{
//		std::cout << ans.back() << " ";
//		ans.pop_back();
//	}
//}

//12.

int T{}, n{}, m{};
int visited[100001]{};

void bfs(int a)
{
	std::queue<std::pair<int, std::string>> q;
	q.push({ a,"" });
	visited[a] = 1;

	while (!q.empty())
	{
		int x = q.front().first;
		std::string y = q.front().second;
		q.pop();

		if (x == m)
		{
			std::cout << y << '\n';
			return;
		}
				
		int D = (x * 2) % 10000;
		if (!visited[D])
		{
			visited[D] = 1;
			q.push({ D,y + 'D' });
		}

		int S = x - 1;
		if (S == -1)
		{
			S = 9999;
		}
		if (!visited[S])
		{
			visited[S] = 1;
			q.push({ S,y + 'S' });
		}

		int L = (x * 10) % 10000 + x / 1000;
		if (!visited[L])
		{
			visited[L] = 1;
			q.push({ L,y + 'L' });
		}

		int R = x / 10 + (x % 10) * 1000;
		if (!visited[R])
		{
			visited[R] = 1;
			q.push({ R,y + 'R' });
		}
	}
}


int main()
{
	std::cin >> T;

	for (int i = 0; i < T; i++)
	{
		std::cin >> n >> m;

		bfs(n);

		std::memset(visited, 0, sizeof(visited));
	}
}