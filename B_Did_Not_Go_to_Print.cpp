#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define siuu ios_base :: sync_with_stdio(false); cin.tie(0); cout.tie(0)


void solve(int n)
{
    string s;
    cin >> s;

    stack<int> st;
    vector<int> pr(n+1, 0);

    for(int i=0; i<n; i++)
    {
        if(s[i] == '1')
        {
            st.push(i);
        }
        else if(s[i] == '2')
        {
            if(!st.empty())
            {
                int t = st.top();
                pr[t] = 1;
                st.pop();
            }
            else
            {
                pr[i] = 1;
            }
        }
        else
        {
            pr[i] = 1;
        }
    }

    int cnt=0;
    for(int i=0; i<n; i++)
    {
        if(pr[i] == 0)
            cnt++;
    }
    cout << cnt << '\n';
    for(int i=0; i<n; i++)
    {
        if(pr[i] == 0)
            cout << i+1 <<" ";
    }
    cout << '\n';
}

int main()
{
    siuu;
    int tc;
    cin >> tc;
    while(tc--)
    {
        int n;
        cin >> n;

        solve(n);
    }

    return 0;
}