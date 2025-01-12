#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
int solve(int n)
{
    vector<int> ar(n+1);
    for(int i=1; i<=n; i++)
    {
        cin >> ar[i];
    }
    int ans = 4;
    set<int> st;
    for(int i=1; i<=n; i++)
    {
        st.clear();
        st.insert(i);
        st.insert(ar[i]);
        st.insert(ar[ar[i]]);
        int len = st.size();
        ans = min(ans, len);
    }

    return ans;
}
int main()
{
    int tc;
        cin >> tc;
    while(tc--)
    {
        int n;
        cin >> n;

        cout << solve(n) <<'\n';
    }
    return 0;
}