#include<bits/stdc++.h>
using namespace std;
int solve(int n)
{
    string s;
    cin >> s;
    int num = 0;
    unordered_set<char> nonEmp;
    for(int i=0; i<n; i++)
    {
        nonEmp.insert(s[i]);
        num += nonEmp.size();
    }
    return num;
}
int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        int N;
        cin >> N;
        cout << solve(N) <<"\n";
    }
    return 0;
}