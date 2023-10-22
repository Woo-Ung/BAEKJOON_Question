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

	for (int i = 0;i < n;i++)
	{
		for (int j = 0;j < m;j++)
		{			
			int x{};
			std::cin >> x;
						
			array[i][j] = x;
			
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