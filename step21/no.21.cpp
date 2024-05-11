#include <iostream>
#include <vector>

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
std::vector<long long int> array {0,1,2};

void two(int n)
{
	for (int i = 3; i <= n; i++)
	{
		long long int x{};
		x = (array[i - 2] + array[i - 1]) % 15746;
		array.push_back(x);
	}
}

int main()
{
	int N{};

	std::cin >> N;

	two(N);

	std::cout << array[N] << '\n';
}