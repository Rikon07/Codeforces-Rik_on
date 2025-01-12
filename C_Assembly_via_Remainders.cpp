#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
void solve(int n)
{
    vector<int> ar(n-1), ans;
    for(int &element: ar)
        cin >> element;
    
    /*ans.pb(ar[0]+1);
    for(int i=1; i<n; i++)
    {
        ans.pb(ans[i-1]+ar[i-1]);
    }
    for(auto ele: ans)
    {
        cout << ele <<" ";
    }*/
    
    int maxi = *max_element(ar.begin(), ar.end());
    maxi++;
    cout << maxi <<" ";
    for(int i=0; i<n-1; i++)
    {
        cout << maxi + ar[i] <<" ";
        maxi += ar[i];
    }
    cout <<'\n';
}
int main()
{
    int tc;
        cin >> tc;
    while(tc--)
    {
        int n;
        cin >> n;

        solve(n);
    }
    return 0;
}