#include <iostream>

//1.
//int main()
//{
//	int A{}, B{};
//
//	std::cin >> A >> B;
//
//	if (A > B)
//	{
//		std::cout << ">" << std::endl;
//	}
//	if (A < B)
//	{
//		std::cout << "<" << std::endl;
//	}
//	if (A == B)
//	{
//		std::cout << "==" << std::endl;
//	}
//
//}

//2.
//int main()
//{
//	int A{};
//	std::cin >> A;
//
//	if (100>=A && A>=90)
//	{
//		std::cout << "A" << std::endl;
//	}
//	else if (89 >= A && A >= 80)
//	{
//		std::cout << "B" << std::endl;
//	}
//	else if (79 >= A && A >= 70)
//	{
//		std::cout << "C" << std::endl;
//	}
//	else if (69 >= A && A >= 60)
//	{
//		std::cout << "D" << std::endl;
//	}
//	else
//	{
//		std::cout << "F" << std::endl;
//	}
//}

//3.
//int main()
//{
//	int A{};
//	std::cin >> A;
//
//	if (A % 4 == 0 && A % 100 != 0 || A % 400 == 0)
//	{
//		std::cout << "1" << std::endl;
//	}
//	else
//	{
//		std::cout << "0" << std::endl;
//	}
//}

//4.
//int main()
//{
//	int X{}, Y{};
//	std::cin >> X >> Y;
//
//	if (X > 0 && Y > 0)
//	{
//		std::cout << "1" << std::endl;
//	}
//	if (X < 0 && Y > 0)
//	{
//		std::cout << "2" << std::endl;
//	}
//	if (X < 0 && Y < 0)
//	{
//		std::cout << "3" << std::endl;
//	}
//	if (X > 0 && Y < 0)
//	{
//		std::cout << "4" << std::endl;
//	}
//}

//5.
//int main()
//{
//	int H{}, M{}, Ma{};
//	std::cin >> H >> M;
//
//	Ma = M - 45;
//	if (Ma < 0)
//	{
//		Ma = 60 + Ma;
//		H -= 1;
//	}
//	if (H < 0)
//	{
//		H = 24 + H;
//	}
//
//	std::cout << H << " " << Ma << std::endl;
//}

//6.
//int main()
//{
//	int H{}, M{}, Ma{};
//	std::cin >> H >> M;
//	std::cin >> Ma;
//
//	M = M + Ma;
//	while (M > 59)
//	{
//		M -= 60;
//		H += 1;		
//	}
//
//	if (H > 23)
//	{
//		H = H-24;
//	}
//
//	std::cout << H << " " << M << std::endl;
//}

//7.
//int main()
//{
//	int A{}, B{}, C{};
//	std::cin >> A >> B >> C;
//
//	if (A == B && B == C && C==A)
//	{
//		std::cout << 10000+A*1000 << std::endl;
//	}
//
//	else if (A == B || B == C || C == A)
//	{
//		if (A == B || B == C)
//		{
//			std::cout << 1000 + B * 100 << std::endl;
//		}
//		if (C == A)
//		{
//			std::cout << 1000 + C * 100 << std::endl;
//		}
//	}
//
//	else 
//	{
//		if (A > B && A > C)
//		{
//			std::cout << A * 100 << std::endl;
//		}
//		if (B > A && B > C)
//		{
//			std::cout << B * 100 << std::endl;
//		}
//		if (C > B && C > A)
//		{
//			std::cout << C * 100 << std::endl;
//		}
//	}
//}