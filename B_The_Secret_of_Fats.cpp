#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define siuu ios_base :: sync_with_stdio(false); cin.tie(0); cout.tie(0)



void solve(int c, int h, int o)
{
    int s = 2*c-4;
    if(s == h)
    {
        cout << "Saturated\n";
    }
    else
    {
        cout << "Unsaturated\n";
    }
}

int main()
{

    int tc;
    cin >> tc;
    while (tc--)
    {
        int c, h, o;
        cin >> c >> h >> o;

        solve(c, h, o);
    }

    return 0;
}