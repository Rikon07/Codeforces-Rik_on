#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void evenDigit(int n, string s)
{
    int j=0;
    for(int i=0; i<n; i++)
    {
        cout << s[i];
        j++;
        if(j == 2)
        {
            if(i == n-1) continue;
            cout << "-";
            j = 0;
        }
    }
    cout <<"\n";
}
void oddDigit(int n, string s)
{
    if(n == 3)
    {
        cout << s << "\n";
        return;
    }
    cout << s[0] << s[1] << s[2] << "-";
    int j=0;
    for(int i=3; i<n; i++)
    {
        cout << s[i];
        j++;
        if(j == 2)
        {
            if(i == n-1) continue;
            cout << "-";
            j = 0;
        }
    }
    cout <<"\n";
}
int main()
{
    int n;
    cin >> n;
    string number;
    cin >> number;

    if(n%2 == 0)
    {
        evenDigit(n, number);
    }
    else
    {
        oddDigit(n, number);
    }
    return 0;
}