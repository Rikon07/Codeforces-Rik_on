#include<bits/stdc++.h>
using namespace std;

int OrdinaryNumbers(long long int n)
{
    if(n < 10) return n;
    int num = 0;
    for(int i=1; i<=9; i++)
    {
        for(long long int j=i; j<=n; j=j*10+i)
        {
            num++;
        }
    }
    return num;
}
int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        long long int n;
        cin >> n;
        cout << OrdinaryNumbers(n) <<"\n";
    }
    return 0;
}