#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, k;
    cin >> t;
    while(t--)
    {
        cin >> n >> k;
        string s;
        int cnt=0;
        cin >> s;
        for(int i=0; i<n; i++)
        {
            if(s[i] == 'B'){
                i += k-1;
                cnt++;
            }
        }
        cout << cnt << "\n";
    }
    return 0;
}
