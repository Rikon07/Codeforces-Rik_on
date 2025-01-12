#include<bits/stdc++.h>
using namespace std;
int solve(long int n)
{
    int cnt_two=0, cnt_three=0;
    while(n % 2 == 0){
        cnt_two++;
        n /= 2;
    }
    while(n % 3 == 0){
        cnt_three++;
        n /= 3;
    }
    if(n != 1 || cnt_two>cnt_three)
    return -1;
    else
    return (cnt_three-cnt_two)+cnt_three; 
}
int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        long int N;
        cin >> N;
        cout << solve(N) <<"\n";
    }
    return 0;
}