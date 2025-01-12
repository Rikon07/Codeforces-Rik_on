#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll Equalize(ll n)
{
    vector<ll> ar(n);
    set<ll> st;
    for(ll i=0; i<n; i++)
    {
        cin >> ar[i];
        st.insert(ar[i]);
    }
    vector<ll> per;
    for(auto p: st)
    {
        per.push_back(p);
    }

    ll N = per.size();
    ll ans = 1;
    // for(ll i=0; i<N; i++)
    // {
    //     cout << per[i] << " ";
    // }
    // cout << endl;
    for(ll i=0; i<N; i++)
    {
        ll el = per[i] + n-1;
        ll it = upper_bound(per.begin(), per.end(), el) - per.begin() - i;
        //cout << el <<" "<< it << " ";
        
        ans = max(ans, it);
        //cout<<ans<<endl;
    }
    return ans;
}
int main()
{
    int test;
    cin >> test;

    while(test--)
    {
        ll n;
        cin >> n;

        cout << Equalize(n) << "\n";
    }
    return 0;
}