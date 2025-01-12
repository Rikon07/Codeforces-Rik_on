#include<bits/stdc++.h>
using namespace std;
void solve(int n, int k)
{
    for(int i=0; i<=k; i++)
    {
        if(i>0)
        {
            cout << i <<" ";
        }
    }
    for(int i=n; i>k; i--)
    {
        cout << i <<" ";
    }
    cout << "\n";
}
int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        int n, k;
        cin >> n >> k;
        solve(n, k);
    }
    return 0;
}