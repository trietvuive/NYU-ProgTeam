/*#include <iostream>
#include <vector>
#define ll long long
using namespace std;
int main()
{
	int n;
	cin >> n;
	vector<int>dp;
	dp.push_back(0);
	dp.push_back(0);
	for (int i = 0; i < n; i++)
	{
		int stones;
		cin >> stones;
		if (stones >= dp.size())
		{
			for (int j = dp.size(); j <= stones; j++)
			{
				if ((j >= 2 && dp[j - 2] == 0) || (j >= 3 && dp[j - 3] == 0) || (j >= 5 && dp[j - 5] == 0))
					dp.push_back(1);
				else
					dp.push_back(0);
			}
		}
		if (dp[stones] == 0 && stones!=0)
			cout << "Second"<<"\n";
		else
			cout << "First"<<"\n";
	}
}*/