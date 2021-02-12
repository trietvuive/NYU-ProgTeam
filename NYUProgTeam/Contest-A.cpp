/*#include<vector>
#include<string>
#include<iostream>
#include<unordered_set>
#include<unordered_map>

using namespace std;
int patrol_count = 0;
int street_count;
unordered_map<int, vector<Edge>> adj_graph;
vector<bool>visited;
struct Edge
{
	int destination;
	int weight;
};
int main()
{
	cin >> street_count;
	visited.resize(street_count, false);
	for (int i = 0; i < street_count; i++)
	{
		int start, dest, cost;
		cin >> start >> dest >> cost;
		Edge e{ dest,cost };
		adj_graph[start].push_back(e);
	}
	while (adj_graph.size() != 0)
	{

	}
}

int min_dfs(Edge &edge, vector<Edge> &spanning)
{
	spanning.push_back(edge);
	int dest = edge.destination;
	while (adj_graph[dest].back().weight == 0)
		adj_graph[dest].pop_back();
	if (adj_graph[dest].size() == 0)
	{
		adj_graph.erase(dest);
		return edge.weight;
	}
	int min_w = min_dfs(adj_graph[dest].back(), spanning);
	return min(edge.weight, min_w);
}
*/