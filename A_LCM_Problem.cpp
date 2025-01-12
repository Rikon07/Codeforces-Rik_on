#include<bits/stdc++.h>
using namespace std;
void solve(int l, int r)
{
    if(2*l > r)
    {
        cout << -1 <<" "<< -1 <<"\n";
        return;
    }
    int x = l, y = 2*x;
    cout << x <<" "<< y <<"\n";
}
int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        int l, r;
        cin >> l >> r;
        solve(l, r);
    }
    return 0;
}