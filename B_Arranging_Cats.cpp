#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        ll n;
        cin >> n;
        string s, t;
        cin >> s >> t;
        ll a = 0, b = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '0' and t[i] != s[i])
            {
                a++;
            }
            if (t[i] == '0' and s[i] != t[i])
            {
                b++;
            }
        }
        cout << max(a, b) << '\n';
    }
    return 0;
}