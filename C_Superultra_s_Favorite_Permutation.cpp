#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
bool isPrime(int num)
{
    if (num <= 1) return false;
    if (num <= 3) return true;
    if (num % 2 == 0 || num % 3 == 0) return false;
    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) return false; 
    }
    return true;
}
int countDivisors(int num)
{
    if (num <= 0) return 0;
    int count = 0;
    for (int i = 1; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            count++;
            if (i != num / i) count++;
        }
    }
    return count;
}

void solve(int n)
{
    if(n < 5)
    {
        cout << -1 <<'\n';
        return;
    }

    vector<int> evens, odds;
    for (int i = 1; i <= n; i++)
    {
        if(i % 2 == 0) evens.push_back(i);
        else odds.push_back(i);
    }

    for(int i=0; i<odds.size(); i++)
    {
        if(!isPrime(odds[i] + evens.back()))
        {
            swap(odds[i], odds[0]);
            break;
        }
    }

    for (int numE : evens) cout << numE << " ";
    for (int numO : odds) cout << numO << " ";

    cout << "\n";
}
int main()
{
    int tc;
        cin >> tc;
    while(tc--)
    {
        int n;
            cin >> n;
        
        solve(n);
    }
    return 0;
}