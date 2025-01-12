#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while(n--)
    {
        set <char> st;
        string s;
        cin >> s;

        int days = 0, i;
        for(i = 0; i < s.size(); i++)
        {
            st.insert(s[i]);
            if(st.size() > 3)
            {
                st.clear();
                days++;
                st.insert(s[i]);
            }
        }
        (st.size() == 0) ? cout << days << "\n" : cout << ++days << "\n";
    }
    return 0;
}
