#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
void solve(int n, int k)
{
    /*if(k != (n+1)/2)
    {
        cout << -1 <<'\n';
        return;
    }
    else
    {
        cout << n <<'\n';
    }
    vector<int> ar;
    for(int i=1; i<=n; i++)
    {
        ar.pb(i);
    }
    for(int i = 0; i < ar.size(); i++)
    {
        cout << ar[i];
        if (i != ar.size() - 1) cout << " ";
    }
    cout << '\n';*/
    if(n == 1)
    {
        cout <<"1\n1\n";
        return;
    }
    if(k == 1 || k == n)
    {
        cout << -1 <<'\n';
        return;
    }
    cout << 3 <<'\n';
    if(k%2 == 0)
        cout <<"1 "<< k <<" "<< k+1 <<'\n';
    else
        cout <<"1 "<< k-1 <<" "<< k+2 <<'\n';
}
int main()
{
    int tc;
        cin >> tc;
    while(tc--)
    {
        int n, k;
            cin >> n >> k;
        
        solve(n, k);
    }
    return 0;
}