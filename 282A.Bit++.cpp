#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string line;

    int x = 0, i, j;
    for(i=0; i<n; i++)
    {
        cin >> line;
        for(j=0; j<line.size(); j++)
        {
            if(line[j] == '+')
            {
                x++;
                break;
            }
            else if(line[j] == '-')
            {
                x--;
                break;
            }
        }
    }
    cout << x << endl;
    return 0;
}
