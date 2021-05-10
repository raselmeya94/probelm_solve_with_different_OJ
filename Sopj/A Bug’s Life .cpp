#include <bits/stdc++.h>
using namespace std;
vector<int> graph[2007];
int visited_node[2007];
int color_graph[2007];
bool isBipartite(int node, int color)
{
	visited_node[node] = 1;
	color_graph[node] = color;
	for (int child: graph[node])
	{
		if (visited_node[child] == 0)
		{
			if (isBipartite(child, (color ^ 1)) == false)
			{
				return false;
			}
		}
		else
		{
			if (color_graph[node] == color_graph[child])
			{
				return false;
			}
		}
	}

	return true;
}

int main()
{
	int t;
	cin >> t;
	int k = 1;
	while (t--)
	{
		int node, edge;
		cin >> node >> edge;
		for (int i = 1; i <= node; i++) graph[i].clear(), visited_node[i] = 0;

		while (edge--)
		{
			int a, b;
			cin >> a >> b;
			graph[a].push_back(b);
			graph[b].push_back(a);
		}

		bool yes = true;
		for (int i = 1; i <= node; i++)
		{
			if (!visited_node[i])
			{
				if (isBipartite(i, 0) == false) yes = false;
			}
		}
		cout << "Scenario #" << k++ << ":" << endl;
		if (yes == false)
			cout << "Suspicious bugs found!" << endl;
		else cout << "No suspicious bugs found!" << endl;
	}
}