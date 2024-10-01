#include <iostream>
#include <algorithm>


//1.

//int N{}, x{}, ans{};
//int arr[1000001]{};
//
//int main()
//{
//	std::cin >> N;
//
//	for (int i = 0; i < N;i++)
//	{
//		std::cin >> arr[i];
//	}
//
//	std::cin >> x;
//
//	std::sort(arr, arr+N);
//
//	int l = 0;
//	int r = N - 1;
//
//	while (l < r)
//	{
//		int sum = arr[l] + arr[r];
//
//		if (sum < x)
//		{
//			l++;
//		}
//		else if (sum > x)
//		{
//			r--;
//		}
//
//		else if (sum == x)
//		{
//			ans++;
//			l++;
//			r--;
//		}
//	}
//
//	std::cout << ans << '\n';
//}


//2.

int N{}, min{ 2000000001 }, a{}, b{};
int arr[100001]{};

int main()
{
	std::cin >> N;

	for (int i = 0; i < N;i++)
	{
		std::cin >> arr[i];
	}

	std::sort(arr, arr + N);

	int l = 0;
	int r = N - 1;

	while (l<r)
	{
		int sum = arr[l] + arr[r];

		if (min > abs(sum))
		{
			min = abs(sum);
			a = arr[l];
			b = arr[r];

			if (sum == 0)
			{
				break;
			}
		}

		if (sum < 0)
		{
			l++;
		}

		else
		{
			r--;
		}
	}

	std::cout << a << " " << b << '\n';
}