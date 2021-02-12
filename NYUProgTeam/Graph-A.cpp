/*#include <vector>
#include <iostream>
#include <algorithm>
#include<queue>
#define ll long long
using namespace std;
struct Point
{
	int x;
	int y;
};
int main()
{
	int width, height;
	int count = 1;
	while (cin>>height>>width)
	{
		queue<Point>q;
		char temp;
		if (width == 0 && height == 0)
			break;
		vector<vector<bool>>checked(height+2, vector<bool>(width+2, false));
		vector<vector<char>>matrix(height+2, vector<char>(width+2, 0));
		int ans = 0;
		for (int i = 1; i <= height; i++)
		{
			for (int j = 1; j <= width; j++)
			{
				cin >> temp;
				matrix[i][j] = temp;
				if (temp == 'A')
				{
					checked[i][j] = true;
					ans = 1;
					Point p{p.x = i,p.y = j};
					q.push(p);
				}
			}
		}
		while (q.size())
		{
			int x = q.front().x;
			int y = q.front().y;
			char desired = matrix[x][y] + 1;
			q.pop();
			for (int i = -1; i <= 1; i++)
			{
				for (int j = -1; j <= 1; j++)
				{
					if (matrix[x + i][y + j] == desired && !checked[x + i][y + j])
					{
						checked[x + i][y + j] = true;
						ans = max(ans, matrix[x + i][y + j] - 'A' + 1);
						Point p{p.x = x + i, p.y = y + j};
						q.push(p);
					}
				}
			}
		}
		cout <<"Case "<<count++<<": "<< ans<<endl;
	}
}*/