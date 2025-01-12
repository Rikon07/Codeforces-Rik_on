#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        string str = "codeforces";
        int differ = 0;
        cin >> s;

        for(int i = 0; i<s.size(); i++)
        {
            if(s[i] != str[i]){
                differ++;
            }
        }
        cout << differ << "\n";
    }
    return 0;
}
