#include<bits/stdc++.h>
using namespace std;
void solve(int n)
{
    vector<int> arr(n); 
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    map<int, int> mp;
    for(auto it: arr){
        mp[it]++;
    }
    vector<int> vec;
    for(auto it: mp){
        if(it.second > 1){
            vec.push_back(it.first);
        }
    }
    if(vec.size() < 2) cout << -1 <<"\n";
    else
    {
        vector<int> b;
        bool first = false, sec = false;
        for(auto it: arr){
            if(it == vec[0]){
                if(first) b.push_back(2);
                else b.push_back(1);
                first = true;
            }
            else if(it == vec[1]){
                if(sec) b.push_back(3);
                else b.push_back(1);
                sec = true;
            }
            else b.push_back(1);
        }
        for(auto m: b){
            if(m>0) cout << m <<" ";
        }
        cout << "\n";
    }
}
int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        int n;
        cin >> n;
        solve(n);
    }
    return 0;
}