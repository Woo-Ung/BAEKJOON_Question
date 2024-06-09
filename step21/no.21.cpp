#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

//1.
//int count1{};
//int count2{};
//
//int fib(int n)
//{
//    if (n == 1 || n == 2)
//    {
//        count1++;
//        return 1;
//    }
//    else return (fib(n - 1) + fib(n - 2));
//}
//
//int fibonacci(int n) 
//{
//    int* f = new int[n];
//
//    f[0] == 1;
//    f[1] == 1;
//
//    for (int i = 2; i < n; i++)
//    {
//        count2++;
//        f[i] = f[i - 1] + f[i - 2];        
//    }
//
//    return f[n];
//}
//
//int main()
//{
//    int N{};
//
//    std::cin >> N;
//
//    fib(N);
//    fibonacci(N);
//
//    std::cout << count1 << " " << count2 << '\n';
//}

//2.
//int memo[21][21][21];
//
//int w(int a, int b, int c)
//{
//	if (a <= 0 || b <= 0 || c <= 0)
//	{
//		return 1;
//	}
//
//	if (a > 20 || b > 20 || c > 20)
//	{
//		return 1048576;
//	}
//
//	if (memo[a][b][c])
//	{
//		return memo[a][b][c];
//	}
//
//	if (a < b && b < c)
//	{
//		memo[a][b][c] = w(a, b, c - 1) + w(a, b - 1, c - 1) - w(a, b - 1, c);
//		return memo[a][b][c];
//	}
//
//	else
//	{
//		memo[a][b][c] = w(a - 1, b, c) + w(a - 1, b - 1, c) + w(a - 1, b, c - 1) - w(a - 1, b - 1, c - 1);
//		return  memo[a][b][c];
//	}
//}
//
//int main()
//{
//	int a{}, b{}, c{};
//
//	while (true)
//	{
//		std::cin >> a >> b >> c;
//
//		if (a == -1 && b == -1 && c == -1)
//		{
//			break;
//		}
//
//		std::cout << "w(" << a << ", " << b <<", " << c << ") " << "= " << w(a, b, c) << '\n';		
//	}
//}

//3.
//std::vector<long long int> array {0,1,2};
//
//void two(int n)
//{
//	for (int i = 3; i <= n; i++)
//	{
//		long long int x{};
//		x = (array[i - 2] + array[i - 1]) % 15746;
//		array.push_back(x);
//	}
//}
//
//int main()
//{
//	int N{};
//
//	std::cin >> N;
//
//	two(N);
//
//	std::cout << array[N] << '\n';
//}

//4.
//std::map<int, long long int> array { {0,0},{1,1},{2,1},{3,1},{4,2},{5,2},{6,3},{7,4},{8,5},{9,7},{10,9} };
//
//long long int P(int a)
//{
//	long long int temp{};	
//
//	if (array[a])
//	{
//		return array[a];
//	}
//
//	else
//	{
//		temp = P(a - 1) + P(a - 5);
//		array[a] = temp;
//		return array[a];
//	}
//
//}
//
//int main()
//{
//	int N{}, a{};
//
//	std::cin >> N;
//
//	for (int i = 0; i < N;i++)
//	{
//		std::cin >> a;
//		std::cout << P(a) << '\n';
//	}
//}

//5.
//int array[100001]{}, max[100001]{};
//int m{}, n{};
//
//int check(int a, int b)
//{
//	if (a > b)
//	{
//		return a;
//	}
//	else
//	{
//		return b;
//	}
//}
//
//int main()
//{
//	std::cin >> n;
//
//	for (int i = 0; i < n;i++)
//	{
//		std::cin >> array[i];
//	}
//
//	m = array[0];
//	max[0] = array[0];
//
//	for (int i = 1; i < n; i++)
//	{
//		max[i] = check(max[i - 1] + array[i], array[i]);
//		m = check(max[i], m);
//	}
//
//	std::cout << m << '\n';
//}

//6.
//int color[1001][3]{};
//
//int main()
//{
//	int N{};
//
//	std::cin >> N;
//
//	for (int i = 1; i <= N; i++)
//	{
//		std::cin >> color[i][0] >> color[i][1] >> color[i][2];
//
//		color[i][0] += std::min(color[i - 1][1], color[i - 1][2]);
//		color[i][1] += std::min(color[i - 1][0], color[i - 1][2]);
//		color[i][2] += std::min(color[i - 1][0], color[i - 1][1]);
//	}
//
//	std::cout << std::min(color[N][0], std::min(color[N][1], color[N][2])) << '\n';
//
//}

//7.
//int tri[501][501]{};
//
//int main()
//{
//	int n{}, max{};
//
//	std::cin >> n;
//
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j <= i; j++)
//		{
//			std::cin >> tri[i][j];
//		}
//	}
//
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j <= i; j++)
//		{
//			if (j == 0)
//			{
//				tri[i][j] = tri[i - 1][0] + tri[i][j];
//			}
//			else if (i == j)
//			{
//				tri[i][j] = tri[i - 1][j - 1] + tri[i][j];
//			}
//			else
//			{
//				tri[i][j] = std::max(tri[i - 1][j - 1] + tri[i][j], tri[i - 1][j] + tri[i][j]);
//			}
//
//			if (max < tri[i][j])
//			{
//				max = tri[i][j];
//			}
//		}
//	}
//
//	std::cout << max << '\n';
//}

//8.
//int stair[301]{};
//int memo[301]{};
//
//int main()
//{
//	int N{}, x{};
//
//	std::cin >> N;
//
//	for (int i = 1; i <= N;i++)
//	{
//		std::cin >> stair[i];
//	}
//
//	memo[1] = stair[1];
//	memo[2] = stair[1] + stair[2];
//	memo[3] = std::max(stair[1], stair[2]) + stair[3];
//	for (int i = 4; i <= N;i++)
//	{
//		if (i == N - 1)
//		{
//			memo[i] = stair[i] + memo[i - 2];
//			continue;
//		}
//		memo[i] = std::max(memo[i - 3] + stair[i - 1], memo[i - 2]) + stair[i];
//	}
//
//	std::cout << std::max(memo[N-1],memo[N]) << '\n';
//}

//9.
//int array[1000001]{0,0,1};
//
//int main()
//{
//	int N{};
//
//	std::cin >> N;
//
//	for (int i = 2; i <= N; i++)
//	{		
//	
//		array[i] = array[i - 1] + 1;
//
//		if (i % 3 == 0)
//		{
//			array[i] = std::min(array[i], array[i / 3] + 1);
//		}
//
//		if (i % 2 == 0)
//		{
//			array[i] = std::min(array[i], array[i / 2] + 1);
//		}
//		
//	}
//
//	std::cout << array[N] << '\n';
//}

//10.
//#define MOD 1000000000;
//
//int main()
//{
//	std::cin.tie(NULL);
//	std::cout.tie(NULL);
//	std::ios::sync_with_stdio(false);
//
//	int N{};
//	long long num{};
//	long long arry[101][10]{};
//
//	std::cin >> N;
//
//	for (int i = 1; i <= 9; i++)
//	{
//		arry[1][i] = 1;
//	}
//
//	for (int i = 2; i <= N;i++)
//	{
//		for (int j = 0;j <= 9;j++)
//		{
//			if (j == 0)
//			{
//				arry[i][0] = arry[i - 1][1] % MOD;
//			}
//			else if (j == 9)
//			{
//				arry[i][9] = arry[i - 1][8] % MOD;
//			}
//			else
//			{
//				arry[i][j] = (arry[i - 1][j - 1] + arry[i - 1][j + 1]) % MOD;
//			}
//			
//		}
//	}
//
//	for (int i = 0; i <= 9; i++)
//	{
//		num += arry[N][i];
//	}
//
//	std::cout << num % MOD;
//}

//11.
//int main()
//{
//	std::vector<int> arry{0,};
//	std::vector<int> check{0,};
//
//	int n{};
//
//	std::cin >> n;
//
//	for (int i = 1; i <= n;i++)
//	{
//		int x{};
//		std::cin >> x;
//		arry.push_back(x);
//	}
//
//	check.push_back(arry[1]);
//	check.push_back(arry[1] + arry[2]);
//
//	for (int i = 3;i <= n;i++)
//	{
//		check.push_back(std::max(check[i - 3] + arry[i - 1] + arry[i], std::max(arry[i] + check[i - 2], check[i - 1])));
//	}
//
//	std::cout << check[n] << '\n';
//}

//12.
//int main()
//{
//	int n{}, max{};
//	int arry[1001]{};
//	int check[1001]{};
//	int check2[1001]{};
//
//	std::cin >> n;
//
//	for (int i = 0; i < n;i++)
//	{
//		std::cin >> arry[i];
//	}
//
//	for (int i = 0; i < n;i++)
//	{
//		check[i] = 1;
//
//		for (int j = 0; j < i;j++)
//		{
//			if (arry[i] > arry[j])
//			{
//				check[i] = std::max(check[i], check[j] + 1);
//			}
//		}
//	}
//
//	for (int i = n - 1;i >= 0;i--)
//	{
//		check2[i] = 1;
//
//		for (int j = n-1; j > i;j--)
//		{
//			if (arry[i] > arry[j])
//			{
//				check2[i] = std::max(check2[i], check2[j] + 1);
//			}
//		}		
//	}
//
//	for (int i = 0; i < n;i++)
//	{
//		if (max < check[i] + check2[i])
//		{
//			max = check[i] + check2[i];
//		}
//	}
//
//	std::cout << max-1 << '\n';
//} 

//13.
//
//int main()
//{
//	int n{}, count{};
//	int check[101]{};
//	std::vector<std::pair<int, int>> arry;
//
//	std::cin >> n;
//
//	for (int i = 0; i < n; i++)
//	{
//		int x{}, y{};
//
//		std::cin >> x >> y;
//		arry.push_back({ x, y });
//	}
//
//	std::sort(arry.begin(), arry.end());
//
//	for (int i = 0; i < n; i++)
//	{
//		check[i] = 1;
//
//		for (int j = 0; j < i;j++)
//		{
//			if (arry[i].second > arry[j].second)
//			{
//				check[i] = std::max(check[i], check[j] + 1);
//			}
//		}
//
//		count = std::max(count, check[i]);
//	}
//	
//	std::cout << n - count << '\n';
//
//}

//14.

int main()
{
	int arry[1001][1001];

	std::string a{}, b{};

	std::cin >> a >> b;

	for (int i = 1; i <= size(a);i++)
	{
		for (int j = 1; j <= size(b); j++)
		{
			if (a[i - 1] == b[j - 1])
			{
				arry[i][j] = arry[i - 1][j - 1] + 1;
			}
			else
			{
				arry[i][j] = std::max(arry[i - 1][j], arry[i][j - 1]);
			}
		}
	}

	std::cout << arry[size(a)][size(b)] << '\n';
}