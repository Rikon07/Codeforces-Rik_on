#include<bits/stdc++.h>
using namespace std;
void Sum_of_three(int n)
{
    for(int i=2; i<n/2; i++)
    {
        int y = n-i-1;
        if(i%3!=0 && y%3!=0 && y>1)
        {
            int z = n - (n-1);
            cout << "YES\n";
            cout << i <<" "<< y <<" "<< z <<"\n";
            return;
        }
    }
    cout << "NO\n";
}
int main()
{
    int test;
    cin >> test;
    for(int t=1; t<=test; t++)
    {
        int n;
        cin >> n;
        Sum_of_three(n);
    }
    return 0;
}