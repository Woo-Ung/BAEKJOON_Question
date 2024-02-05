#include <iostream>
#include <vector>
#include <algorithm>

//1.
//int main()
//{
//	int N{};
//
//	std::cin >> N;
//
//	int* num = new int[N];
//
//	for (int i = 0; i < N;i++)
//	{
//		std::cin >> num[i];
//	}
//	for (int i = 0; i < N;i++)
//	{
//		for (int j = i + 1; j < N;j++)
//		{
//			if (num[i] > num[j])
//			{
//				int temp = num[i];
//				num[i] = num[j];
//				num[j] = temp;
//			}
//		}
//	}
//
//	for (int i = 0; i < N;i++)
//	{
//		std::cout << num[i] << std::endl;
//	}
//
//	delete[] num;
//}

//2.
//int main()
//{
//	int num[5]{};
//	int sum{};
//
//	for (int i = 0; i < 5;i++)
//	{
//		std::cin >> num[i];
//		sum += num[i];
//	}
//
//	for (int i = 0; i < 5;i++)
//	{
//		for (int j = i + 1; j < 5;j++)
//		{
//			if (num[i] > num[j])
//			{
//				int temp = num[i];
//				num[i] = num[j];
//				num[j] = temp;
//			}
//		}
//	}
//
//	std::cout << sum/5 << std::endl;
//	std::cout << num[2] << std::endl;
//}

//3.
//int main()
//{
//	int N{}, k{}, x{};
//
//	std::cin >> N >> k;
//
//	int* student = new int[N];
//
//	for (int i = 0; i < N;i++)
//	{
//		std::cin >> x;
//		student[i] = x;
//	}
//
//	for (int i = 0; i < N;i++)
//	{
//		for (int j = i + 1; j < N;j++)
//		{
//			if (student[i] < student[j])
//			{
//				int temp = student[i];
//				student[i] = student[j];
//				student[j] = temp;
//			}
//		}
//	}
//
//	std::cout << student[k - 1] << std::endl;
//
//	delete[] student;
//}

//4.
//int main()
//{
//	int N{};
//
//	std::cin >> N;
//
//	int* num = new int[N];
//
//	for (int i = 0; i < N;i++)
//	{
//		std::cin >> num[i];
//	}
//
//	std::sort(num, num + N);
//
//	for (int i = 0; i < N;i++)
//	{
//		std::cout << num[i] << '\n';
//	}
//
//	delete[] num;
//}

//5.
//int main()
//{
//	std::ios::sync_with_stdio(false);
//
//	std::cin.tie(nullptr);
//
//	int N{}, num{};
//	int array[10001]{};
//
//	std::cin >> N;
//
//	for (int i = 0; i < N;i++)
//	{
//		std::cin >> num;
//		array[num-1]++;
//	}
//
//	for (int i = 0; i < 10001;i++)
//	{
//		if (array[i] > 0)
//		{
//			for (int j = 0; j < array[i]; j++)
//			{
//				std::cout << i+1 << '\n';
//			}
//		}
//	}
//}

//6.
//int main()
//{
//	std::string N{};
//	int array[10]{}, num{};
//
//	std::cin >> N;
//
//	for (int i = 0; i < size(N); i++)
//	{
//		num = N[i]-48;
//		array[num]++;
//	}
//	for (int i = 9; i >= 0; i--)
//	{
//		if (array[i] > 0)
//		{
//			for (int j = 0; j < array[i]; j++)
//			{
//				std::cout << i;
//			}
//		}
//	}
//}

//7.
//struct P
//{
//	int x{}, y{};
//}num[100001];
//
//bool compare(P& a, P& b)
//{
//	if (a.x == b.x)
//	{
//		return a.y < b.y;
//	}
//	else
//	{
//		return a.x < b.x;
//	}
//}
//
//int main()
//{
//	std::ios::sync_with_stdio(false);
//	std::cin.tie(NULL);
//	std::cout.tie(NULL);
//
//	int N{};
//
//	std::cin >> N;
//
//	for (int i = 0; i < N; i++)
//	{
//		std::cin >> num[i].x >> num[i].y;
//	}
//
//	std::sort(num, num + N, compare);
//	
//	for (int i = 0; i < N; i++)
//	{
//		std::cout << num[i].x << " " << num[i].y << '\n';
//	}
//}

//8.
//struct P
//{
//	int x{}, y{};
//}num[100001];
//
//bool compare(P& a, P& b)
//{
//	if (a.y == b.y)
//	{
//		return a.x < b.x;
//	}
//	else
//	{
//		return a.y < b.y;
//	}
//}
//
//int main()
//{
//	std::ios::sync_with_stdio(false);
//	std::cin.tie(NULL);
//	std::cout.tie(NULL);
//
//	int N{};
//
//	std::cin >> N;
//
//	for (int i = 0; i < N; i++)
//	{
//		std::cin >> num[i].x >> num[i].y;
//	}
//
//	std::sort(num, num + N, compare);
//
//	for (int i = 0; i < N; i++)
//	{
//		std::cout << num[i].x << " " << num[i].y << '\n';
//	}
//}

//9.
//bool compare(std::string& a, std::string& b)
//{
//	if (a.length() == b.length())
//	{
//		return a < b;
//	}
//	else
//	{
//		return a.length() < b.length();
//	}
//}
//
//
//int main()
//{
//	int N{};
//	std::string w{};
//	std::vector<std::string> word{};
//
//	std::cin >> N;
//
//	for (int i = 0; i < N;i++)
//	{
//		std::cin >> w;
//		word.push_back(w);
//	}
//	std::sort(word.begin(), word.end(), compare);
//
//	for (int i = 0; i < N;i++)
//	{
//		if (i > 0 && word[i] == word[i - 1])
//		{
//			continue;
//		}
//		else
//		{
//			std::cout << word[i] << '\n';
//		}
//	}
//}

//10.
//struct M
//{
//	int age{};
//	std::string name{};
//	int count{};
//} member[100001];
//
//bool compare(M& a, M& b)
//{
//	if (a.age == b.age)
//	{
//		return a.count < b.count;
//	}
//	else
//	{
//		return a.age < b.age;
//	}
//}
//
//
//int main()
//{
//	int N{};
//
//	std::cin >> N;
//
//	for (int i = 0; i < N; i++)
//	{
//		std::cin >> member[i].age >> member[i].name;
//		member[i].count = i;
//	}
//
//	std::sort(member, member + N, compare);
//
//	for (int i = 0; i < N; i++)
//	{
//		std::cout << member[i].age << " " << member[i].name << '\n';
//	}
//}

//11.
struct Number
{
	int x{};
	int order{};
} num[1000001];

bool compare(Number& a, Number& b)
{	
	return a.x < b.x;
}

bool recompare(Number& a, Number& b)
{
	return a.order < b.order;
}

int main()
{
	int N{}, y{}, z{-1}, temp{};

	std::cin >> N;

	for (int i = 0; i < N;i++)
	{
		std::cin >> y;
		num[i].x = y;
		num[i].order = i;
	}

	std::sort(num, num+N,compare);

	for (int i = 0; i < N; i++)
	{
		if (i>0 && temp == num[i].x)
		{
			num[i].x = z;
		}
		else
		{
			z++;
			temp = num[i].x;
			num[i].x = z;
		}
	}

	std::sort(num, num + N, recompare);

	for (int i = 0; i < N; i++)
	{
		std::cout << num[i].x << " ";
	}
}