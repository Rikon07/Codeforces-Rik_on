#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test, i;
    cin >> test;
    string a;
    while(test--)
    {
        cin >> a;
        for(i=0; i<a.size(); i++)
        {
            if(i%2==0)
            {
                cout << a[i];
            }
            if(i==a.size()-1)
            {
                cout << a[i];
            }
        }
        cout << "\n";
    }
    return 0;
}
