#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void print(int n)
{
    if(n == 1)
        cout << "##";
    else
        cout << "..";
}
int main()
{
    int tc;
    cin >> tc;
    while(tc--)
    {
        int n;
        cin >> n;
        for(int i=0; i<2*n; i++)
        {
            for(int j=0; j<n; j++)
            {
                if((i/2+j) % 2 == 0)
                {
                    print(1);
                }
                else
                    print(0);
            }
            cout << endl;
        }
    }
    return 0;
}