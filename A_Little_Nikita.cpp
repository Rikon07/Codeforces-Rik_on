#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
#define Yes cout << "YES\n"
#define No cout << "NO\n"
void solve(int n, int m)
{
    if(n == m){
        Yes;
        return;
    }
    if(n < m){
        No;
        return;
    }
    if(n > m){
        if(n%2 ==  m%2)
        {
            Yes;
            return;
        }
        else
        {
            No;
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
        int n, m;
            cin >> n >> m;
        solve(n, m);
    }
    return 0;
}