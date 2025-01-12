#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
int main()
{
    int n;
        cin >> n;
    
    set<pair<string, string>> st;
    for(int i=0; i<n; i++)
    {
        string species, color;
        cin >> species >> color;

        st.insert({species, color});
    }
    
    cout << st.size() <<'\n';

    return 0;
}