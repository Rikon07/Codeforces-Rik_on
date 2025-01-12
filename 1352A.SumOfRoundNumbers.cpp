#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, i;
    cin >> t;
    while(t--)
    {
        cin >> n;
        vector<int>round;
        int rem;
        if(n%10 != 0)
        {
            round.push_back(n%10);
        }
        n -= (n%10);
        if(n%100 != 0)
        {
            round.push_back(n%100);
        }
        n -= (n%100);
        if(n%1000 != 0)
        {
            round.push_back(n%1000);
        }
        n -= (n%1000);
        if(n%10000 != 0)
        {
            round.push_back(n%10000);
        }
        n -= (n%10000);
        if(n == 10000)
        {
            round.push_back(n);
        }
        cout << round.size() << "\n";
        for(i=0; i<round.size(); i++)
        {
            cout << round[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

