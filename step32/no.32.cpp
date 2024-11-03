#include <iostream>
#include <vector>
#include <queue>
#include <string.h>

//1.

//int N{};
//int arr[100001] {};
//int visitied[100001] {};
//
//std::vector<int> v[100001];
//
//void bfs(int a)
//{
//	std::queue<int> q;
//
//	q.push(a);
//	visitied[a] = 1;
//
//	while (!q.empty())
//	{
//		int x = q.front();
//		q.pop();
//
//		for (int i = 0; i < v[x].size();i++)
//		{
//			int next = v[x][i];
//			if (!visitied[next])
//			{
//				arr[next] = x;
//				visitied[next] = 1;
//				q.push(next);
//			}
//		}
//	}
//}
//
//int main()
//{
//	std::cin >> N;
//
//	for (int i = 0; i < N-1;i++)
//	{
//		int x{}, y{};
//
//		std::cin >> x >> y;
//
//		v[x].push_back(y);
//		v[y].push_back(x);
//	}
//	
//	bfs(1);
//
//	for (int i = 2;i <= N;i++)
//	{
//		std::cout << arr[i] << '\n';
//	}
//}

//2.

//int N{}, max{}, maxP{};
//int visited[100001]{};
//
//std::vector<std::pair<int, int>> v[100001];
//
//void dfs(int a, int b)
//{
//	if (visited[a])
//	{
//		return;
//	}
//	if (max < b)
//	{
//		max = b;
//		maxP = a;
//	}
//	visited[a] = 1;
//
//	for (int i = 0; i < v[a].size();i++)
//	{
//		int na = v[a][i].first;
//		int nb = v[a][i].second;
//		dfs(na, nb + b);
//	}
//}
//
//int main()
//{
//	std::cin >> N;
//
//	for (int i = 0; i < N;i++)
//	{
//		int x{}, y{}, z{};
//
//		std::cin >> x;
//
//		while (true)
//		{
//			std::cin >> y;
//			if (y == -1)
//			{
//				break;
//			}
//			std::cin >> z;
//
//			v[x].push_back({ y,z });
//			v[y].push_back({ x,z });
//		}
//	}
//
//	dfs(1,0);
//
//	memset(visited, 0, sizeof(visited));
//	max = 0;
//
//	dfs(maxP, 0);
//
//	std::cout << max << '\n';
//}

//3.

//int N{}, max{}, maxP{};
//int visited[10001]{};
//
//std::vector<std::pair<int, int>> v[10001];
//
//void dfs(int a, int b)
//{
//	if (visited[a])
//	{
//		return;
//	}
//	if (max < b)
//	{
//		max = b;
//		maxP = a;
//	}
//
//	visited[a] = 1;
//
//	for (int i = 0; i < v[a].size();i++)
//	{
//		int na = v[a][i].first;
//		int nb = v[a][i].second;
//
//		dfs(na, b + nb);
//	}
//
//}
//
//int main()
//{
//	std::cin >> N;
//
//	for (int i = 0;i < N-1;i++)
//	{
//		int x{}, y{}, z{};
//
//		std::cin >> x >> y >> z;
//
//		v[x].push_back({ y,z });
//		v[y].push_back({ x,z });
//	}
//
//	
//	dfs(1,0);
//	memset(visited, 0, sizeof(visited));
//	max = 0;
//
//	dfs(maxP, 0);
//
//	std::cout << max << '\n';	
//}

//4.

//int N{};
//
//std::vector<std::pair<char,char>> v[27];
//
//void preorder(char a)
//{
//	if (a == '.')
//	{
//		return;
//	}
//
//	std::cout << a;
//	preorder(v[a - 'A'].front().first);
//	preorder(v[a - 'A'].front().second);
//}
//
//void inorder(char a)
//{
//	if (a == '.')
//	{
//		return;
//	}
//
//	inorder(v[a - 'A'].front().first);
//	std::cout << a;
//	inorder(v[a - 'A'].front().second);
//}
//
//void postorder(char a)
//{
//	if (a == '.')
//	{
//		return;
//	}
//
//	postorder(v[a - 'A'].front().first);
//	postorder(v[a - 'A'].front().second);
//	std::cout << a;
//}
//
//int main()
//{
//	std::cin >> N;
//
//	for (int i = 0;i < N;i++)
//	{
//		char x{}, y{}, z{};
//
//		std::cin >> x >> y >> z;
//		
//		v[x-'A'].push_back({y,z});
//	}
//
//	preorder('A');
//	std::cout << '\n';
//	inorder('A');
//	std::cout << '\n';
//	postorder('A');
//	std::cout << '\n';
//}

//5.

//int N{};
//
//int index[100001] {};
//int inorder[100001] {};
//int postorder[100001] {};
//
//void preorder(int inS, int inE, int postS, int postE)
//{
//	if (inS > inE || postS > postE)
//	{
//		return;
//	}
//
//	int root = index[postorder[postE]];
//	int l = root - inS;
//	int r = inE - root;
//	std::cout << inorder[root] << " ";
//
//	preorder(inS, root - 1, postS, postS + l - 1);
//	preorder(root + 1, inE, postS + l, postE - 1);
//}
//
//int main()
//{
//	std::cin >> N;
//
//	for (int i = 1;i <= N;i++)
//	{
//		std::cin >> inorder[i];
//
//		index[inorder[i]] = i;
//	}
//	for (int i = 1; i <= N;i++)
//	{
//		std::cin >> postorder[i];
//	}
//
//	preorder(1, N, 1, N);
//}

//6.

//int preorder[10001]{};
//
//void postorder(int start, int end)
//{
//	if (start >= end)
//	{
//		return;
//	}
//
//	if (start == end - 1)
//	{
//		std::cout << preorder[start] << '\n';
//		return;
//	}
//
//	int m = start + 1;
//
//	while (m < end)
//	{
//		if (preorder[start] < preorder[m])
//		{
//			break;
//		}
//		m++;
//	}
//
//	postorder(start + 1, m);
//	postorder(m, end);
//
//	std::cout << preorder[start] << '\n';
//}
//
//
//int main()
//{
//	int x{}, count{0};
//	while (std::cin >> x)
//	{		
//		preorder[count++] = x;
//	}
//
//	postorder(0, count);
//}

//7.

//int N{}, M{}, num{1};
//int visited[501]{};
//
//bool isTree{ true };
//
//std::vector<int> tree[501];
//
//void dfs(int a, int b)
//{	
//	visited[a] = 1;
//
//	for (int i = 0;i < tree[a].size();i++)
//	{
//		if (tree[a][i] == b)
//		{
//			continue;
//		}
//		if (visited[tree[a][i]])
//		{
//			isTree = false;
//			return;
//		}
//		
//		dfs(tree[a][i], a);
//	}
//}
//
//int main()
//{
//	while (true)
//	{
//		std::cin >> N >> M;
//
//		if (N == 0 && M == 0)
//		{
//			break;
//		}
//				
//		memset(visited, 0, sizeof(visited));
//		for (int i = 0; i <= N;i++)
//		{
//			tree[i].clear();
//		}		
//
//		while (M--)
//		{
//			int x{}, y{};
//
//			std::cin >> x >> y;
//
//			tree[x].push_back(y);
//			tree[y].push_back(x);
//		}
//
//		int count{0};
//		for (int i = 1;i <= N;i++)
//		{
//			if (!visited[i])
//			{
//				isTree = true;
//
//				dfs(i,0);
//
//				if (isTree)
//				{
//					count++;
//				}
//			}
//		}
//
//		
//		std::cout << "Case " << num++ << ": ";
//
//		if (count == 0)
//		{
//			std::cout << "No trees." << '\n';
//		}
//		else if(count == 1)
//		{
//			std::cout << "There is one tree." << '\n';
//		}
//		else if (count > 1)
//		{
//			std::cout << "A forest of " << count << " trees." << '\n';
//		}
//
//	}
//}

//8.

int main()
{



}