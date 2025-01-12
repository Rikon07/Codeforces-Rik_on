#include<bits/stdc++.h>
using namespace std;
void UniqueNumber(int n)
{
    if(n < 10){
        cout << n <<"\n";
        return;
    }
    else if(n > 45){
        cout << -1 <<"\n";
        return;
    }
    vector<int> res;
    for(int i=9; i>=1; i--)
    {
        if(n-i >= 0)
        {
            n -= i;
            res.push_back(i);
        }
        else if(n == 0)
        {
            break;
        }
    }
    reverse(res.begin(), res.end());
    for(auto it: res)
    {
        cout << it;
    }
    cout <<"\n";
}
int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        int n;
        cin >> n;
        UniqueNumber(n);
    }
    return 0;
}
