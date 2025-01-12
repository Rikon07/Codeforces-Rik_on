#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(int x, int y, int k)
{
    int m = k/2;
    for(int i=0; i<m; i++)
    {
        cout << x-i-1 <<" "<< y <<'\n';
        cout << x+i+1 <<" "<< y <<'\n';
    }
    if(k&1) cout << x <<" "<< y <<'\n';
}
int main()
{
    int tc;
        cin >> tc;
    while(tc--)
    {
        int x, y, k;
        cin >> x >> y >> k;

        solve(x, y, k);
    }
    return 0;
}