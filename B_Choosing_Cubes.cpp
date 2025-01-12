#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
#define Yes cout << "YES\n"
#define No cout << "NO\n"
void solve()
{
    int n, f, k;
        cin >> n >> f >> k;

    vector<int> ar(n);
    int fav = 0;
    for(int i=0; i<n; i++)
    {
        cin >> ar[i];
        if(i == f-1)
        {
            fav = ar[i];
        }
    }
    sort(ar.begin(), ar.end(), greater<int>());
    
    if(fav < ar[k-1])
    {
        No;
        return;
    }
    else if(ar[k-1] < fav)
    {
        Yes;
        return;
    }
    else
    {
        if(k<n && ar[k] == fav)
        {
            cout <<"MAYBE\n";
            return;
        }
        else
        {
            Yes;
            return;
        }
    }
}
int main()
{
    int tc;
        cin >> tc;
    while(tc--)
    {
        solve();
    }
    return 0;
}