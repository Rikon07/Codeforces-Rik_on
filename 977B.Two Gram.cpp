#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string s, sub = {};
    cin >> n >> s;
    int x = 0, y;
    for(int i=0; i<n-1; i++)
    {
        y = 0;
        for(int j=0; j<n-1; j++)
        {
            if(s[j] == s[i] && s[j+1] == s[i+1]){
                y++;
            }
        }
        if(x < y){
            x = y;
            sub[0] = s[i];
            sub[1] = s[i+1];
        }
    }
    cout << sub[0] << sub[1] << endl;
    return 0;
}
