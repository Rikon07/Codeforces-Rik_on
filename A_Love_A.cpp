#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int n = s.size(), cnt = 0;
    for(int i=0; i<n; i++)
    {
        if(s[i] == 'a')
        cnt++;
    }
    int ans = 2*cnt - 1;
    if(ans > n)
    {
        cout << n << "\n";
    }
    else
    {
        cout << ans << "\n";
    }
    return 0;
}