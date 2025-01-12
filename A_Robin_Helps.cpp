#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,k;
        cin >> n >> k;
        int a[n];
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
        }

        int have=0,out=0;
        for(int i=0; i<n; i++)
        {
            if(a[i] >= k)
                have=a[i];
            else if(a[i] == 0 && have > 0)
            {
                have--;
                out++;
            }
        }

        cout << out << endl;
    }


}