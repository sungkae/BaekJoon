#include <iostream>
#include <vector>
#include <queue>

using namespace std;

vector<vector<int>> Graph(1001);
bool Visit[1001];

void DFS(int N,int V)
{
	Visit[V] = true;
	cout << V;
	for (int i = 0; i < N; i++)
	{
		int nextVertex = Graph[V][i];
		if (!Visit[nextVertex]gnz)
		{
			DFS(N, i);
		}
	}
}

void BFS(int V)
{
	queue<int> q;
	for (int i = 0; i < 1001; i++)
	{
		Visit[i] = false;
	}
	Visit[V] = true;
	q.push(V);
	while (!q.empty())
	{
		int queueFront = q.front();
		q.pop();
		cout << queueFront;
		for (int i = 0; i < Graph[queueFront].size(); i++)
		{
			int nextNode = Graph[queueFront][i];
			if (!Visit[nextNode])
			{
				q.push(nextNode);
				Visit[nextNode] = true;
			}
		}
	}
}

int main()
{
	int N, M, V;
	cin >> N >> M >> V;
	for (int i = 0; i < M; i++)
	{
		int from, to;
		cin >> from >> to;
		Graph[from][to] = 1;
		Graph[to][from] = 1;
	}
	Visit[V] = 1;
	DFS(N, V);
	cout << endl;
	BFS(V);
	system("pause");
	return 0;
}