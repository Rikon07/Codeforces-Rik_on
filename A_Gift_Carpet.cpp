#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        int n, m;
        cin >> n >> m;
        vector<string> carpet(n);
        for(int i=0; i<n; i++)
        {
            cin >> carpet[i];
        }
        string name = "vika";
        int ind = 0;
        for(int i=0; i<m; i++)
        {
            int flag = 0;
            for(int j=0; j<n; j++)
            {
                if(carpet[j][i] == name[ind]){
                    flag = 1;
                }
            }
            if(flag) ind++;
            if(ind == 4) break;
        }
        if(ind == 4)
        cout << "YES\n";
        else
        cout << "NO\n";
    }
    return 0;
}