#include <iostream>

//1.
//int main()
//{
//	int N{}, M{}, temp{}, max{};
//
//	std::cin >> N >> M;
//
//	int* card = new int[N];
//
//	for (int i = 0; i < N; i++)
//	{
//		std::cin >> card[i];	
//	}
//
//	for (int i = 0; i < N;i++)
//	{
//		for (int j = i+1 ;j < N;j++)
//		{
//			if (card[i] < card[j])
//			{
//				temp = card[i];
//				card[i] = card[j];
//				card[j] = temp;
//			}
//		}
//	}
//
//	for (int i = 0;i < N;i++)
//	{
//		for (int j = i + 1; j < N;j++)
//		{
//			for (int k = j + 1; k < N;k++)
//			{
//				if (max < card[i] + card[j] + card[k] && card[i] + card[j] + card[k] <= M)
//				{
//					max = card[i] + card[j] + card[k];
//				}
//			}
//		}
//	}
//	std::cout << max << std::endl;
//
//	delete[] card;
//}

//2.
//int main()
//{
//	int N{}, sum{}, temp{};
//
//	std::cin >> N;
//
//	for (int i = 0; ;i++)
//	{
//		temp = i;
//		sum = 0;
//
//		while (temp != 0)
//		{	
//			sum += temp % 10;
//
//			temp /= 10;
//		}
//
//		if (N == i + sum)
//		{			
//			std::cout << i << std::endl;
//			break;
//		}
//		if (N < i)
//		{
//			std::cout << 0 << std::endl;
//			break;
//		}
//	}
//}

//3.
int main()
{
	int a{}, b{}, c{}, d{}, e{}, f{};

	std::cin >> a >> b >> c >> d >> e >> f;

	for (int i = -999; i < 1000;i++)
	{
		for (int j = -999; j < 1000; j++)
		{
			if (a* i + b * j == c && d * i + e * j == f)
			{
				std::cout << i << " " << j << std::endl;
				break;
			}
		}
	}
}