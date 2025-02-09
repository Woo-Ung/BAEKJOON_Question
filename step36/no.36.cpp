#include<iostream>
#include<vector>
#include<algorithm>
#include <math.h>

//1.

//int N{};
//
//double ans{0};
//
//std::vector<double> x;
//std::vector<double> y;
//
//void solve()
//{
//	for (int i = 2; i < N;i++)
//	{		
//		ans += (x[0] * y[i - 1] + x[i - 1] * y[i] + x[i] * y[0]);
//		ans -= (x[i - 1] * y[0] + x[i] * y[i - 1] + x[0] * y[i]);
//	}
//	ans /= 2;
//}
//
//int main()
//{
//	std::cin >> N;
//
//	for (int i = 0; i < N;i++)
//	{		
//		double a{}, b{};
//		std::cin >> a >> b;
//
//		x.push_back(a);
//		y.push_back(b);
//	}
//	
//	solve();
//
//	std::cout << std::fixed;
//	std::cout.precision(1);
//
//	std::cout << abs(ans) << '\n';
//}

//2.

//int ans{};
//
//std::vector<int> x;
//std::vector<int> y;
//
//int CCW()
//{
//	ans = (x[0] * y[1] + x[1] * y[2] + x[2] * y[0]) - (x[1] * y[0] + x[2] * y[1] + x[0] * y[2]);
//	if (ans > 0)
//	{
//		return 1;
//	}
//	else if (ans == 0)
//	{
//		return 0;
//	}
//	else
//	{
//		return -1;
//	}
//}
//
//int main()
//{
//	for (int i = 0; i < 3;i++)
//	{
//		int a{}, b{};
//		std::cin >> a >> b;
//
//		x.push_back(a);
//		y.push_back(b);
//	}
//
//	std::cout << CCW() << '\n';
//}

//3.

//int ans{};
//int visited[8]{};
//
//std::vector<long long > arry(8);
//std::vector<long long> v(8);
//
//bool check()
//{
//	for (int i = 0; i < 8;i++)
//	{
//		int a = i;
//		int b = (i + 1) % 8;
//		int c = (i + 2) % 8;
//
//		if (v[a] * v[c] * sqrt(2) > v[b] * (v[a] + v[c]))
//		{
//			return false;
//		}
//	}
//
//	return true;		
//}
//
//void solve(int a)
//{
//	if (a == 8)
//	{
//		ans += check();
//		return;
//	}
//
//	for (int i = 0; i < 8;i++)
//	{
//		if (visited[i])
//		{
//			continue;
//		}
//		visited[i] = 1;
//		v[a] = arry[i];
//		solve(a + 1);
//		visited[i] = 0;		
//	}
//}
//
//int main()
//{
//	for (int i = 0;i < 8;i++)
//	{	
//		std::cin >> arry[i];
//	}
//
//	solve(0);
//
//	std::cout << ans << '\n';
//}

//4.

//int check1{};
//int check2{};
//
//std::vector<std::pair<long long, long long>> point(4);
//
//int CCW(std::pair<long long, long long> a, std::pair<long long, long long> b, std::pair<long long, long long> c)
//{
//	long long temp{};
//	temp = a.first * b.second + b.first * c.second + c.first * a.second;
//	temp -= b.first * a.second + c.first * b.second + a.first * c.second;
//
//	if (temp > 0)
//	{
//		return 1;
//	}
//
//	else if (temp == 0)
//	{
//		return 0;
//	}
//
//	else
//	{
//		return -1;
//	}
//}
//
//int main()
//{
//	for (int i = 0;i < 4;i++)
//	{
//		std::cin >> point[i].first >> point[i].second;
//	}
//
//	check1 = CCW(point[0], point[1], point[2]) * CCW(point[0], point[1], point[3]);
//	check2 = CCW(point[2], point[3], point[0]) * CCW(point[2], point[3], point[1]);
//
//	if (check1 < 0 && check2 < 0)
//	{
//		std::cout << 1 << '\n';
//	}
//	else
//	{
//		std::cout << 0 << '\n';
//	}
//}

//5.

//int check1{};
//int check2{};
//
//std::vector<std::pair<long long, long long>> point(4);
//
//int CCW(std::pair<long long, long long> a, std::pair<long long, long long> b, std::pair<long long, long long> c)
//{
//	long long temp{};
//	temp = a.first * b.second + b.first * c.second + c.first * a.second;
//	temp -= b.first * a.second + c.first * b.second + a.first * c.second;
//
//	if(temp >0)
//	{
//		return 1;
//	}
//	else if (temp == 0)
//	{
//		return 0;
//	}
//	else
//	{
//		return -1;
//	}
//}
//
//bool solve (std::pair<long long, long long> a, std::pair<long long, long long> b, std::pair<long long, long long> c, std::pair<long long, long long> d)
//{
//	check1 = CCW(point[0], point[1], point[2]) * CCW(point[0], point[1], point[3]);
//	check2 = CCW(point[2], point[3], point[0]) * CCW(point[2], point[3], point[1]);
//
//	if (check1 == 0 && check2 == 0)
//	{
//		if (a > b)
//		{
//			swap(a, b);
//		}
//		if (c > d)
//		{
//			swap(c, d);
//		}
//
//		if (a <= d && b >= c)
//		{
//			return true;
//		}
//		return false;
//	}
//	else
//	{
//		if (check1 <= 0 && check2 <= 0)
//		{
//			return true;
//		}
//		else
//		{
//			return false;
//		}
//	}
//}
//
//int main()
//{
//	for (int i = 0;i < 4;i++)
//	{
//		std::cin >> point[i].first >> point[i].second;
//	}
//
//	std::cout << solve(point[0],point[1],point[2],point[3]) << '\n';
//}

//6.

int check1{};
int check2{};

std::vector<std::pair<long long, long long>> point(4);

int CCW(std::pair<long long, long long> a, std::pair<long long, long long> b, std::pair<long long, long long> c)
{
	long long temp{};
	temp = a.first * b.second + b.first * c.second + c.first * a.second;
	temp -= b.first * a.second + c.first * b.second + a.first * c.second;

	if (temp > 0)
	{
		return 1;
	}
	else if (temp == 0)
	{
		return 0;
	}
	else
	{
		return -1;
	}
}

void crossPoint(std::pair<long long, long long> a, std::pair<long long, long long> b, std::pair<long long, long long> c, std::pair<long long, long long> d)
{
	double tx = (a.first * b.second - a.second * b.first) * (c.first - d.first) - (a.first - b.first) * (c.first * d.second - c.second * d.first);
	double ty = (a.first * b.second - a.second * b.first) * (c.second - d.second) - (a.second - b.second) * (c.first * d.second - c.second * d.first);
	double temp = (a.first - b.first) * (c.second - d.second) - (a.second - b.second) * (c.first - d.first);

	if (temp == 0)
	{
		if (b == c && a <= c)
		{
			std::cout << b.first << " " << b.second << '\n';
		}
		else if (a == d && c <= a)
		{
			std::cout << a.first << " " << a.second << '\n';
		}
	}

	else
	{
		double x = tx / temp;
		double y = ty / temp;

		std::cout << std::fixed;
		std::cout.precision(9);
		std::cout << x << " " << y;
	}
}

void solve(std::pair<long long, long long> a, std::pair<long long, long long> b, std::pair<long long, long long> c, std::pair<long long, long long> d)
{
	check1 = CCW(point[0], point[1], point[2]) * CCW(point[0], point[1], point[3]);
	check2 = CCW(point[2], point[3], point[0]) * CCW(point[2], point[3], point[1]);

	if (check1 == 0 && check2 == 0)
	{
		if (a > b)
		{
			swap(a, b);
		}
		if (c > d)
		{
			swap(c, d);
		}

		if (a <= d && b >= c)
		{
			std::cout << 1 << '\n';
			crossPoint(a, b, c, d);
		}
		else
		{
			std::cout << 0 << '\n';
		}
	}

	else
	{
		if (check1 <= 0 && check2 <= 0)
		{
			std::cout << 1 << '\n';
			crossPoint(a, b, c, d);
		}
		else
		{
			std::cout << 0 << '\n';		
		}
	}
}

int main()
{
	for (int i = 0;i < 4;i++)
	{
		std::cin >> point[i].first >> point[i].second;
	}

	solve(point[0], point[1], point[2], point[3]);
}