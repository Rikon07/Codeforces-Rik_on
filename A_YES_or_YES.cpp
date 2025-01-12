#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        string s;
        cin >> s;
        if(s=="YES" || s=="yES" || s=="YeS" || s=="Yes" || s=="yEs" || s=="YEs" || s=="yeS" || s=="YeS" || s=="yES" || s=="yes")
        cout << "YES\n";
        else
        cout << "NO\n";
    }
    return 0;
}