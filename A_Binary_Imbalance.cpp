#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        int n;
        string s;
        cin >> n >> s;
        bool possible = false;
        for(int i=0; i<n; i++)
        {
            if(s[i] == '0'){
                possible = true;
            }
        }
        (possible) ? cout << "YES\n" : cout << "NO\n";
    }
    return 0;
}