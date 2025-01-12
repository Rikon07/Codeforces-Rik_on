#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test, i;
    cin >> test;
    string s;
    while(test--)
    {
        cin >> s;
        int cnt=0;

        if(s.size() % 2 != 0)
        {
            cout << "NO\n";
        }
        else
        {
            for(i=0; i<s.size()/2; i++)
            {
                if(s[i] == s[i+s.size()/2])
                    cnt++;
            }
            if(cnt == s.size()/2)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }
    return 0;
}
