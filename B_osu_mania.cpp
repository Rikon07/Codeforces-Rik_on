#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
void solve(int n)
{
    vector<int> notes;
    while(n--)
    {
        char a, b, c, d;
        cin >> a >> b >> c >> d;

        if(a == '#') notes.pb(1);
        else if(b == '#') notes.pb(2);
        else if(c == '#') notes.pb(3);
        else if(d == '#') notes.pb(4);
    }
    for(int i=notes.size()-1; i>=0; i--)
    {
        cout << notes[i] <<" ";
    }
    cout << '\n';
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