#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
bool isPerfectSquare(ll x)
{
    if (x >= 0)
    {
        long long sr = sqrt(x);
        return (sr * sr == x);
    }
    return false;
}
string solve(int n)
{
    vector<int> arr(n);
    ll sum = 0;
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    if (isPerfectSquare(sum))
        return "YES";
    else
        return "NO";
}
int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        int n;
        cin >> n;
        cout << solve(n) <<"\n";
    }
    return 0;
}