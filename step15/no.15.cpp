#include <iostream>
#include <vector>

//1.
int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(NULL);

	int T{}, A{}, B{}, C{}, D{};	

	std::cin >> T;

	for (int i = 0;i < T;i++)
	{
		std::vector<int> num{};
		int answer{ 1 };

		std::cin >> A >> B;

		if (A > B)
		{
			C = A;
			D = B;
		}
		else
		{
			C = B;
			D = A;
		}

		int E = C;

		for (int i = 2; i <= E;i++)
		{
			if (C == 1)
			{
				break;
			}
			if (C % i == 0)
			{
				C = C / i;
				num.push_back(i);
				i--;
			}
		}

		for (int i = 0; i < size(num); i++)
		{
			if (D == 1)
			{
				break;
			}
			if (D % num[i] == 0)
			{
				D = D / num[i];
			}
		}

		for (auto e : num)
		{
			answer *= e;
		}

		std::cout << answer * D << '\n';
	}
}