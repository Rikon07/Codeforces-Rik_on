#include <bits/stdc++.h>
using namespace std;

int test, n;
string x;
void solve()
{
    if (n == 2 && x == "()")
    {
        cout << "NO" <<"\n";
        return;
    }
    string sb;
    for (int i = 0; i < n; i++)
    {
        sb += "(";
    }
    for (int i = 0; i < n; i++)
    {
        sb += ")";
    }
    if (sb.find(x) != -1)
    {
        sb = "";
        for (int i = 0; i < n; i++)
        {
            sb += "()";
        }
        cout << "YES" <<"\n"<< sb <<"\n";
    }
    else
    {
        cout << "YES" <<"\n"<< sb <<"\n";
    }
}
int main()
{
    cin >> test;
    while(test--)
    {
        cin >> x;
        n = x.size();
        solve();
    }
    return 0;
}