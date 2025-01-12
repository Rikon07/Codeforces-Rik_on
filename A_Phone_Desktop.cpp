#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    int tc;
        cin >> tc;
    while(tc--)
    {
        int x, y;
        cin >> x >> y;

        int screen = y/2;
        int z = screen*7;
        x -= z;
        if(y % 2 == 1)
        {
            screen++;
            x -= 11;
        }
        if(x > 0)
        {
            screen += (x+14)/15;
        }
        cout << screen <<'\n';
    }
    return 0;
}