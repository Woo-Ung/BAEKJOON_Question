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
//int count{1};
//
//int recursion(std::string& s, int l, int r) 
//{  
//    if (l >= r)
//    {
//        return 1;
//    }
//    else if (s[l] != s[r])
//    {
//        return 0;
//    }
//    else
//    {
//        count++;
//        return recursion(s, l + 1, r - 1);
//    }
//}
//
//int isPalindrome(std::string& s)
//{
//    return recursion(s, 0, size(s)-1);
//}
//
//int main()
//{
//    int T{};
//    
//    std::string x{};
//
//    std::cin >> T;
//
//    for (int i = 0; i < T; i++)
//    {
//        count = 1;
//        std::cin >> x;
//        std::cout << isPalindrome(x) << " " << count << '\n';
//    }
//}

//4.
int* tmp;
int* A;
int count{}, save{-1}, K{}, N{};

void merge(int A[],int p,int q,int r)
{
    int i = p;
    int j = q + 1;
    int t = 1;

    while (i <= q && j <= r) 
    {
        if (A[i] <= A[j])
        {
            tmp[t++] = A[i++];
        }
        else
        {
            tmp[t++] = A[j++];
        }
    }
    while (i <= q)
    {
        tmp[t++] = A[i++];
    }

    while (j <= r)
    {
        tmp[t++] = A[j++];
    }

    i = p; t = 1;
    while (i <= r)
    {
        A[i++] = tmp[t++];
        count++;
        if (count == K)
        {
            save = A[i - 1];
            break;
        }
    }
}

void merge_sort(int A[], int p, int r)
{
    if (p < r)
    {
        int q = (p + r) / 2;
        merge_sort(A, p, q);
        merge_sort(A, q + 1, r);
        merge(A, p, q, r);
    }
}

int main()
{
	std::cin >> N >> K;

    A = new int[N+1];
    tmp = new int[N+1];

	for (int i = 0; i < N; i++)
	{
		std::cin >> A[i];       
	}

	merge_sort(A, 0, N-1);

    std::cout << save << '\n';

    delete[] A;
    delete[] tmp;
}