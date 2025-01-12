#include<bits/stdc++.h>
using namespace std;
#define pb push_back
typedef long long int ll;
int turtleMath(int n)
{
    vector<int> ar;
    ll sum = 0;
    for(int i=0; i<n; i++)
    {
        int element;
            cin >> element;
        sum += element;
        ar.pb(element);
    }
    if(sum % 3 == 0) return 0;
    if(sum % 3 == 2) return 1;
    //if(sum % 3 == 1) return 2;
    for(int i=0; i<n; i++)
    {
        if((sum-ar[i]) % 3 == 0)
        {
            return 1;
            break;
        }
    }
    if(sum % 3 == 1) return 2;
}
int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        int n;
        cin >> n;

        cout << turtleMath(n) <<"\n";
    }
    return 0;
}