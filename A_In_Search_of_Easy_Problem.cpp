#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, flag = 1;
    cin >> n;
    int people[n];
    for(i=0; i<n; i++)
    {
        cin >> people[i];
    }
    for(i=0; i<n; i++)
    {
        if(people[i] == 1){
            flag = 0;
        }
    }
    if(flag == 0)
        cout << "HARD\n";
    else
        cout << "EASY\n";
    return 0;
}
