#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
string OddSum(int n, int k)
{
    if(k%2 == n%2 && pow(k,2) <= n) return "YES";
    else return "NO";
}
int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        int N, K;
        cin >> N >> K;
        cout << OddSum(N, K) <<"\n";
    }
    return 0;
}