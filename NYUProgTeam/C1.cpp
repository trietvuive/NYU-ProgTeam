/*#include<algorithm>
#include<iostream>
#include<vector>
using namespace std;
int _mergesort(vector<int>& ar, vector<int>& temp, int left, int right);
int merge(vector<int>& ar, vector<int>& temp, int left, int mid, int right);

int mergesort(vector<int>& ar, int n)
{
	vector<int>temp(n);
	return _mergesort(ar, temp, 0, n - 1);
}
int _mergesort(vector<int>& ar, vector<int>& temp, int left, int right)
{
	int invcount = 0;
	if (right > left)
	{
		int mid = left + (right - left) / 2;
		invcount += _mergesort(ar, temp, left, mid);//[left,mid)
		invcount += _mergesort(ar, temp, mid + 1, right);
		invcount += merge(ar, temp, left, mid + 1, right);
	}
	return invcount;
}
int merge(vector<int>& ar, vector<int>& temp, int left, int mid, int right)
{
	int invcount = 0;
	int i = left;
	int j = mid;
	int k = left;
	while (i < mid && j <= right)
	{
		if (ar[i] <= ar[j])
			temp[k++] = ar[i++];
		else {
			temp[k++] = ar[j++];
			//invcount += (mid - i);
		}
		//4,5,6 & 0,1,2,3 => 4,0 4,1 4,2 4,3 & 5,0 5,1 5,2 5,3
	}
	while (i < mid)
		temp[k++] = ar[i++];
	while (j <= right)
		temp[k++] = ar[j++];
	for (int i = left; i <= right; i++)
	{
		ar[i] = temp[i];
	}
	return invcount;

}
int main()
{
	int n;
	cin >> n;
	vector<int> v(n);
	for (int i = 0; i < n; i++)
	{
		int a;
		cin >> a;
		v[i] = a;
	}
	cout << mergesort(v,n);
}*/