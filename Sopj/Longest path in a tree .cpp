#include <bits/stdc++.h>
using namespace std;
vector<int> graph[10001];
int visited_node[10001];
int maxdis, maxnode;
void DFS(int node, int dis)
{
	visited_node[node] = 1;
	if (maxdis < dis) maxdis = dis, maxnode = node;
	for (int i = 0; i < graph[node].size(); i++)
	{
		if (visited_node[graph[node][i]] == 0)
		{

			DFS(graph[node][i], dis + 1);
		}
	}
}
int main()
{

	int node, edge;
	cin >> node;
	edge = node - 1;

	while (edge--)
	{
		int a, b;
		cin >> a >> b;
		graph[a].push_back(b);
		graph[b].push_back(a);
	}
	maxdis = -1;
	DFS(1, 0);
	for (int i = 1; i <= node; i++) visited_node[i] = 0;
	DFS(maxnode, 0);
	cout << maxdis;
}