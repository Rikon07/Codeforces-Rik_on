#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back

bool is_prime(int num)
{
	for(int i=2; i*i<=num; i++)
    {
		if(num%i==0)return false;
	}
 
	return true;
 
}
int next_prime(int x)
{
	for(int num=x; ;num++)
    {
		if(is_prime(num))
			return num;
	}
}
int solve(const int d)
{
   int p = next_prime(d+1);
   int q = next_prime(p + d);

   return p*q;
}
int main()
{
    int tc;
        cin >> tc;
    while(tc--)
    {
        int d;
        cin >> d;

        cout << solve(d) <<'\n';
    }
    return 0;
}