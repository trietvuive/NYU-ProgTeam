/*#include <vector>
#include <iostream>
#include<queue>
#include <algorithm>
#define ll long long
using namespace std;
vector<int>visited;
vector<vector<int>>graph;
void componentDFS(int i, int &count)
{
	//cout << i;
	visited[i] = true;
	count++;
	for (int j : graph[i])
	{
		if (!visited[j])
			componentDFS(j, count);
	}
}
int main()
{
	ll n;
	cin >> n;
	graph = vector<vector<int>>(n, vector<int>());
	int edges;
	cin >> edges;
	for (int i = 0; i < edges; i++)
	{
		int u, v;
		cin >> u >> v;
		graph[u].push_back(v);
		graph[v].push_back(u);
	}
	visited = vector<int>(n, false);
	vector<int>countryCount;
	for (int i = 0; i < n; i++)
	{
		int count = 0;
		if (!visited[i])
			componentDFS(i, count);
		if(count>1)
			countryCount.push_back(count);
	}
	ll totalWay = n * (n - 1) / 2;
	ll sameWay = 0;
	for (int i = 0; i < countryCount.size(); i++)
	{
		sameWay += countryCount[i] * (countryCount[i] - 1) / 2;
	}
	cout << totalWay - sameWay << endl;
}*/