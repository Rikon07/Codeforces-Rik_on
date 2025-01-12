#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void SmallString(int n)
{
    vector<char> ar(27);
    char alphabet = 'a';
    for(int i=1; i<=26; i++)
    {
        ar[i] = alphabet++;
    }
    if(n <= 28)
    {
        int tmp = n-2;
        cout << "a" << "a" << ar[tmp] <<"\n";
    }
    else if(n <= 53)
    {
        n -= 26;
        int tmp = n-1;
        cout << "a" << ar[tmp] <<"z"<<"\n";
    }
    else
    {
        n -= 52;
        int tmp = n;
        cout << ar[tmp] << "z" <<"z"<<"\n";
    }
}
int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        int n;
        cin >> n;
        SmallString(n);
    }
    return 0;
}