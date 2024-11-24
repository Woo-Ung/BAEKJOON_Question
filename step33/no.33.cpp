#include <iostream>
#include <vector>
#include <map>

//1.

//int n{}, m{};
//int parent[1000001];
//
//int getP(int x)
//{
//	if (parent[x] == x)
//	{
//		return x;
//	}
//
//	return parent[x] = getP(parent[x]);
//}
//
//void unionP(int x, int y)
//{
//	x = getP(x);
//	y = getP(y);
//
//	if (x > y) parent[x] = y;
//	else
//	{
//		parent[y] = x;
//	}
//}
//
//void findP(int x, int y)
//{
//	x = getP(x);
//	y = getP(y);
//
//	if (x == y)
//	{
//		std::cout << "YES" << '\n';
//	}
//	else
//	{
//		std::cout << "NO" << '\n';
//	}
//}
//
//int main()
//{
//	std::ios::sync_with_stdio(false);
//	std::cout.tie(NULL);
//	std::cin.tie(NULL);
//
//	std::cin >> n >> m;
//
//	for (int i = 1;i <= n;i++)
//	{
//		parent[i] = i;
//	}
//
//	for (int i = 0;i < m;i++)
//	{
//		int a{}, b{}, c{};
//
//		std::cin >> a >> b >> c;
//
//		if (!a)
//		{
//			unionP(b, c);
//		}
//		else if (a)
//		{
//			findP(b, c);
//		}
//	}
//}

//2.

//int N{}, M{};
//
//int parent[201]{};
//int arr[1001]{};
//
//bool can{ true };
//
//int getP(int a)
//{
//	if (parent[a] == a)
//	{
//		return a;
//	}
//	return parent[a] = getP(parent[a]);
//}
//
//void unionP(int a, int b)
//{
//	a = getP(a);
//	b = getP(b);
//	if (a > b)
//	{
//		parent[a] = b;
//	}
//	else
//	{
//		parent[b] = a;
//	}
//}
//
//void findP(int a, int b)
//{
//	a = getP(a);
//	b = getP(b);
//	if (a != b)
//	{
//		can = false;
//	}
//}
//
//int main()
//{
//	std::cin >> N >> M;
//
//	for (int i = 1; i <= N;i++)
//	{
//		parent[i] = i;
//	}
//
//	for (int i = 1; i <= N; i++)
//	{
//		for (int j = 1; j <= N;j++)
//		{
//			int x{};
//
//			std::cin >> x;
//			if (x)
//			{
//				unionP(i, j);
//			}
//		}
//	}
//
//	for (int i = 0; i < M;i++)
//	{
//		std::cin >> arr[i];
//	}
//
//	for (int i = 0; i < M - 1;i++)
//	{
//		findP(arr[i], arr[i + 1]);
//	}
//
//	if (can)
//	{
//		std::cout << "YES" << '\n';
//	}
//	else
//	{
//		std::cout << "NO" << '\n';
//	}
//}

//3.

//int N{}, F{}, count{};
//int parent[200001]{};
//int num[200001]{};
//
//std::map<std::string, int> m;
//
//int findP(int a)
//{
//	if (parent[a] == a)
//	{
//		return a;
//	}
//	return parent[a] = findP(parent[a]);
//}
//
//void unionP(int a, int b)
//{
//	a = findP(a);
//	b = findP(b);
//
//	if (a > b)
//	{
//		parent[a] = b;
//		num[b] += num[a];
//	}
//
//	else if(a < b)
//	{
//		parent[b] = a;
//		num[a] += num[b];
//	}
//}
//
//int main()
//{
//	std::ios::sync_with_stdio(false);
//	std::cin.tie(NULL);
//	std::cout.tie(NULL);
//
//	std::cin >> N;
//
//	std::map<std::string, int> ::iterator it;
//
//	while (N--)
//	{
//		m.clear();
//		count = 0;
//
//		for (int i = 0; i < 200001;i++)
//		{
//			parent[i] = i;
//			num[i] = 1;
//		}
//
//		std::cin >> F;
//
//		for (int i = 0;i < F;i++)
//		{
//			int a{}, b{};
//			std::string x, y;
//			std::cin >> x >> y;
//
//			it = m.find(x);
//			if (it == m.end())
//			{
//				m[x] = ++count;
//				a = count;
//			}
//			
//			else
//			{
//				a = it->second;
//			}
//
//			it = m.find(y);
//			if (it == m.end())
//			{
//				m[y] = ++count;
//				b = count;
//			}
//			else
//			{
//				b = it->second;
//			}
//			unionP(a, b);
//			int root = findP(a);
//			std::cout << num[root] << '\n';
//		}
//	}
//}

//4.

//int N{}, M{};
//int parent[1000001]{};
//
//int findP(int a)
//{
//	if (parent[a] == a)
//	{
//		return a;
//	}
//	return parent[a] = findP(parent[a]);
//}
//
//void unionP(int a, int b)
//{
//	a = findP(parent[a]);
//	b = findP(parent[b]);
//
//	if (a > b)
//	{
//		parent[a] = b;
//	}
//
//	else if (b > a)
//	{
//		parent[b] = a;
//	}
//}
//
//bool isP(int a, int b)
//{
//	a = findP(a);
//	b = findP(b);
//
//	if (a == b)
//	{
//		return true;
//	}
//
//	else
//	{
//		return false;
//	}
//}
//
//int main()
//{
//	std::cin >> N >> M;
//
//	for (int i = 0; i < N;i++)
//	{
//		parent[i] = i;
//	}
//
//	int x{}, y{};
//	bool ans{};
//
//	for (int i = 1; i <= M;i++)
//	{
//		std::cin >> x >> y;
//		if (isP(x, y))
//		{
//			std::cout << i << '\n';
//			ans = true;
//			break;
//		}
//
//		unionP(x, y);
//	}
//
//	if (!ans)
//	{
//		std::cout << 0 << '\n';
//	}
//}