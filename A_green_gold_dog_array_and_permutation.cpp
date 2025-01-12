#include<bits/stdc++.h>
using namespace std;
#define pb push_back
typedef long long int ll;
void solve(ll n)
{
    vector<pair<int, int>> ar;
    for(int i=0; i<n; i++)
    {
        int element;
        cin >> element;
        ar.pb({element, i});
    }
    sort(ar.rbegin(), ar.rend());

    vector<int> per(n);
    for(int i=1; i<=n; i++)
        per[ar[i-1].second] = i;
    
    for(int it: per)
        cout << it <<" ";
    cout <<"\n";
}
int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        ll n;
        cin >> n;
        solve(n);
    }
    return 0;
}