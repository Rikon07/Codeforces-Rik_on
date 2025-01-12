#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(int n)
{
    if(n == 1 || n == 3)
    {
        cout << -1 <<'\n';
        return;
    }
    if(n % 2 == 0)
    {
        for(int i=1; i<=n-2; i++) cout << 3;

        cout << 66 <<'\n';
        return;
    }
    else
    {
        for(int i=1; i<=n-5; i++) cout << 3;

        cout << 36366 <<'\n';
        return;
    }
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