#include<bits/stdc++.h>
using namespace std;
string solve(int n)
{
    string s;
    cin >> s;
    int parenthesis = 0;
    for(int i=0; i<n; i++)
    {
        if(s[i] == ')'){
            parenthesis++;
        }
        else{
            parenthesis = 0;
        }
    }
    if(parenthesis > (n-parenthesis))
        return "YES";
    else 
        return "NO";
}
int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        int n;
        cin >> n;
        cout << solve(n) <<"\n";
    }
    return 0;
}