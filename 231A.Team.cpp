#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int p, v, t;
    int cnt = 0;
    while(n--)
    {
        cin >> p >> v >> t;
        if(p && v || v && t || p && t)
            cnt++;
    }
    cout << cnt << endl;
    return 0;
}
