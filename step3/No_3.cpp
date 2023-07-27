#include <iostream>

//1.
//int main()
//{
//	int N{}, a{};
//	std::cin >> N;
//
//	for (int i = 1; i <= 9;i++)
//	{
//		a = N * i;
//		std::cout << N << " * " << i << " = " << a << std::endl;
//	}
//}

//2.
//int main()
//{
//	int A{}, B{}, T{};
//	std::cin >> T;
//
//	for (int i = 0; i < T;i++)
//	{
//		std::cin >> A >> B;
//		std::cout << A + B << std::endl;
//	}
//}

//3.
//int main()
//{
//	int a{}, n{};
//	std::cin >> n;
//
//	for (int i = 0; i < n;i++)
//	{
//		a = a + i + 1;
//	}
//
//	std::cout << a << std::endl;
//}

//4.
//int main()
//{
//	int X{}, N{}, a{}, b{}, C{};
//
//	std::cin >> X; 
//	std::cin >> N;
//
//	for (int i = 0; i < N; i++)
//	{
//		std::cin >> a >> b;
//		C = a * b + C;
//	}
//	if (C == X)
//	{
//		std::cout << "Yes" << std::endl;
//	}
//	else
//	{
//		std::cout << "No" << std::endl;
//	}
//
//}


//5.
//int main()
//{
//	int N{};
//	std::cin >> N;
//
//	N = N / 4;
//	for (int i = 0; i < N; i++)
//	{
//		std::cout << "long ";
//	}std::cout << "int" << std::endl;
//}

//6.
//using namespace std;
//
//int main()
//{
//	cin.tie(NULL);
//	ios_base::sync_with_stdio(false);
//	
//	int A{}, B{}, T{};
//
//	cin >> T;
//
//	for (int i = 0; i < T; i++)
//	{
//		cin >> A >> B;
//
//		cout << A + B << "\n";
//	}
//}

//7.
//int main()
//{	
//	int A{}, B{}, T{};
//
//	std::cin >> T;
//
//	for (int i = 0; i < T; i++)
//	{
//		std::cin >> A >> B;
//
//		std::cout << "Case #" << i+1 <<": " << A + B << std::endl;
//	}
//}


//8.
//int main()
//{	
//	int A{}, B{}, T{};
//
//	std::cin >> T;
//
//	for (int i = 0; i < T; i++)
//	{
//		std::cin >> A >> B;
//
//		std::cout << "Case #" << i+1 <<": " << A << " + " << B << " = " << A + B << std::endl;
//	}
//}

//9.
//int main()
//{
//	int N{};
//	std::cin >> N;
//	for (int i = 1; i < N+1; i++)
//	{
//		for (int j = 1; j <= i;j++)
//		{
//			std::cout << "*";
//		} std::cout << std::endl;
//	}
//}

//10.
//int main()
//{
//	int N{};
//	std::cin >> N;
//	for (int i = 1; i < N + 1; i++)
//	{
//		for(int z = 1; z<= N-i;z++)
//		{
//			std::cout << " ";
//		}
//		for (int j = 1; j <= i;j++)
//		{
//			std::cout << "*";
//		} std::cout << std::endl;
//	}
//}

//11.
//int main()
//{	
//	int A{}, B{};
//
//	for (; ;)
//	{
//		std::cin >> A >> B;
//		if (std::cin.eof()) break;
//		std::cout << A + B << std::endl;		
//	}
//}