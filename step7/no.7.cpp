#include <iostream>

//1.
int main()
{
	int n{}, m{};

	std::cin >> n >> m;
	
	int** array = new int*[n];	

	for (int i = 0;i < n;i++)
	{
		array[i] = new int[m];		
	}

	for (int i = 0;i < 2 *n;i++)
	{
		for (int j = 0;j < m;j++)
		{			
			int x{};
			std::cin >> x;

			if (i >= n) 
			{				
				array[i%n][j] += x;
			}
			else
			{
				array[i][j] = x;
			}
		}
		
	}

	for (int i = 0;i < n;i++)
	{
		for (int j = 0;j < m;j++)
		{
			std::cout << array[i][j] << " ";
		}std::cout << std::endl;
	}

	for (int i = 0; i < n;i++)
	{
		delete array[i];
	}
	delete array;
}