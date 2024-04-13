#include<iostream>
#include <string>

//1.
//long long int Fac(long long int a)
//{
//	if (a <= 1)
//	{
//		return 1;
//	}
//
//	return a * Fac(a - 1);
//}
//
//int main()
//{
//	long long int N{};
//
//	std::cin >> N;
//
//	std::cout << Fac(N) << '\n';
//}

//2.
//int fb(int a)
//{
//	if (a == 0)
//	{
//		return 0;
//	}
//
//	if (a == 1 || a == 2)
//	{
//		return 1;
//	}
//
//	return fb(a - 1) + fb(a - 2);
//}
//
//int main()
//{
//	int N{};
//
//	std::cin >> N;
//
//	std::cout << fb(N) << '\n';
//}

//3.
int count{1};

int recursion(std::string& s, int l, int r) 
{  
    if (l >= r)
    {
        return 1;
    }
    else if (s[l] != s[r])
    {
        return 0;
    }
    else
    {
        count++;
        return recursion(s, l + 1, r - 1);
    }
}

int isPalindrome(std::string& s)
{
    return recursion(s, 0, size(s)-1);
}

int main()
{
    int T{};
    
    std::string x{};

    std::cin >> T;

    for (int i = 0; i < T; i++)
    {
        count = 1;
        std::cin >> x;
        std::cout << isPalindrome(x) << " " << count << '\n';
    }
}