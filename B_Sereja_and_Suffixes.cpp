#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
int main()
{
    int n, m;
    cin >> n >> m;

    vector<int> ar(n+1);
    vector<int> ind(n+1);
    set<int> st;
    map<int, int> mp;
    for(int i=1; i<=n; i++)
    {
        cin >> ar[i];
        st.insert(ar[i]);
        mp[ar[i]]++;
    }
    for(int i=1; i<=n; i++)
    {
        if(mp[ar[i]] > 0)
        {
            ind[i] = st.size();
            mp[ar[i]]--;
            if(mp[ar[i]] == 0) st.erase(ar[i]);
        }
    }
    /*for(int i=1; i<=n; i++)
    {
        cout << ind[i] <<" ";
    }
    cout << '\n';*/
    while(m--)
    {
        int l;
        cin >> l;

        cout << ind[l] <<'\n';
    }
    return 0;
}