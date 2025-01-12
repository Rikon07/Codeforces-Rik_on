#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
 
#define MOD 1000000007
#define NO cout<< "NO\n"
#define MINUS cout<< "-1\n"
#define YES cout<< "YES\n"
#define pb push_back
#define debug cout<< "i'm working\n"
#define all vec.begin(), vec.end()
int main()
{
    int test;
    cin >> test;
    for(int t=1; t<=test; t++)
    {
        string x;
        int B=0,b=0;
        cin >> x;
 
        string ans = "";
        vector<char> vec;
 
        for(int i=x.size()-1; i>=0; i--){
            if(x[i]=='b'){
                ++b;
            }
            else if(x[i]=='B'){
                ++B;
            }
            else if(x[i]>='A' && x[i]<='Z' && B>=1){
                --B;
            }
            else if(x[i]>='a' && x[i]<='z' && b>=1){
                --b;
            }
            else{
                vec.pb(x[i]);
            }
        }
        reverse(vec.begin(), vec.end());
        for(auto k : vec){
            cout << k;
        }
        cout << "\n";
    }
    return 0;
}
