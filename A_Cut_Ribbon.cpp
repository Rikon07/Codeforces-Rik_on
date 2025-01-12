#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, a, b, c;
    cin >> n >> a >> b >> c;
    if(a+b+c > n)
    {
        if(a+b == n || b+c == n || a+c == n){
            cout << 2 <<"\n";
        }
        else{
            cout << 1 <<"\n";
        }
    }
    return 0;
}