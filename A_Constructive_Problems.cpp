#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        int n, m, rebuild;
        cin >> n >> m;
        
        rebuild = max(n, m);
        cout << rebuild <<"\n";
    }
    return 0;
}