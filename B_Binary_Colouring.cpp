#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back

void solve(int x)
{
    vector<int> ar;
    while(x != 0)
    {
        if(x%2 == 0)
        {
            ar.pb(0);
        }
        else if(x%4 == 1)
        {
            ar.pb(1);
            x -= 1;
        }
        else
        {
            ar.pb(-1);
            x += 1;
        }
        x /= 2;
    }

    cout << ar.size() <<'\n';
    for(int it : ar)
    {
        cout << it << " ";
    }
    cout <<'\n';
}

int main()
{
    int tc;
        cin >> tc;
    while (tc--)
    {
        int x;
            cin >> x;

        solve(x);
    }
    return 0;
}