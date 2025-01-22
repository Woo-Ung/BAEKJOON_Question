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

int ans{};

std::vector<int> x;
std::vector<int> y;

int CCW()
{
	ans = (x[0] * y[1] + x[1] * y[2] + x[2] * y[0]) - (x[1] * y[0] + x[2] * y[1] + x[0] * y[2]);
	if (ans > 0)
	{
		return 1;
	}
	else if (ans == 0)
	{
		return 0;
	}
	else
	{
		return -1;
	}
}

int main()
{
	for (int i = 0; i < 3;i++)
	{
		int a{}, b{};
		std::cin >> a >> b;

		x.push_back(a);
		y.push_back(b);
	}

	std::cout << CCW() << '\n';
}