#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define siuu ios_base :: sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define pb push_back
#define var vector<int> ar
#define Yes cout << "YES\n"
#define No cout << "NO\n"
int solve()
{
    int l, a, b;
    cin >> l >> a >> b;
    map<int, int> mp;

    int max = 0;

    for(int spin=1; ; spin++)
    {
        int val = (a + spin * b) % l;
        if(val > max) max = val;
        mp[val]++;
        if(mp[val] > 1) return max;
    }

}
int main()
{
    int tc;
        cin >> tc;
    while(tc--)
    {
        cout << solve() << "\n";
    }
    return 0;
}

// Long time no see