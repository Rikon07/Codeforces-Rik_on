#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll FirstError(int n, vector<ll> &a, vector<ll> &b)
{
    for(int i=0; i<n; i++)
    {
        if(a[i] != b[i])
        {
            return a[i];
            break;
        }
    }
}
ll SecondError(int n, vector<ll> &b, vector<ll> &c)
{
    for(int i=0; i<n-1; i++)
    {
        if(c[i] != b[i])
        {
            return b[i];
            break;
        }
    }
}
int main()
{
    int n;
    cin >> n;
    vector<ll> a(n), b(n), c(n);

    for(auto &ai: a)
        cin >> ai;
    for(int i=0; i<n-1; i++)
        cin >> b[i];
    for(int i=0; i<n-2; i++)
        cin >> c[i];
    
    b[n-1] = LONG_MAX, c[n-1] = LONG_MAX, c[n-2] = LONG_MAX;

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    sort(c.begin(), c.end());

    cout << FirstError(n, a, b) <<"\n";
    cout << SecondError(n, b, c) <<"\n";
    
    return 0;
}