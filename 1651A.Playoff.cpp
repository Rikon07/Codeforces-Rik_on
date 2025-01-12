#include<bits/stdc++.h>
using namespace std;

int power(int N)
{
    return (1<<N)-1;      // 1 << N means power function, I just got to know that
}

int main()
{
    int t, n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        int winner = power(n);
        cout << winner << "\n";
    }
    return 0;
}
