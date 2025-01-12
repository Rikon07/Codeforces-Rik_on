#include<bits/stdc++.h>
using namespace std;
int main()
{
    string g, r, p;
    cin >> g >> r >> p;
    string x = g+r;

    sort(x.begin(), x.end());
    sort(p.begin(), p.end());

    if(x == p)
        cout << "YES\n";
    else
        cout << "NO\n";
        return 0;
}

