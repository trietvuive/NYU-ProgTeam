/*#include <vector>
#include <iostream>
#include <algorithm>
#include<queue>
#define ll long long
using namespace std;
int move1[] = { 1,2,2,1,-1,-2,-2,-1 };
int move2[] = { 2,1,-1,-2,-2,-1,1,2 };
struct Point
{
	int x;
	int y;
	int val;
};
int bfs(int startx, int starty, int endx,int endy)
{
	vector<vector<bool>>visited(8, vector<bool>(8, false));
	queue<Point> q;
	Point sp{ sp.x = startx, sp.y = starty, sp.val = 0 };
	q.push(sp);
	visited[startx][starty] = true;
	while (q.size())
	{
		Point p = q.front();
		if (p.x == endx && p.y == endy)
			return p.val;
		q.pop();
		for (int i = 0; i < 8; i++)
		{
			if (p.x + move1[i] >= 0 && p.x + move1[i] <= 7 && p.y + move2[i] >= 0 && p.y + move2[i] <= 7)
			{
				if (!visited[p.x + move1[i]][p.y + move2[i]])
				{
					visited[p.x + move1[i]][p.y + move2[i]] = true;
					Point next{ next.x = p.x + move1[i], next.y = p.y + move2[i], next.val = p.val + 1 };
					q.push(next);
				}
			}
		}
	}
	return -1;
}
int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		string start, end;
		cin >> start >> end;
		int startx = start[0] - 'a', starty = start[1] - '1';
		int endx = end[0] - 'a', endy = end[1] - '1';
		cout << bfs(startx, starty, endx, endy)<<endl;
	}
}*/