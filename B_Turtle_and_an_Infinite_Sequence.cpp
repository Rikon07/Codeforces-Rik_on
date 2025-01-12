#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
        cin >> tc;
    while(tc--)
    {
        int n, m;
            cin >> n >> m;
        
        int ind = 1, num = 0, ans = 0;
        while(n > 0)
        {
            if(n%2 == 1)
            {
                ans += ind;
                num += ind;
            }
            else
            {
                int x = min(ind - num, num + 1);
                if(x <= m)
                {
                    ans += ind;
                }
            }

            ind *= 2;
            n /= 2;
        }

        while(ind-num <= m)
        {
            ans += ind;
            ind *= 2;
        }

        cout << ans << '\n';
    }
    return 0;
}