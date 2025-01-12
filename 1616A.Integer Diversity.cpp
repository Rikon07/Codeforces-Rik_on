#include<bits/stdc++.h>
using namespace std;

int element(int n)
{
    set <int> st;
    for(int i=0; i<n; i++)
    {
        int x;
        cin >> x;
        int cnt = st.count(x);
        if(cnt){
            st.insert(-x);
        }
        else{
            st.insert(x);
        }
    }
    return st.size();
}

int main()
{
    int test, N;
    cin >> test;
    while(test--)
    {
        cin >> N;
        cout << element(N) << "\n";
    }
    return 0;
}
