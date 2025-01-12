#include<bits/stdc++.h>
using namespace std;
void solve(int n)
{
    set <int> st;
    vector <int> arr;
    for(int i=0; i<n*2; i++)
    {
        int x; cin >> x;
        int before = st.size();
        st.insert(x);
        int after = st.size();
        if(after > before){
            arr.push_back(x);
        }
    }
    for(auto it: arr)
    {
        cout << it << " ";
    }
    cout << "\n";
}
int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        int N;
        cin >> N;
        solve(N);
    }
    return 0;
}