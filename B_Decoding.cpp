#include <bits/stdc++.h>
using namespace std;
void decode(int n)
{
    string s, code;
    cin >> s;
    
    for(int i=0; n; i++, n--)
    {
        if(n % 2 == 1)
        {
            code += s[i];
        }
        else
        {
            code = s[i] + code;
        }
    }
    for(int i=0; i<code.size(); i++)
    {
        cout << code[i];
    }
}
int main()
{
    int n;
    cin >> n;
    decode(n);
    return 0;
}