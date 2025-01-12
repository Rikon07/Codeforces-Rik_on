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
        bool ok = true;
        int n = s.size();
        for(int i=0; i<n-1; i++)
        {
            if(s[i] != s[i+1]){
                ok = false;
            }
        }
        if(ok) cout << -1 <<"\n";
        else cout << n-1 <<"\n";
    }
    return 0;
}