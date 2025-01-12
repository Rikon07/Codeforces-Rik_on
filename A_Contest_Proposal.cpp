#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
int contest(int n)
{
    vector<int> pr(n), dif(n);
    set<int> st;
    for(int i=0; i<n; i++)
    {
        cin >> pr[i];
        st.insert(pr[i]);
    }
    sort(pr.begin(), pr.end());
    for(int i=0; i<n; i++)
    {
        cin >> dif[i];
    }
    int ind = 0, newProbs = 0;
    for(int i=0; i<n; i++)
    {
        if(pr[ind] > dif[i])
        {
            st.insert(dif[ind]);
            auto it = st.end();
            it--;
            st.erase(it);
            newProbs++;
            ind--;
        }
        ind++;
    }
    
    return newProbs;
}
int main()
{
    int tc;
        cin >> tc;
    while(tc--)
    {
        int n;
        cin >> n;

        cout << contest(n) <<'\n';
    }
    return 0;
}