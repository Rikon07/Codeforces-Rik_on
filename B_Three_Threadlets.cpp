#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
string solve(ll a, ll b, ll c)
{
    int flag = 0;
    for(int i=0; i<=3; i++)
    {
        for(int j=0; j<=3; j++)
        {
            for(int k=0; k<=3; k++)
            {
                if(i+j+k > 3){
                    continue;
                }
                if(a%(i+1)==0 && b%(j+1)==0 && c%(k+1)==0){
                    if(a/(i+1) == b/(j+1) && a/(i+1) == c/(k+1)){
                        flag = 1;
                        break;
                    }
                }
            }
        }
    }
    if(flag) return "YES";
    else return "NO";
}
int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        ll a, b, c;
        cin >> a >> b >> c;
        cout << solve(a, b, c) <<"\n";
    }
    return 0;
}