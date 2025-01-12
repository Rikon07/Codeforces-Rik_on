#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
string solve(ll n, ll m, ll k)
{
    vector<ll> a(n), b(m);
    for (auto &ea : a)
        cin >> ea;
    for (auto &eb : b)
        cin >> eb;
    
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    set<int> Ast, Bst;

    for(int i=0; i<n; i++)
    {
        if(a[i] <= k)
            Ast.insert(a[i]);
    }
    for(int j=0; j < m; j++)
    {
        if(b[j] <= k)
            Bst.insert(b[j]);
    }

    if(Ast.size()<k/2 || Bst.size()<k/2)
        return "NO";
    
    bool possible = true;
    set<int> s;
    for(auto it :Ast)
    {
        s.insert(it);
    }
    for(auto it :Bst)
    {
        s.insert(it);
    }
    for(int i=1; i<=k; i++)
    {
        if(s.find(i) == s.end())
            possible = false;
    }
    if(possible)
        return "YES";
    else
        return "NO";
}
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        ll n, m, k;
        cin >> n >> m >> k;

        cout << solve(n, m, k) << "\n";
    }

    return 0;
}