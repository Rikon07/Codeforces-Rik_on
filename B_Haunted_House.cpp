#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(ll n)
{
    string str;
    cin >> str;
    reverse(str.begin(), str.end());
    vector<ll>zero;
    int z=0;
    for(int i=0; i<n; i++)
    {
        if(str[i] == '0'){
            z++;
            zero.push_back(i-zero.size());
        }
    }
    vector<ll>num(n);
    for(int i=0; i<zero.size(); i++)
    {
        if(i==0){
            num[i] = zero[i];
        }
        else{
            num[i] = zero[i]+num[i-1];
        }
    }
    int x = 1;
    for(int i=0; i<n; i++)
    {
        if(i < z){
            cout << num[i] <<" ";
        }
        else{
            cout << -1 <<" ";
        }
    }
    cout << "\n";
}
int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        ll n;
        cin >> n;
        solve(n);
    }
    return 0;
}