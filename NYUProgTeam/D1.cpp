/*#include <iostream>
#include <vector>
#include <algorithm> 
#define ll long long
using namespace std;
int maxSubsequence(const vector<int>& vect)
{
	int max_sum = 0;
	for (auto iter = vect.begin(); iter != vect.end(); iter++)
	{
		if (*iter > 0)
			max_sum += *iter;
	}
	return max_sum == 0 ? *max_element(vect.begin(), vect.end()) : max_sum;
}
int maxSubarray(const vector<int>& vect)
{
	int max_sum = INT32_MIN;
	int margin = 0;
	for (auto iter = vect.begin(); iter != vect.end(); iter++)
	{
		margin += *iter;
		max_sum = max(margin, max_sum);
		if (margin < 0)
			margin = 0;
	}
	return max_sum;
}
int main()
{
	int test;
	cin >> test;
	for (int i = 0; i < test; i++)
	{
		vector<int> ar;
		int n;
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			int a;
			cin >> a;
			ar[i] = a;
		}
		cout << maxSubarray(ar)<< " ";
		cout << maxSubsequence(ar)<<" ";
		cout << endl;
	}
}*/