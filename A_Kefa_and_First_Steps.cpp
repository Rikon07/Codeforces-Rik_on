#include<bits/stdc++.h>
using namespace std;
int task(int n)
{
    if(n == 1) return 1;
    vector<int>money(n);
    int cnt = 1, max = 0;
    for(int i=0; i<n; i++){
        cin >> money[i];
    }
    for(int i=1; i<n; i++){
        if(money[i] >= money[i-1]){
            cnt++;
        }
        else{
            cnt = 1;
        }
        if(cnt > max){
            max = cnt;
        }
    }
    return max;
}
int main()
{
    int n;
    cin >> n;
    cout << task(n) << "\n";
    return 0;
}