#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define siuu ios_base :: sync_with_stdio(false); cin.tie(0); cout.tie(0)


void solve(int x, int y, int r)
{
    for(int i=x-r; i<=x+r; i++)
    {
        for(int j=y-r; j<=y+r; j++)
        {
            double dis = sqrt((x-i)*(x-i) + (y-j)*(y-j));
            
            if(dis == r)
            {
                cout << i << " " << j << '\n';
                return;
            }
        }
    }
}

int main()
{

    int tc;
    cin >> tc;
    while(tc--)
    {
        int x, y, r;
        cin >> x >> y >> r;

        solve(x, y, r);
    }

    return 0;
}