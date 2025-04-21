#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
int solve(int n)
{
    vector<int> ar(n);
    set<int> st;
    for(int i=0; i<n; i++)
    {
        cin >> ar[i];
        st.insert(ar[i]);
    }
    return st.size();
}
int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        cout << solve(n) <<'\n';
    }
    return 0;
}
