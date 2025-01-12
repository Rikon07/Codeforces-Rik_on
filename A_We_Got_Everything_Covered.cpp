#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve()
{
    int n, k;
    cin >> n >> k;
    vector<char> st(k);
    char alphabet = 'a';
    for(int i=0; i<k; i++)
    {
        st[i] = alphabet;
        alphabet++;
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<st.size(); j++)
        {
            cout << st[j];
        }
    }
        cout << endl;
}
int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        solve();
    }
    return 0;
}