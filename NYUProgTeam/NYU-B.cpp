/*#include<vector>
#include<iostream>
#include<algorithm>

using namespace std;

int count_inversion(vector<int>& vec);

int main()
{
	int cases;
	cin >> cases;
	for (int i = 0; i < cases; i++)
	{
		vector<int>vec;
		int k;
		cin >> k;
		for (int i = 0; i < 20; i++)
		{
			int element;
			cin >> element;
			vec.push_back(element);
		}
		cout << k << " " << count_inversion(vec) << endl;
		
	}
}
int count_inversion(vector<int>& vec)
{
	int count = 0;
	int n = 20;
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (vec[i] > vec[j])
				count++;
		}
	}
	return count;
}*/