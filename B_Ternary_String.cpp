#include<bits/stdc++.h>
using namespace std;
int solve()
{
    string s;
    cin >> s;
    int cnt[4] = {};
    int len = s.size();
    int x = 0, ans = len+1;

    for(int i=0; i<s.size(); i++)
    {
        int dig = s[i] - '0';
        cnt[dig]++;

        while(cnt[s[x]-'0'] > 1){
            cnt[s[x]-'0']--;
            x++;
        }

        if(cnt[1] && cnt[2] && cnt[3])
        {
            ans = min(ans, i-x+1);
        }
    }
    if(ans == len+1){
        ans = 0;
    }
    return ans;
}
int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        cout << solve() << "\n";
    }
    return 0;
}