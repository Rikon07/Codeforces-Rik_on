#include<bits/stdc++.h>
using namespace std;

int longest_subsequence(int n)
{
    set <int> st;
    for(int i=0; i<n; i++)
    {
        int x; cin >> x;
        st.insert(x);
    }
    return st.size();
}

int main()
{
    int test, n;
    cin >> test;
    while(test--)
    {
        cin >> n;
        cout << longest_subsequence(n) << "\n";
    }
    return 0;
}
