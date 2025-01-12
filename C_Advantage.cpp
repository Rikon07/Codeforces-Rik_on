#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        int n;
        cin >> n;
        vector<int> participant(n), difference;
        int topper = 0, topIndex;
        for(int strength=0; strength<n; strength++)
        {
            cin >> participant[strength];
            if(participant[strength] > topper)
            {
                topper = participant[strength];
                topIndex = strength;
            }
        }
        for(int i=0; i<n; i++)
        {
            if(i == topIndex)
            {
                int maxi = 0;
                for(int j=0; j<n; j++)
                {
                    if(i != j && participant[j] > maxi)
                        maxi = participant[j];
                }
                difference.pb(participant[i]-maxi);
                continue;
            }
            difference.pb(participant[i]-topper);
        }
        for(int diff: difference)
            cout << diff <<" ";

        cout << endl;
    }
    return 0;
}