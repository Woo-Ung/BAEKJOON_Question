#include<iostream>
#include <vector>
#include <algorithm>
#include <map>

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
int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	int N{}, count{};
	std::string x{};
	std::map<std::string, int> name{};
	

	std::cin >> N;

	for (int i = 0; i < N; i++)
	{
		std::cin >> x;

		if (x == "ENTER")
		{
			for (auto& e : name)
			{
				if (e.second > 0)
				{
					count++;					
				}			
			}
			name.clear();
		}
		else
		{
			name[x]++;
		}
	}

	for (auto& e : name)
	{
		if (e.second > 0)
		{
			count++;
		}
	}

	std::cout << count << '\n';
}