#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
#define Yes cout << "YES\n"
#define No cout << "NO\n"
int main()
{
    int tc;
        cin >> tc;
    while(tc--)
    {
        string s;
        int q;
            cin >> s >> q;
        int n = s.size();

        set<int> st;
        for(int i=0; i<=n-4; i++)
        {
            if(s.substr(i, 4) == "1100")
            {
                st.insert(i);
            }
        }
        while(q--)
        {
            int p;
            char v;
            cin >> p >> v;
            p--;

            int l = max(0, p-3);
            int r = min(n-4, p);

            for(int i=l; i<=r; i++)
            {
                if(s.substr(i, 4) == "1100")
                {
                    st.erase(i);
                }
            }
            s[p] = v;
            for(int i=l; i<=r; i++)
            {
                if(s.substr(i, 4) == "1100")
                {
                    st.insert(i);
                }
            }

            if(st.empty()) No;
            else Yes;
        }
    }
    return 0;
}