/*#include<vector>
#include<math.h>
#include<iostream>
using namespace std;

int phi(int n);
void construct_farey(vector<int>& farey, int n);

int main()
{
	int cases;
	cin >> cases;
	vector<int>farey;
    farey.push_back(0);
    farey.push_back(2);
	for (int i = 0; i < cases; i++)
	{
		int k, n;
		cin >> k >> n;
        construct_farey(farey, n);
		cout << k << " " << farey[n] << endl;
	}
}
void construct_farey(vector<int>& farey, int n)
{
    for (int i = farey.size(); i <= n; i++)
    {
        farey.push_back(farey.back() + phi(i));
    }
}
int phi(int n) {
    int result = n;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            while (n % i == 0)
                n /= i;
            result -= result / i;
        }
    }
    if (n > 1)
        result -= result / n;
    return result;
}*/