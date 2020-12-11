/*#include <vector>
#include <iostream>
#include<queue>
#include <algorithm>
#define ll long long
using namespace std;
int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int nodes,edges;
		cin >> nodes>>edges;
		vector<vector<int>>graph(nodes+1, vector<int>());
		vector<int>res(nodes + 1, -1);
		queue<int>q;
		for (int i = 0; i < edges; i++)
		{
			int u, v;
			cin >> u >> v;
			graph[u].push_back(v);
			graph[v].push_back(u);
		}
		int start;
		cin >> start;
		res[start] = 0;
		q.push(start);
		while (q.size())
		{
			int node = q.front();
			q.pop();
			for (int i : graph[node])
			{
				if (res[i]==-1)
				{
					q.push(i);
					res[i] = res[node] + 6;
				}
			}
		}
		for (int i = 1; i < res.size(); i++)
		{
			if(i!=start)
				cout << res[i] << " ";
		}
		cout << endl;

	}
}*/