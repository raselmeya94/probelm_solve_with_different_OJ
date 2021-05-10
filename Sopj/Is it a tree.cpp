#include <bits/stdc++.h>
using namespace std;
vector<int> graph[10001];
int visited_node[10001];
void DFS(int node)
{
	visited_node[node] = 1;

	for (int i = 0; i < graph[node].size(); i++)
	{
		if (visited_node[graph[node][i]] == 0)
		{

			DFS(graph[node][i]);
		}
	}
}
int main()
{

	int node, edge;
	cin >> node >> edge;

	int m = edge;
	while (edge--)
	{
		int a, b;
		cin >> a >> b;
		graph[a].push_back(b);
		graph[b].push_back(a);
	}
	int cnt = 0;
	for (int i = 1; i <= node; i++)
	{
		if (visited_node[i] == 0)
			DFS(i), cnt++;
	}
	if (cnt == 1 and m == node - 1) cout << "YES" << endl;
	else cout << "NO" << endl;

}