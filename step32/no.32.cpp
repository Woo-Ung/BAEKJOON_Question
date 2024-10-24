#include <iostream>
#include <vector>
#include <queue>

//1.

int N{};
int arr[100001] {};
int visitied[100001] {};

std::vector<int> v[100001];

void bfs(int a)
{
	std::queue<int> q;

	q.push(a);
	visitied[a] = 1;

	while (!q.empty())
	{
		int x = q.front();
		q.pop();

		for (int i = 0; i < v[x].size();i++)
		{
			int next = v[x][i];
			if (!visitied[next])
			{
				arr[next] = x;
				visitied[next] = 1;
				q.push(next);
			}
		}
	}
}

int main()
{
	std::cin >> N;

	for (int i = 0; i < N-1;i++)
	{
		int x{}, y{};

		std::cin >> x >> y;

		v[x].push_back(y);
		v[y].push_back(x);
	}
	
	bfs(1);

	for (int i = 2;i <= N;i++)
	{
		std::cout << arr[i] << '\n';
	}
}