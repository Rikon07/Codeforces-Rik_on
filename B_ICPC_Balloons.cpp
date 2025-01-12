#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        string s;
        cin >> s;
        sort(s.begin(), s.end());
        int balloons=2;
        for(int i=1; i<n; i++)
        {
            if(s[i] != s[i-1]){
                balloons += 2;
            }
            else{
                balloons++;
            }
        }
        cout << balloons << "\n";
    }
}
