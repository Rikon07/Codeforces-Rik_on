#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define siuu ios_base :: sync_with_stdio(false); cin.tie(0); cout.tie(0)



void solve(int n)
{
    int ar[3];
    int mini = n;
    for(int i=0; i<3; i++)
    {
        cin >> ar[i];
        if(ar[i] < mini)
        {
            mini = ar[i];
        }
    }
    cout << n-mini << '\n';
}

int main()
{

    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;

        solve(n);
    }

    return 0;
}