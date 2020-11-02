/*#include <iostream>
#define ll long long
using namespace std;
int main()
{
	int array[6][6];
	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			cin >> array[i][j];
		}
	}
	int max_sum = INT32_MIN;
	for (int i = 2; i < 6; i++)
	{
		int curr_sum = array[i - 2][0] + array[i - 2][1] + array[i - 2][2]
			+array[i - 1][1]
			+ array[i][0] + array[i][1] + array[i][2];
		max_sum = max(max_sum, curr_sum);
		for (int j = 3; j < 6; j++)
		{
			curr_sum += array[i - 1][j - 1] + array[i - 2][j] + array[i][j]
				- array[i - 1][j - 2] - array[i - 2][j - 3] - array[i][j - 3];
			max_sum = max(max_sum, curr_sum);
		}
	}
	cout << max_sum;
}*/