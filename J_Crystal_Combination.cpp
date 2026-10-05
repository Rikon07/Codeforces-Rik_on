#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
#define siuu ios_base :: sync_with_stdio(false); cin.tie(0); cout.tie(0)


int main()
{
    int tc;
    cin >> tc;
    while(tc--)
    {
        ull x;
        cin >> x;

        ull ans = ULLONG_MAX;

        ull p[64];
        p[0] = 1;

        for(int i=1; i<64; i++)
            p[i] = p[i-1]*2;

        for(int a=0; a<=60; a++)
        {
            for(int b=0; b<=60; b++)
            {
                ull sum = p[a]+p[b];

                ull diff;
                if(sum >= x)
                    diff = sum-x;
                else
                    diff = x-sum;

                ans = min(ans, diff);
            }
        }

        cout << ans << '\n';
    }


    return 0;
}