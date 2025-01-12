#include<bits/stdc++.h>
using namespace std;
string solve(int n)
{
    string s;
    cin >> s;
    bool yes = false;
    vector<int>point(2);
    for(int i=0; i<n; i++)
    {
        if(s[i] == 'U'){
            point[0]++;
        }
        else if(s[i] == 'D'){
            point[0]--;
        }
        else if(s[i] == 'L'){
            point[1]--;
        }
        else if(s[i] == 'R'){
            point[1]++;
        }
        if(point[0] == 1 && point[1] == 1){
            yes = true;
            break;
        }
    }
    if(yes) return "YES";
    else return "NO";
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