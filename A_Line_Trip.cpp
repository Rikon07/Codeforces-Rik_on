#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(int n, int x)
{
    vector<int> gas(n);
    for(int i=0; i<n; i++)
    {
        cin >> gas[i];
    }
    ll litre = 0, l = 0;
    for(int i=0; i<n; i++)
    {
        litre = max(litre, gas[i]-l);
        l = gas[i];
    }
    litre = max(litre, 2*(x-l));
    cout << litre <<"\n";
}
int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        int n, x;
        cin >> n >> x;
        solve(n, x);
    }
    return 0;
}