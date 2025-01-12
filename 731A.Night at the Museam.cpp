#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int rotation = 0;
    vector<char>st;
    char a = 'a';
    st.push_back(a);
    for(int i=0; i<s.size(); i++)
    {
        st.push_back(s[i]);
    }
    for(int i=0; i<st.size()-1; i++)
    {
        rotation += min(abs(st[i]-st[i+1]), 26-abs(st[i]-st[i+1]));
    }
    cout << rotation << "\n";
}
