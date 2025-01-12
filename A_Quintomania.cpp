#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
#define Yes cout << "YES\n"
#define No cout << "NO\n"
void solve(int n)
{
    vector<int> ar(n);
    bool perfect = true;
    for(int i=0; i<n; i++)
    {
        cin >> ar[i];
    }
    for(int i=0; i<n-1; i++)
    {
        if(abs(ar[i+1]-ar[i]) != 7 && abs(ar[i+1]-ar[i]) != 5)
        {
            No;
            return;
        }
    }
    Yes;
}
int main()
{
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