/*#include <vector>
#include <iostream>
#define ll long long
using namespace std;
int main()
{
	int n;
	cin >> n;
	vector<int>d;
	d.push_back(0);
	d.push_back(1);
	for (int i = 0; i < n; i++)
	{
		if (i >= d.size())
			d.push_back(d[i - 1] + d[i - 2]);
		cout << d[i]<<" ";
	}
}*/