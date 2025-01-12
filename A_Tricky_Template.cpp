#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
string solve()
{
    int n;
    string a, b, c;
    cin >> n >> a >> b >> c;
    
    for(int i=0; i<n; i++)
    {
        if(a[i] != c[i] && b[i] != c[i])
        {
            return "YES";
        }
    }
    return "NO";
}
int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        cout << solve() <<"\n";
    }
    return 0;
}