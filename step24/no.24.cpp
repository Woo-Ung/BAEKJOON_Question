#include <iostream>

//1.
int W{}, B{};
int ret[128][128]{};

void check(int a,int b, int c)
{	
	bool cut{ false };

	int BW = ret[a][b];

	for (int i = a; i < a+c;i++)
	{		
		for (int j = b; j < b+c;j++)
		{
			if (BW != ret[i][j])
			{
				cut = true;
				break;
			}
		}
	}

	if (cut)
	{
		check(a, b, c / 2);
		check(a, b + c / 2, c / 2);
		check(a + c / 2, b, c / 2);
		check(a + c / 2, b + c / 2, c / 2);
	}

	else
	{
		if (BW == 0)
		{
			W++;
		}
		else if (BW == 1)
		{
			B++;
		}
	}
}

int main()
{
	int N{};
	
	std::cin >> N;

	for (int i = 0; i < N;i++)
	{
		for (int j = 0; j < N;j++)
		{
			std::cin >> ret[i][j];
		}
	}

	check(0, 0 , N);

	std::cout << W << '\n' << B << '\n';
	
}