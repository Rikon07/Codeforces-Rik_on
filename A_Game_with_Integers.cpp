#include<bits/stdc++.h>
using namespace std;
string solve(int n)
{
    if(n % 3 == 0){
        return "Second";
    }
    else{
        return "First";
    }
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