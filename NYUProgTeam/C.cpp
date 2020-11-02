/*#include <vector>
#include <iostream>
#define ll long long
using namespace std;
int main()
{
	int n;
	cin >> n;
	int m;
	cin >> m;
	vector<int>coins;
	for (int i = 0; i < m; i++)
	{
		int coin;
		cin >> coin;
		coins.push_back(coin);
	}
	vector<ll>dp(n+1, 0);
	dp[0] = 1;
	for (int i = 0; i < coins.size(); i++)
	{
		for (int j = 0; j < dp.size(); j++)
		{
			if (j >= coins[i])
				dp[j] += dp[j - coins[i]];
		}
	}
	cout << dp[n];
}*/