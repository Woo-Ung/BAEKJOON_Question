#include <iostream>
#include <algorithm>
#include <cmath>

//1.
//int main()
//{
//	long long int B{}, sum{};
//	std::string x{};
//
//	std::cin >> x >> B;
//
//	for (int i = 0; i < size(x);i++)
//	{
//		if (x[i] > 64)
//		{
//			x[i] -= 55;
//		}
//		else if (x[i] > 47)
//		{
//			x[i] -= 48;
//		}		
//	}
//
//	for (int i = 0; i < size(x);i++)
//	{
//		sum += pow(B, i) * x[size(x) - (i + 1)];
//	}
//
//	std::cout << sum << std::endl;
//}

////2.
//char convert(int a)
//{	
//	
//	if (a>9)
//	{
//		a += 55;
//	}
//	else
//	{
//		a += 48;
//	}
//
//	return (char)a;
//}
//
//int main()
//{
//	int Number{}, share{}, div{};
//
//	std::string x{};
//
//	std::cin >> Number >> share;
//
//	div = Number;
//
//	for(int i = 0; ;i++)
//	{
//		if (div < share)
//		{			
//			x += convert(div);
//			
//			break;
//		}
//
//		if (i == 0)
//		{
//			if (div % share == 0)
//			{
//				if (div / share >= share)
//				{
//					x += '0';
//				}
//				else
//				{
//					x += convert(div / share);
//				}
//				if (div / share < share)
//				{
//					if (share > 1)
//					{
//						x += '0';
//						reverse(x.begin(), x.end());
//					}
//					break;
//				}
//			}
//			else
//			{
//				x += convert(div % share);
//			}
//		}
//		else
//		{
//			x += convert(div % share);
//		}
//		div = div / share;		
//	}
//
//	reverse(x.begin(), x.end());
//
//	std::cout << x << std::endl;
//}

//3.
int main()
{
	int T{}, C{};
	int array[4]{25,10,5,1};
	int x[4]{};

	std::cin >> T;

	for (int i = 0;i < T;i++)
	{
		std::cin >> C;		

		for (int j = 0;j < 4;j++)
		{
			x[j] = C / array[j];
			C = C % array[j];
			std::cout << x[j] << " ";
		}std::cout << std::endl;		
	}
}