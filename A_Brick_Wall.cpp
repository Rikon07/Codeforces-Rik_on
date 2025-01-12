#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int solve(int n, int m)
{
    return n*(m/2);
}
int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        int n, m;
        cin >> n >> m;
        
        cout << solve(n, m) << endl;
    }
    return 0;
}