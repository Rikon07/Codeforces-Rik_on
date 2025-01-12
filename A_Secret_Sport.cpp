#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        cout << s[n-1] <<"\n";
    }
    return 0;
}