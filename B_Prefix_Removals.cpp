#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        string s;
        cin >> s;
        ll n = s.size();
        vector<ll> arr(200);
       
        for(int i=0; i<n; i++)
        {
            arr[s[i]]++;
        }
        for(int i=0; i<n; i++)
        {
            arr[s[i]]--;
            if(arr[s[i]] == 0)
            {
                for(int j=i; j<n; j++)
                {
                    cout << s[j];
                }
                break;
            }
        }
        cout <<"\n";
    }
    return 0;
}