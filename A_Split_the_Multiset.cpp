#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
int splitMultiset(int n, int k)
{
    multiset<int> st;
    st.insert(n);
    int op = (n-1)/(k-1);
    if((n-1) % (k-1) != 0)
    {
        op++;
    }
    return op;
}
int main()
{
    int tc;
        cin >> tc;
    while(tc--)
    {
        int n, k;
            cin >> n >> k;
        
        cout << splitMultiset(n, k) <<'\n';
    }
    return 0;
}