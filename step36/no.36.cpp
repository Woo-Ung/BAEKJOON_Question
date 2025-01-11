#include<iostream>
#include<vector>
#include<algorithm>
#include <math.h>

//1.

int N{};

double ans{0};

std::vector<double> x;
std::vector<double> y;

void solve()
{
	for (int i = 2; i < N;i++)
	{		
		ans += (x[0] * y[i - 1] + x[i - 1] * y[i] + x[i] * y[0]);
		ans -= (x[i - 1] * y[0] + x[i] * y[i - 1] + x[0] * y[i]);
	}
	ans /= 2;
}

int main()
{
	std::cin >> N;

	for (int i = 0; i < N;i++)
	{		
		double a{}, b{};
		std::cin >> a >> b;

		x.push_back(a);
		y.push_back(b);
	}
	
	solve();

	std::cout << std::fixed;
	std::cout.precision(1);

	std::cout << abs(ans) << '\n';
}