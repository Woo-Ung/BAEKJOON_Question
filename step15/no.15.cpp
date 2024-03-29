#include <iostream>
#include <vector>
#include <algorithm>

//1.
//int main()
//{
//	std::ios::sync_with_stdio(false);
//	std::cin.tie(nullptr);
//	std::cout.tie(NULL);
//
//	int T{}, A{}, B{}, C{}, D{};	
//
//	std::cin >> T;
//
//	for (int i = 0;i < T;i++)
//	{
//		std::vector<int> num{};
//		int answer{ 1 };
//
//		std::cin >> A >> B;
//
//		if (A > B)
//		{
//			C = A;
//			D = B;
//		}
//		else
//		{
//			C = B;
//			D = A;
//		}
//
//		int E = C;
//
//		for (int i = 2; i <= E;i++)
//		{
//			if (C == 1)
//			{
//				break;
//			}
//			if (C % i == 0)
//			{
//				C = C / i;
//				num.push_back(i);
//				i--;
//			}
//		}
//
//		for (int i = 0; i < size(num); i++)
//		{
//			if (D == 1)
//			{
//				break;
//			}
//			if (D % num[i] == 0)
//			{
//				D = D / num[i];
//			}
//		}
//
//		for (auto e : num)
//		{
//			answer *= e;
//		}
//
//		std::cout << answer * D << '\n';
//	}
//}

//2.
//int gcd(int a, int b)
//{
//	int r;
//	while (b != 0)
//	{
//		r = a % b;
//		a = b;
//		b = r;
//	}
//	return a;
//}
//
//int main()
//{
//	std::ios::sync_with_stdio(false);
//	std::cin.tie(nullptr);
//	std::cout.tie(NULL);
//
//	long long int A{}, B{}, C{}, D{};
//
//	std::cin >> A >> B;
//
//	if (A > B)
//	{
//		C = A;
//		D = B;
//	}
//	else
//	{
//		C = B;
//		D = A;
//	}
//
//	std::cout << (C * D) / gcd(C, D) << '\n';
//}

//3.
//int main()
//{
//	std::ios::sync_with_stdio(false);
//	std::cin.tie(nullptr);
//	std::cout.tie(NULL);
//
//	int A{}, B{}, C{}, D{}, E{}, a{}, b{}, n{}, m{};
//
//	std::cin >> A >> B >> a >> b;
//
//	n = (A * b) + (a*B);
//	m = b * B;
//
//	if (n > m)
//	{
//		C = m;
//	}
//	else
//	{
//		C = n;
//	}
//
//	for (int i = 2; i <= C;i++)
//	{
//		if (n % i == 0 && m % i == 0)
//		{
//			n /= i;
//			m /= i;
//			C /= i;
//			i--;
//		}
//	}
//	
//	std::cout << n << " " << m << '\n';
//}

//4.
//int gcd(int a, int b)
//{
//	int r{};
//	while (b != 0)
//	{
//		r = a % b;
//		a = b;
//		b = r;
//	}
//	return a;
//}
//
//int main()
//{
//	std::ios_base::sync_with_stdio(false);
//	std::cin.tie(NULL);
//	std::cout.tie(NULL);
//
//
//	int N{}, M{};
//	std::vector<int> point;
//	std::vector<int> distance;
//
//	std::cin >> N;
//
//	for (int i = 0; i < N; i++)
//	{
//		int x{};
//		std::cin >> x;
//		point.push_back(x);
//	}
//
//	M = point[N-1] - point[0];
//
//	for (int i = 1; i < N;i++)
//	{
//		int x{};
//		x = point[i] - point[i -1];
//		distance.push_back(x);
//	}
//
//	int L = distance[0];
//
//	for (int i = 0; i < size(distance); i++)
//	{
//		L = gcd(L, distance[i]);
//	}
//
//	std::cout << M / L - (N-1) << '\n';
//}

//5.
//bool test(long long int a)
//{
//	if (a <= 1)
//	{
//		return false;
//	}
//	if (a == 2 || a == 3 || a == 5)
//	{
//		return true;
//	}
//	if (a % 2 == 0 || a % 3 == 0)
//	{
//		return false;
//	}
//
//	for (long long int i = 5; i * i <= a ;i++)
//	{	
//		if (a % i == 0)
//		{
//			return false;
//		}
//	}
//	return true;
//}
//
//int main()
//{
//	std::ios::sync_with_stdio(false);
//	std::cin.tie(nullptr);
//	std::cout.tie(NULL);
//
//	int m{};
//	long long int n{}, l{};
//
//	std::cin >> m;
//
//	for (int i = 0; i < m; i++)
//	{
//		std::cin >> n;
//		if (n == 0 || n == 1)
//		{
//			std::cout << 2 << '\n';
//			continue;
//		}
//		if (n != 2 && n % 2 == 0)
//		{
//			n++;
//		}
//		while (!test(n))
//		{
//			n+=2;
//		}
//		std::cout << n << '\n';
//	}
//}

//6.
//bool test(long long int a)
//{
//	if (a <= 1)
//	{
//		return false;
//	}
//	if (a == 2 || a == 3 || a == 5)
//	{
//		return true;
//	}
//	if (a % 2 == 0 || a % 3 == 0)
//	{
//		return false;
//	}
//
//	for (long long int i = 5; i * i <= a ;i++)
//	{	
//		if (a % i == 0)
//		{
//			return false;
//		}
//	}
//	return true;
//}
//
//int main()
//{
//	int M{}, N{};
//
//	std::cin >> M >> N;
//
//	for (int i = M; i <= N;i++)
//	{
//		if (test(i))
//		{
//			std::cout << i << '\n';
//		}
//	}
//}

//7.
//bool test(int a)
//{
//	if (a <= 1)
//	{
//		return false;
//	}
//	if (a == 2 || a == 3 || a == 5)
//	{
//		return true;
//	}
//	if (a % 2 == 0 || a % 3 == 0)
//	{
//		return false;
//	}
//	for (int i = 5; i * i <= a; i++)
//	{
//		if (a % i == 0)
//		{
//			return false;
//		}
//	}
//	return true;
//}
//
//int main()
//{
//	std::ios::sync_with_stdio(false);
//	std::cin.tie(nullptr);
//	std::cout.tie(NULL);
//
//	int n{1};
//
//	while (n != 0)
//	{
//		int count{};
//		std::cin >> n;
//		for (int i = n+1; i <= 2 * n; i++)
//		{
//			if (test(i))
//			{
//				count++;
//			}
//		}
//		if (n != 0)
//		{
//			std::cout << count << '\n';
//		}
//	}
//}

//8.
//std::vector<bool> prime(1000001, true);
//
//void Eratos()
//{
//	for (int i = 2; i * i <= 1000000; i++)
//	{
//		if (prime[i])
//		{
//			for (int j = i * i; j <= 1000000; j += i)
//			{
//				prime[j] = false;
//			}
//		}
//	}
//}
//
//int main()
//{
//	std::ios::sync_with_stdio(false);
//	std::cin.tie(NULL);
//	std::cout.tie(NULL);
//
//	Eratos();
//
//	int T{};
//	std::cin >> T;
//
//	for (int i = 0; i < T; i++)
//	{
//		int n{}, count{};
//		std::vector<int> num;
//		std::cin >> n;
//
//		for (int i = 2; i < n; i++)
//		{
//			if (prime[i])
//			{
//				num.push_back(i);
//			}
//		}
//
//		for (auto e : num)
//		{
//			int x = n - e;
//
//			if (x < e)
//			{
//				break;
//			}
//
//			if (std::binary_search(num.begin(),num.end(),x))
//			{
//				count++;
//			}			
//		}
//		std::cout << count << '\n';
//	}
//}

//9.
int main()
{
	int N{}, count{};

	std::cin >> N;

	for (int i = 1; i * i <= N;i++)
	{
		count++;
	}

	std::cout << count << '\n';
}