#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int candies[n], mihai=0, bianca=0;
        for(int i=0; i<n; i++)
        {
            cin >> candies[i];
            if(candies[i] %2 == 0)
            {
                mihai += candies[i];
            }
            else
            {
                bianca += candies[i];
            }
        }
        (mihai>bianca) ? cout << "YES\n" : cout << "NO\n";
    }
    return 0;
}
