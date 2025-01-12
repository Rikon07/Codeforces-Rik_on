#include<bits/stdc++.h>
using namespace std;

int interesting_number(int n)
{
    while(1)
    {
        int tmp = n, sum = 0;
        while(tmp)
        {
            sum += tmp % 10;
            tmp /= 10;
        }
        if(sum % 4 != 0) n++;
        else break;
    }
    return n;
}

int main()
{
    int a;
    cin >> a;
    cout << interesting_number(a) << "\n";
    return 0;
}
