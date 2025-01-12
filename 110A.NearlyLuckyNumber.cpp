#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, tmp;
    cin >> n;
    tmp = n;
    int lucky_count=0, rem;
    while(tmp != 0)
    {
        rem = tmp % 10;
        tmp /= 10;
        if(rem == 4 || rem == 7)
            lucky_count++;
    }
    if(lucky_count == 4 || lucky_count == 7)
        cout << "YES\n";
    else
        cout << "NO\n";
    return 0;
}
