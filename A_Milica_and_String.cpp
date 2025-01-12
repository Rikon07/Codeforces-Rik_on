#include<bits/stdc++.h>
using namespace std;
void solve(int n, int k)
{
    string s;
    cin >> s;
    int b = 0;
    for(auto B: s)
    {
        if(B == 'B'){
            b++;
        }
    }
    
    if(b == k){
        cout << 0 <<"\n";
    }
    else if(b > k){
        int cnt = 0, ans;
        for(int i=0; i<n; i++)
        {
            if(s[i] == 'B'){
            cnt++;
            }
            if(cnt == b-k){
                ans = i+1;
            }
        }
        cout << 1 <<"\n"<< ans << " A" <<"\n";
        //cout << 1 <<"\n"<< cnt-k << " A" <<"\n";
    }
    else if(b < k){
        int cnt = 0, ans;
        for(int i=0; i<n; i++)
        {
            if(s[i] == 'A'){
                cnt++;
            }
            if(cnt == k-b){
                ans = i+1;
            }
        }
        cout << 1 <<"\n";
        cout << ans <<" "<<"B\n";
        //cout << 1 <<"\n"<< k-cnt << " B" <<"\n";
    }
}
int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        int n, k;
        cin >> n >> k;
        solve(n, k);
    }
    return 0;
}