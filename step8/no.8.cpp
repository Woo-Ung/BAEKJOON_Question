#include <iostream>
#include <cmath>

//1.
int main()
{
	long long int B{}, sum{};
	std::string x{};

	std::cin >> x >> B;

	for (int i = 0; i < size(x);i++)
	{
		if (x[i] > 64)
		{
			x[i] -= 55;
		}
		else if (x[i] > 47)
		{
			x[i] -= 48;
		}		
	}

	for (int i = 0; i < size(x);i++)
	{
		sum += pow(B, i) * x[size(x) - (i + 1)];
	}

	std::cout << sum << std::endl;
}