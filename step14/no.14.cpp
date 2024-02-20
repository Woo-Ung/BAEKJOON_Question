#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <string>

//1.
//int main()
//{
//	std::ios::sync_with_stdio(false);
//	std::cin.tie(nullptr);
//	std::cout.tie(NULL);
//
//	int N{}, M{};
//	std::vector<int> array{};
//	std::vector<int> num{};
//	std::vector<int> check{};
//
//	std::cin >> N;
//
//	for (int i = 0; i < N; i++)
//	{
//		int x{};
//		std::cin >> x;
//		array.push_back(x);
//	}
//
//	std::sort(array.begin(), array.end());
//
//	std::cin >> M;
//
//	for (int i = 0; i < M; i++)
//	{
//		int y{};
//		std::cin >> y;
//		num.push_back(y);
//		check.push_back(0);
//	}
//
//	for (int i = 0; i < M;i++)
//	{
//		int right = N - 1;
//		int left = 0;
//		
//		while (left <= right)
//		{			
//			int mid = (right + left) / 2;
//			if (num[i] == array[mid])
//			{
//				check[i] = 1;
//				break;
//			}
//			if (num[i] < array[mid])
//			{
//				right = mid - 1;				
//			}
//			else
//			{
//				left = mid + 1;				
//			}
//		}
//	}
//
//	for (int i = 0; i < M;i++)
//	{
//		std::cout << check[i] << " ";
//	}
//}

//2.
//int main()
//{
//	std::ios::sync_with_stdio(false);
//	std::cin.tie(nullptr);
//	std::cout.tie(NULL);
//
//	int N{}, M{}, count{};
//	std::string x{};
//	std::vector<std::string> check{};
//
//	std::cin >> N >> M;
//
//	for (int i = 0; i < N; i++)
//	{
//		std::cin >> x;
//		check.push_back(x);
//	}
//
//	std::sort(check.begin(), check.end());
//
//	for (int i = 0; i < M; i++)
//	{
//		std::cin >> x;
//		if (std::binary_search(check.begin(), check.end(), x))
//		{
//			count++;
//		}
//	}
//
//	std::cout << count << std::endl;
//}

//3.
//int main()
//{
//	std::ios::sync_with_stdio(false);
//	std::cin.tie(nullptr);
//	std::cout.tie(NULL);
//
//	int n{};
//	std::string name, check;
//	std::set <std::string, std::greater<std::string>> log;
//
//	std::cin >> n;
//
//	for (int i = 0; i < n;i++)
//	{
//		std::cin >> name >> check;
//
//		if (check == "enter")
//		{
//			log.insert(name);
//		}
//		else
//		{
//			log.erase(name);
//		}
//	}
//
//	for (auto& i : log)
//	{
//		std::cout << i << '\n';
//	}
//}

//4.
//int main()
//{
//	std::ios::sync_with_stdio(false);
//	std::cin.tie(nullptr);
//	std::cout.tie(NULL);
//
//	int N{}, M{}, num{0};
//	std::string name, x;
//
//	std::map<std::string, int> Mon{};
//	std::map<int, std::string> MonNum{};
//
//	std::cin >> N >> M;
//	
//	for (int i = 0; i < N; i++)
//	{
//		std::cin >> name;
//		num++;
//		Mon.insert(std::pair<std::string,int>(name, num));
//		MonNum.insert(std::pair<int, std::string>(num, name));
//	}
//
//	for (int i = 0; i < M; i++)
//	{
//		std::cin >> x;
//		if (x[0] > 47 && x[0] < 58)
//		{
//			int y = std::stoi(x);			
//			std::cout << MonNum.find(y)->second << '\n';
//		}
//		else
//		{
//			std::cout << Mon.find(x)->second << '\n';
//		}
//	}
//}

//5.
//int main()
//{
//	std::ios::sync_with_stdio(false);
//	std::cin.tie(nullptr);
//	std::cout.tie(NULL);
//
//	int N{}, M{};
//
//	std::map<int,int> num{};
//	std::vector<int> check{};
//
//	std::cin >> N;
//
//	for (int i = 0; i < N; i++)
//	{
//		int x{};
//		std::cin >> x;
//		num[x]++;		
//	}
//
//	std::cin >> M;
//
//	for (int i = 0; i < M; i++)
//	{
//		int y{};
//		std::cin >> y;
//		check.push_back(y);
//	}
//
//	for (int i = 0; i < M; i++)
//	{
//		std::cout << num[check[i]] << " ";
//	}
//}

//6.
//int main()
//{
//	std::ios::sync_with_stdio(false);
//	std::cin.tie(nullptr);
//	std::cout.tie(NULL);
//
//	int N{}, M{}, count{};
//
//	std::cin >> N >> M;
//
//	std::string name{};
//	std::map<std::string, int, std::less<std::string>> mem{};
//
//	for (int i = 0; i < N;i++)
//	{
//		std::cin >> name;
//		mem[name]++;
//	}
//
//	for (int i = 0; i < M;i++)
//	{
//		std::cin >> name;
//		mem[name]++;
//	}
//
//	for (auto& e : mem)
//	{
//		if (e.second == 2)
//		{
//			count++;
//		}
//	}
//
//	std::cout << count << '\n';
//
//	for (auto& e : mem)
//	{
//		if (e.second == 2)
//		{
//			std::cout << e.first << '\n';
//		}
//	}
//}


//7.
int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(NULL);

	int N{}, M{}, countA{}, countB{};

	std::vector<int> A{};
	std::vector<int> B{};

	std::cin >> N >> M;

	for (int i = 0; i < N; i++)
	{
		int x{};
		std::cin >> x;
		A.push_back(x);
	}

	std::sort(A.begin(), A.end());

	for (int i = 0; i < M; i++)
	{
		int x{};
		std::cin >> x;
		B.push_back(x);
	}

	std::sort(B.begin(), B.end());

	for (int i = 0; i < N; i++)
	{
		if (std::binary_search(B.begin(), B.end(), A[i]))
		{
			continue;
		}
		else
		{
			countA++;
		}
	}

	for (int i = 0; i < M; i++)
	{
		if (std::binary_search(A.begin(), A.end(), B[i]))
		{
			continue;
		}
		else
		{
			countB++;
		}
	}

	std::cout << countA + countB << '\n';
}