#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    int tc;
        cin >> tc;
    while(tc--)
    {
        int x;
        cin >> x;
        int maxi = 0, y=0;
        for(int i=1; i<x; i++)
        {
            int z = (__gcd(x, i)+i);
            if(z > maxi)
            {
                maxi = y;
                y = i;
            }
        }
        cout << y <<'\n';
    }
    return 0;
}