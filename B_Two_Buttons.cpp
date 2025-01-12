#include<bits/stdc++.h>
using namespace std;
int buttons(int n, int m)
{
    int clicks = 0, temp_m = m;
    if(n > m){
        return (n - m);
    }
    else if(n == m){
        return 0;
    }
    else
    {
        while(temp_m != n)
        {
            if(temp_m % 2 == 0)
            {
                temp_m /= 2;
                clicks++;
            }
            else
            {
                temp_m++;
                clicks++;
            }
            if(temp_m < n)
            {
                while(temp_m != n)
                {
                    temp_m++;
                    clicks++;
                }
            }
        }
        return clicks;
    }
}
int main()
{
    int N, M;
    cin >> N >> M;
    cout << buttons(N, M) << "\n";
    return 0;
}
