/*#include <vector>
#include <iostream>
#include<queue>
#include <algorithm>
#define ll long long
using namespace std;
vector<bool>visited, articulation_point;
vector<vector<int>>graph;
vector<int>tin, low;
int timer;
int islands, bridges;
void dfs(int u, int p = -1)//p signals direct ancestor of this node from the dfs tree
{
	visited[u] = true;
	tin[u] = low[u] = timer++;
	int children = 0;
	for (int v : graph[u])
	{
		if (v == p)continue;
		if (visited[v])
			low[u] = min(low[u], tin[v]);
		else
		{
			dfs(v, u);
			low[u] = min(low[u], low[v]);
			if (low[v] >= tin[u] && p != -1)
				articulation_point[u] = true;
			children++;
		}
	}
	if (p == -1 && children > 1)
		articulation_point[u] = true;
}
void find_cutpoints() {
	timer = 0;
	tin = vector<int>(islands + 1, -1);
	low = vector<int>(islands + 1, -1);
	for (int i = 1; i < islands + 1; i++)
	{
		if (!visited[i])
			dfs(i);
	}
}
int main()
{
	while (cin >> islands >> bridges)
	{
		if (islands == 0 && bridges == 0)
			break;
		graph = vector<vector<int>>(islands + 1, vector<int>());
		visited = vector<bool>(islands + 1, false);
		articulation_point = vector<bool>(islands + 1, false);
		for (int i = 0; i < bridges; i++)
		{
			int u, v;
			cin >> u >> v;
			graph[u].push_back(v);
			graph[v].push_back(u);
		}
		find_cutpoints();
		int art_count = 0;
		for (bool i : articulation_point)
			if (i)
				art_count++;
		cout << art_count << endl;
	}
}*/