#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
bool PrimeCheck(int n)
{
    if(n==2) return true;
    if(n%2==0 || n<2) return false;
    for(int i=3; i*i<=n; i+=2)
    {
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main()
{
    int n;
    cin >> n;
    vector<bool>prime(n+1, 0);
    prime[2] = 1;
    for(int i=3; i<=n; i+=2)
    {
        if(PrimeCheck(i)){
            prime[i] = 1;
        }
    }
    int cnt = 0, AlmostPrime = 0;
    for(int i=6; i<=n; i++)
    {
        cnt = 0;
        for(int j=2; j<=i/2; j++)
        {
            if(i%j == 0 && prime[j])
            {
                cnt++;
            }
            if(cnt > 2)
            break;
        }
        if(cnt == 2)
        AlmostPrime++;
    }   
    cout << AlmostPrime <<"\n";
    return 0;
}