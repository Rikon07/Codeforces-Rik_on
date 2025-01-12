#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        char c;
        cin >> c;
        string s = "codeforces";
        bool appear = false;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i] == c){
                appear = true;
                break;
            }
        }
        (appear) ? cout << "YES\n" : cout << "NO\n";
    }
    return 0;
}