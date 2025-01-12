#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define Yes cout << "YES\n"
#define No cout << "NO\n"
int main()
{
    int tc;
        cin >> tc;
    while(tc--)
    {
        int a, b, c, d;
            cin >> a >> b >> c >> d;
        int abmx, abmn, cdmx, cdmn;
        abmx = max(a, b), abmn = min(a, b);
        cdmx = max(c, d), cdmn = min(c, d);

        bool ab = false, cd = false;

        for(int t=abmn; t<=abmx; t++)
        {
            if(cdmn == t) ab = true;

            if(cdmx == t) cd = true;
        }
        if(ab && cd || !ab && !cd)
            No;
        else
            Yes;
    }
    return 0;
}