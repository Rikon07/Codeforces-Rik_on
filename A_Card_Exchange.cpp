#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
int cards(int n, int k)
{
    vector<int> ar(n);
    map<int, int> mp;
    for(int i=0; i<n; i++)
    {
        cin >> ar[i];
        mp[ar[i]]++;
    }
    vector<int> freq;
    for(auto it: mp)
    {
        freq.pb(it.second);
    }
    sort(freq.begin(), freq.end());
    int move = 0, len = freq.size(), i;
    for(i=len-1; i>=0; i--)
    {
        if(freq[i]>=k)
        {
            freq[i] = 0;
            if(i-1>=0) freq[i-1] += k-1;
            else if(i == 0) move = k-1;
        }
        else break;
    }
    while(i>=0)
    {
        move += freq[i];
        i--;
    }
    return move;
}
int main()
{
    int tc;
        cin >> tc;
    while(tc--)
    {
        int n, k;
        cin >> n >> k;

        cout << cards(n, k) <<'\n';
    }
    return 0;
}