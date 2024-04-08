#include<iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <cmath>

//1.
//int main()
//{
//	int T{}, x{};
//	std::vector<int> num;
//
//	std::cin >> T;
//
//	for (int i = 0; i < T; i++)
//	{
//		std::cin >> x;
//
//		num.push_back(x);
//	}
//
//	std::sort(num.begin(), num.end());
//
//	std::cout << num[0] * num[size(num)-1] << '\n';
//}

//2.
//int main()
//{
//	std::ios::sync_with_stdio(false);
//	std::cin.tie(NULL);
//	std::cout.tie(NULL);
//
//	int N{}, count{};
//	std::string x{};
//	std::map<std::string, int> name{};
//	
//
//	std::cin >> N;
//
//	for (int i = 0; i < N; i++)
//	{
//		std::cin >> x;
//
//		if (x == "ENTER")
//		{
//			for (auto& e : name)
//			{
//				if (e.second > 0)
//				{
//					count++;					
//				}			
//			}
//			name.clear();
//		}
//		else
//		{
//			name[x]++;
//		}
//	}
//
//	for (auto& e : name)
//	{
//		if (e.second > 0)
//		{
//			count++;
//		}
//	}
//
//	std::cout << count << '\n';
//}

//3.
//int main()
//{
//	int N{}, count{};
//
//	std::string x{}, y{};
//
//	std::map<std::string, int> name{{"ChongChong",0}};
//
//
//	std::cin >> N;
//
//	for (int i = 0; i < N; i++)
//	{
//		std::cin >> x >> y;
//
//		if (name.find(y) != name.end() || name.find(x) != name.end())
//		{
//			name[x]++;
//			name[y]++;
//		}
//	}
//
//	for (auto& e : name)
//	{
//		if (e.second > 0)
//		{
//			count++;
//		}
//	}
//
//	std::cout << count << '\n';
//}

//4.
//bool cmp(std::pair<int, int>& a, std::pair<int, int>& b)
//{
//	if (a.second == b.second)
//	{
//		return a.first > b.first;
//	}
//
//	else
//	{
//		return a.second < b.second;
//	}
//}
//
//int main()
//{
//	double max{}, x{}, N{}, mid{}, most{}, range{};
//
//	std::vector<int> array;
//	std::map<int, int> array2;
//
//	std::cin >> N;
//
//	for (int i = 0; i < N; i++)
//	{
//		std::cin >> x;
//
//		max = max + x;
//
//		array.push_back(x);
//		array2[x]++;
//	}
//
//	std::vector<std::pair<int, int>> vec(array2.begin(), array2.end());
//
//	std::sort(array.begin(), array.end());
//
//	std::sort(vec.begin(), vec.end(),cmp);
//
//	range = array[size(array)-1] - array[0];
//
//	if (size(vec) > 1)
//	{
//		if (vec[vec.size() - 1].second == vec[vec.size() - 2].second)
//		{
//			most = vec[vec.size() - 2].first;
//		}
//		else
//		{
//			most = vec[vec.size() - 1].first;
//		}
//	}
//	else
//	{
//		most = vec[vec.size() - 1].first;
//	}
//		
//	if (max < 0)
//	{
//		if (round((abs(max) / N)) * -1 == -0)
//		{
//			std::cout << 0 << '\n';
//		}
//		else
//		{
//			std::cout << round((abs(max) / N)) * -1 << '\n';
//		}
//	}
//	else
//	{
//		std::cout << round(max / N) << '\n';
//	}
//
//	std::cout << array[N/2] << '\n';
//	std::cout << most << '\n';
//	std::cout << range << '\n';
//}

//5.
bool cmp(std::pair<std::string, int>& a, std::pair<std::string, int>& b)
{
	if (a.second == b.second)
	{
		if (size(a.first) == size(b.first))
		{
			return a.first < b.first;			
		}
		return size(a.first) > size(b.first);		
	}
	return a.second > b.second;	
};


int main()
{
	int N{}, M{};

	std::string x;
	std::map<std::string, int> array;

	std::cin >> N >> M;

	for (int i = 0; i < N; i++)
	{
		std::cin >> x;
		
		if (size(x) >= M)
		{
			array[x]++;
		}
	}

	std::vector<std::pair<std::string, int>> vec(array.begin(),array.end());
	std::sort(vec.begin(), vec.end(), cmp);

	for (auto& e : vec)
	{
		std::cout << e.first << '\n';
	}
}