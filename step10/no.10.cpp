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
int main()
{
	int o[2]{ 0,0 }, me[2]{}, x[2]{};
	int min{1001};

	std::cin >> me[0] >> me[1] >> x[0] >> x[1];

	for (int i = 0;i < 2;i++)
	{		
		if (min > abs(me[i] - x[i]))
		{
			min = abs(me[i] - x[i]);
		}
		if (min > abs(me[i] - o[i]))
		{
			min = abs(me[i] - o[i]);
		}		
	}
	
	std::cout << min << std::endl;
}