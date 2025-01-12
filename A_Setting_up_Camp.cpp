#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int introvert()
{
    int a, b, c;
    cin >> a >> b >> c;

    int t = b%3;
    if(t+c >=3 || t==0)
    {
        double x = (1.0*(b+c))/3;
        int y = ceil(x);
        return a+y;
    } 
    else
        return -1;
    
}
int main()
{
    int test;
        cin >> test;
    while(test--)
    {
        cout << introvert() <<"\n";
    }
    return 0;
}