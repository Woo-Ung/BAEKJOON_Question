#include <iostream>


//1.
//int main()
//{
//    std::string A{ R"(         ,r'"7
//r`-_   ,'  ,/
// \. ". L_r'
//   `~\/
//      |
//      |)" };
//
//    std::cout << A << std::endl;
//}

//2.
int main()
{
	int a[6]{ 1,1,2,2,2,8 };
	int b[6]{};

	for (int i = 0; i < 6;i++)
	{
		std::cin >> b[i];
	}

	for (int i = 0; i < 6;i++)
	{
		std::cout << a[i] - b[i] << " ";
	} std::cout << std::endl;

}