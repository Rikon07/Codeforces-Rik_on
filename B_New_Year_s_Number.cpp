#include<bits/stdc++.h>
using namespace std;
string New_year(int n)
{
    if(n % 2020 == 0){
        return "YES";
    }
    else if(n < 2020){
        return "NO";
    }
    else{
        if(n%2020 > n/2020){
            return "NO";
        }
        else{
            return "YES";
        }
    }
}
int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        int N;
        cin >> N;
        cout << New_year(N) <<"\n";
    }
    return 0;
}