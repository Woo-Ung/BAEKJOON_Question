#include <iostream>
#include <cstdlib>

//1.
//int main()
//{
//	int A{}, B{};
//
//	std::cin >> A >> B;
//
//	std::cout << A * B << std::endl;
//}

//2.
//int main()
//{
//	int o[2]{ 0,0 }, me[2]{}, x[2]{};
//	int min{1001};
//
//	std::cin >> me[0] >> me[1] >> x[0] >> x[1];
//
//	for (int i = 0;i < 2;i++)
//	{		
//		if (min > abs(me[i] - x[i]))
//		{
//			min = abs(me[i] - x[i]);
//		}
//		if (min > abs(me[i] - o[i]))
//		{
//			min = abs(me[i] - o[i]);
//		}		
//	}
//	
//	std::cout << min << std::endl;
//}

//3.
//int main()
//{
//	int x[3]{}, y[3]{};
//	int a{}, b{};
//
//	for (int i = 0; i < 3;i++)
//	{
//		std::cin >> x[i] >> y[i];
//		
//	}
//
//	for (int i = 0; i < 1;i++)
//	{		
//		if (x[i] == x[i + 1])
//		{
//			a = x[i + 2];
//		}
//		else if (x[i] == x[i + 2])
//		{
//			a = x[i + 1];
//		}
//		else
//		{
//			a = x[i];
//		}		
//	}
//
//	for (int i = 0; i < 1;i++)
//	{
//		if (y[i] == y[i + 1])
//		{
//			b = y[i + 2];
//		}
//		else if (y[i] == y[i + 2])
//		{
//			b = y[i + 1];
//		}
//		else
//		{
//			b = y[i];
//		}
//	}
//
//	std::cout << a << " " << b << std::endl;
//}

//4.
//int main()
//{
//	long long int x{};
//
//	std::cin >> x;
//
//	std::cout << 4 * x << std::endl;
//}

//5.
int main()
{
	int N{}, x{}, y{};
	int point[2]{}, max[2]{-10001,-10001}, min[2]{10001,10001};

	std::cin >> N;
	
	for (int i = 0; i < N;i++)
	{
		std::cin >> point[0] >> point[1];

		if (max[0] < point[0])
		{
			max[0] = point[0];
		}
		if (max[1] < point[1])
		{
			max[1] = point[1];
		}
		if (min[0] > point[0])
		{
			min[0] = point[0];
		}
		if (min[1] > point[1])
		{
			min[1] = point[1];
		}
	}
	if (N == 1)
	{
		std::cout << 0 << std::endl;
	}

	else
	{
		x = max[0] - min[0];
		y = max[1] - min[1];

		std::cout << abs(x * y) << std::endl;
	}
}