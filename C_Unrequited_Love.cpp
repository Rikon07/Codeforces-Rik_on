#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define siuu ios_base :: sync_with_stdio(false); cin.tie(0); cout.tie(0)

void solve1(int n)
{
    vector<int> ar(n);

    for(int i=0; i<n; i++)
        cin >> ar[i];

    vector<int> s(n-4), x(n-4), y(n-4), z(n-4);

    for(int i=0; i<n-4; i++)
    {
        s[i] = ar[i] + ar[i+2] - ar[i+4];

        x[i] = i;
        y[i] = i+2;
        z[i] = i+4;
    }

    int cnt = 0;

    for(int i=0; i<n-4; i++)
    {
        for(int j=i+1; j<n-4; j++)
        {
            if(s[i] == s[j])
            {
                if(x[i] != x[j] && x[i] != y[j] && x[i] != z[j] && y[i] != x[j] && y[i] != y[j] && y[i] != z[j] && z[i] != x[j] && z[i] != y[j] && z[i] != z[j])
                {
                    cnt++;
                }
            }
        }
    }

    cout << cnt <<'\n';
}

void solve(int n)
{
    vector<int> ar(n);

    for(int i=0; i<n; i++)
        cin >> ar[i];

    vector<int> s(n-4);
    map<int, int> mp;

    for(int i=0; i<n-4; i++)
    {
        s[i] = ar[i] + ar[i+2] - ar[i+4];
    }

    int cnt = 0;

    for(int i=0; i<n-4; i++)
    {
        cnt += mp[s[i]];
        mp[s[i]]++;
    }

    for(int i=0; i<n-4; i++)
    {
        if(i+2 < n-4 && s[i] == s[i+2]) cnt--;

        if(i+4 < n-4 && s[i] == s[i+4]) cnt--;
    }

    cout << cnt <<'\n';
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