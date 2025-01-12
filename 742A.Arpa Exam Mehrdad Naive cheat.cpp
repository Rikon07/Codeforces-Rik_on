#include<bits/stdc++.h>
using namespace std;

long long int power(int n)
{
    long long int res = 1, base = 1378;
    while(n)
    {
        if(n % 2 == 0){
            base = (base*base) % 10;
            n /= 2;
        }
        else{
            res = (res*base) % 10;
            n--;
        }
    }
    return res;
}

int main()
{
    int N;
    cin >> N;
    cout << power(N) << "\n";

    return 0;
}
