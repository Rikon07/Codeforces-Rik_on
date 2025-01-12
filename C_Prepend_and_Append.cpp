#include<bits/stdc++.h>
using namespace std;
int solve(int n)
{
    string bin;
    cin >> bin;
    bool flag = true;
    int i, j;
    for(i=0, j=n-1; i<n/2; i++, j--)
    {
        if(bin[i]=='0' && bin[j]=='1'){
            flag = true;
        }
        else if(bin[i]=='1' && bin[j]=='0'){
            flag = true;
        }
        else{
            flag = false;
            break;
        }
    }
    return j-i+1;
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