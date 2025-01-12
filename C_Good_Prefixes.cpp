#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
ll solvee(int n)
{
    vector<ll> ar(n+1), pre(n+1), maxi(n+1);

    ll num = 0;
    for(int i=0; i<n; i++)
    {
        cin >> ar[i];
    }
    for(int i=0; i<n; i++)
    {
        if(i == 0) maxi[i] = ar[i];
        else maxi[i] = max(maxi[i-1], ar[i]);
        
        if(i == 0) pre[i] = ar[i];
        else pre[i] = ar[i] + pre[i-1];
    }
    for(int i=0; i<n; i++)
    {
        if(pre[i]-maxi[i] == maxi[i])
            num++;
    }
    
    return num;
}
int main()
{
    int tc;
        cin >> tc;
    while(tc--)
    {
        int n;
        cin >> n;

        cout << solvee(n) <<'\n';
    }
    return 0;
}