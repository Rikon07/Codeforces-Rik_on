#include<bits/stdc++.h>
using namespace std;
int solve(int n, int a, int b)
{
    int ans;
    (a+1 > n-b) ? ans = n - a : ans = b + 1;
    return ans;
}
int main()
{
    int n, a, b;
    cin >> n >> a >> b;
    cout << solve(n, a, b) << "\n";
    return 0;
}