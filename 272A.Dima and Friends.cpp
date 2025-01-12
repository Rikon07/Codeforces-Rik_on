#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int friends[n], fingers = 0, ans = 0;
    for(int i=0; i<n; i++)
    {
        cin >> friends[i];
        fingers += friends[i];
    }
    for(int i=1; i<=5; ++i)
    {
        if((fingers + i) % (n + 1) != 1)
        {
            ans++;
        }
    }
    cout << ans << "\n";
    return 0;
}
