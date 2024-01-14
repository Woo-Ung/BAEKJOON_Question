#include <iostream>
#include <string>

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
//int main()
//{
//	int a{}, b{}, c{}, d{}, e{}, f{};
//
//	std::cin >> a >> b >> c >> d >> e >> f;
//
//	for (int i = -999; i < 1000;i++)
//	{
//		for (int j = -999; j < 1000; j++)
//		{
//			if (a* i + b * j == c && d * i + e * j == f)
//			{
//				std::cout << i << " " << j << std::endl;
//				break;
//			}
//		}
//	}
//}

//4.
//int main()
//{
//	std::string WB[8]{
//	"WBWBWBWB",
//	"BWBWBWBW",
//	"WBWBWBWB",
//	"BWBWBWBW",
//	"WBWBWBWB",
//	"BWBWBWBW",
//	"WBWBWBWB",
//	"BWBWBWBW"
//	};
//	std::string BW[8]{
//		"BWBWBWBW",
//		"WBWBWBWB",
//		"BWBWBWBW",
//		"WBWBWBWB",
//		"BWBWBWBW",
//		"WBWBWBWB",
//		"BWBWBWBW",
//		"WBWBWBWB"
//	};
//
//	int N{}, M{}, min{100};
//
//	std::cin >> N >> M;
//
//	char** array = new char*[N];
//
//	for (int i = 0; i < N; i++)
//	{
//		array[i] = new char[M];
//		for (int j = 0; j < M; j++)
//		{
//			std::cin >> array[i][j];
//		}
//	}
//
//	for (int i = 0; i + 8 <= N;i++)
//	{
//		for (int j = 0; j + 8 <= M;j++)
//		{
//			int tempW{};
//			int tempB{};
//
//			for (int a = 0; a < 8; a++)
//			{
//				for (int b = 0; b < 8;b++)
//				{
//					if (array[i + a][j + b] != WB[a][b])
//					{
//						tempW++;					
//					}
//					if (array[i + a][j + b] != BW[a][b])
//					{
//						tempB++;
//					}			
//				}				
//			}
//
//			if (min > tempW)
//			{
//				min = tempW;
//			}
//			if (min > tempB)
//			{
//				min = tempB;
//			}
//		}
//	}
//
//	std::cout << min << std::endl;
//	
//
//	for (int i = 0; i < N; i++)
//	{
//		delete[] array[i];
//	}
//
//	delete[] array;
//}

//5.
int main()
{
	int N{}, count{};

	std::cin >> N;

	for (int i = 666; ;i++)
	{
		std::string number = std::to_string(i);
		for (int j = 0; j < size(number);j++)
		{
			if (number[j] == '6' && number[j + 1] == '6' && number[j + 2] == '6')
			{
				count++;
				break;
			}
		}
		if (N == count)
		{
			std::cout << number << std::endl;
			break;
		}
	}

}