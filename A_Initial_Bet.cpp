#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 5;
    vector<int> game(n);
    int sum = 0;
    for(int i=0; i<n; i++)
    {
        cin >> game[i];
        sum += game[i];
    }
    if(sum > 0 && sum % n == 0)
    {
        cout << sum/n << "\n";
    }
    else
    {
        cout <<"-1"<< "\n";
    }
    return 0;
}
