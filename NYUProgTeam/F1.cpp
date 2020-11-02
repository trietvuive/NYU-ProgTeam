/*#include<iostream>
#include<algorithm>
#include<vector>
#define long long ll;
using namespace std;
double median(const vector<int>& v1, const vector<int>& v2)
//assume v1.size()< v2.size
{
	int start = 0;
	int end = v1.size();
	int n1 = v1.size();
	int n2 = v2.size();
	int left1, right1, left2, right2;
	while (start<=end)
	{
		int partition1 = (start+end) / 2;
		int partition2 = (n1 + n2 + 1) / 2 - partition1;
		left1 = partition1 == 0 ? INT32_MIN : v1[partition1 - 1];
		right1 = partition1 == v1.size() ? INT32_MAX : v1[partition1];
		left2 = partition2 == 0 ? INT32_MIN : v2[partition2 - 1];
		right2 = partition2 == v2.size() ? INT32_MAX : v2[partition2];
		if (left1 <= right2 && left2 <= right1)
		{
			if ((n1 + n2) % 2 == 0)
				return (double)(max(left1, left2) + min(right1, right2)) / 2;
			return (double)max(left1, left2);
		}
		else if (left1 > right2)
			end = partition1 - 1;
		else
			start = partition1 + 1;
	}
	return 0;
}

int main()
{
	int n1, n2;
	cin >> n1;
	vector<int>v1(n1);
	for (int i = 0; i < n1; i++)
	{
		int a;
		cin >> a;
		v1[i] = a;
	}
	cin >> n2;
	vector<int>v2(n2);
	for (int i = 0; i < n2; i++)
	{
		int a;
		cin >> a;
		v2[i] = a;
	}
	cout << median(v1.size()<v2.size()?v1:v2, v1.size()<v2.size()?v2:v1);
}*/