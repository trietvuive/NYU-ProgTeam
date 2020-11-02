/*#include <vector>
#include <iostream>
#include<algorithm>
#define ll long long
using namespace std;
int lcis(vector<int> list);
int main()
{
	int cases;
	cin >> cases;
	for (int i = 0; i < cases; i++)
	{
		int n;
		cin >> n;
		vector<int>lst(n);
		for (int i = 0; i < n; i++)
		{
			int element;
			cin >> element;
			lst[i] = element;
		}
		cout << lcis(lst)<<"\n";
	}
}
int lcis(vector<int> list)
{
	int n = list.size();
	const int INF = 10e9+1;
	vector<int>dp(n+1, INF);
	dp[0] = -INF;
	for (int i = 0; i < n; i++)
	{
		int j = upper_bound(dp.begin(), dp.end(), list[i]) - dp.begin();
		if (dp[j - 1] <= list[i] && list[i] < dp[j])
			dp[j] = list[i];
	}
	int ans = 0;
	for (int i = 0; i <= n; i++)
	{
		if (dp[i] < INF)
			ans = i;
	}
	return ans;
}*/