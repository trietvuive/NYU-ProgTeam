/*#include <vector>
#include <iostream>
#define ll long long
using namespace std;
int main()
{
    int mod = 1000000007;
    string nums;
    cin >> nums;
    int n = nums.length();
    ll dp = 0;
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        ll num = (nums[i]) - 48;
        dp = (dp * 10 + num * (i + 1)) % mod;
        sum = (sum + dp) % mod;
    }
    cout << sum;
}*/