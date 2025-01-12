#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(int n)
{
    cout << 1<<" "<< 1 <<'\n';
    cout << 2 <<" "<< 1 <<'\n';
    
    if(n<3) return;
    
    for(int i=3; i<n; i++)
        cout << 1 <<" "<< i <<'\n';

    cout << n <<" "<< n <<'\n'<<'\n';
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