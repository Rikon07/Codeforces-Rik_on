#include<bits/stdc++.h>
using namespace std;
string solve()
{
    string s;
    cin >> s;
    
    sort(s.begin(), s.end());
    for(int i=0; i<s.size()-1; i++)
    {
        if(s[i+1]-s[i] != 1){
            return "No";
        }
    }
    return "Yes";
}
int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        cout << solve() <<"\n";
    }
    return 0;
}