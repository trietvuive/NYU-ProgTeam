/*#include <iostream>
#include <vector>
#include <algorithm> 
#define ll long long
using namespace std;
bool isPeak(const vector<int> v, int index)
{
	if (index == 0 && v[0] > v[1])
		return true;
	if (index == v.size() - 1 && v[index] > v[index - 1])
		return true;
	else if (v[index] > v[index - 1] && v[index] > v[index + 1])
		return true;
	return false;
}
int peak(vector<int>&v)
{
	int left = 0;
	int right = v.size() - 1;
	while (left <= right)
	{
		int mid = left + (right - left) / 2;
		if (isPeak(v, mid)) 
		{
			return v[mid];
		}
		if (v[mid] < v[right])
		{
			left = mid + 1;
		}
		else
			right = mid - 1;
	}
	return *max_element(v.begin(), v.end());
}

int main()
{
	int c;
	cin >> c;
	for (int i = 0; i < c; i++)
	{
		int n;
		int max_h = 0;
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			int a;
			cin >> a;
			max_h = max(max_h, a);
		}
		cout << max_h << endl;
	}
}*/