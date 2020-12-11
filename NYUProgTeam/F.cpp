/*#include <vector>
#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;
int manacher(string str);
int main()
{
	int n;
	cin >> n;
	std::string str;
	for (int i = 0; i < n; i++)
	{
		char c;
		cin >> c;
		if (c == '-')
			str.erase(str.end()-1);
		else
			str+=c;
	}
	cout << str;
}
int manacher(string str)
{
	int n = str.length();
	vector<int>d1(n);
	vector<int>d2(n);
	for (int i = 0, left = 0, right = -1; i < n; i++)
	{
		int count = (i > right) ? 1 : min(d1[left + right - i], right - i + 1);
		while (0 <= i - count && i + count < n && str[i - count] == str[i + count])
			count++;
		d1[i] = count--;
		if (i + count > right)
		{
			left = i - count;
			right = i + count;
		}
	}
	for (int i = 0, left = 0, right = -1; i < n; i++)
	{
		int count = (i > right) ? 0 : min(d1[left + right - i], right - i + 1);
		while (0 <= i - count - 1 && i + count < n && str[i - count-1] == str[i + count])
			count++;
		d1[i] = count--;
		if (i + count > right)
		{
			left = i - count - 1;
			right = i + count;
		}
	}

}*/