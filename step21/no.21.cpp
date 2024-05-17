#include <iostream>
#include <vector>
#include <map>

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
int color[1001][3]{};

int main()
{
	int N{};

	std::cin >> N;

	for (int i = 1; i <= N; i++)
	{
		std::cin >> color[i][0] >> color[i][1] >> color[i][2];

		color[i][0] += std::min(color[i - 1][1], color[i - 1][2]);
		color[i][1] += std::min(color[i - 1][0], color[i - 1][2]);
		color[i][2] += std::min(color[i - 1][0], color[i - 1][1]);
	}

	std::cout << std::min(color[N][0], std::min(color[N][1], color[N][2])) << '\n';

}