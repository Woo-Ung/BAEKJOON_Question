#include <iostream>
#include <string>

//1.

int main()
{
	char x{};
	std::string line{};
	std::string temp{};
	std::string bomb{};

	std::cin >> line >> bomb;

	x = bomb[bomb.size()-1];

	for(int i = 0; i< line.size(); i++)
	{
		temp.push_back(line[i]);

		if (line[i] == x && temp.size() >= bomb.size())
		{
			bool check{ true };
			for (int j = 0; j < bomb.size();j++)
			{
				if (bomb[j] != temp[temp.size() - bomb.size() + j])
				{
					check = false;
					break;
				}
			}

			if (check)
			{
				for (int j = 0; j < bomb.size();j++)
				{
					temp.pop_back();
				}
			}
		}
	}

	if (temp.empty())
	{
		std::cout << "FRULA" << '\n';
	}

	else
	{
		std::cout << temp << '\n';
	}
}