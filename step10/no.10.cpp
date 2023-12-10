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
int main()
{
	int x[3]{}, y[3]{};
	int a{}, b{};

	for (int i = 0; i < 3;i++)
	{
		std::cin >> x[i] >> y[i];
		
	}

	for (int i = 0; i < 1;i++)
	{		
		if (x[i] == x[i + 1])
		{
			a = x[i + 2];
		}
		else if (x[i] == x[i + 2])
		{
			a = x[i + 1];
		}
		else
		{
			a = x[i];
		}		
	}

	for (int i = 0; i < 1;i++)
	{
		if (y[i] == y[i + 1])
		{
			b = y[i + 2];
		}
		else if (y[i] == y[i + 2])
		{
			b = y[i + 1];
		}
		else
		{
			b = y[i];
		}
	}

	std::cout << a << " " << b << std::endl;
}