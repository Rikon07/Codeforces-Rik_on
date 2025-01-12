#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, l, r, x, y, i;
    cin >> t;

    while(t--)
    {
        cin >> l >> r;
        int gcd;
        for(x=2; x<l; x++)
        {
            for(y=x; y<l; y++)
            {
                if(x+y >= l && x+y <= r)
                {
                    for(i=2; i<x; i++)
                    {
                        if(x%i == 0 && y%i == 0)
                        {
                            gcd = i;
                            cout << x << y << endl;
                        }
                    }
                }
            }
        }
    }
}

