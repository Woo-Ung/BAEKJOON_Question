#include <iostream>

//1.
int count1{};
int count2{};

int fib(int n)
{
    if (n == 1 || n == 2)
    {
        count1++;
        return 1;
    }
    else return (fib(n - 1) + fib(n - 2));
}

int fibonacci(int n) 
{
    int* f = new int[n];

    f[0] == 1;
    f[1] == 1;

    for (int i = 2; i < n; i++)
    {
        count2++;
        f[i] = f[i - 1] + f[i - 2];        
    }

    return f[n];
}

int main()
{
    int N{};

    std::cin >> N;

    fib(N);
    fibonacci(N);

    std::cout << count1 << " " << count2 << '\n';
}