#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    int tc;
        cin >> tc;
    while(tc--)
    {
        int l, r;
            cin >> l >> r;
        int ans = 0;
        while(r != 1)
        {
            r /= 2;
            ans++;
        }
        cout << ans <<'\n';
    }
    return 0;
}