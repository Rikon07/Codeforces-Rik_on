#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int solve(int n, int k)
{
    int x = n/k;
    set<int> st;
    for(int i=1; i<=sqrt(n); i++)
    {
        if(n % i == 0)
        {
            st.insert(i);
            st.insert(n/i);
        }
    }
    auto it = st.lower_bound(x);
    /*for(auto i: st)
    {
        cout << i <<" ";
    }
    cout << endl;
    cout << q << " "<< *it <<"\n";*/
    if(*it > x)
    {
        it--;
    }
    return *it;
}
int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        int n, k;
        cin >> n >> k;
        cout << solve(n, k) << endl;
    }
    return 0;
}