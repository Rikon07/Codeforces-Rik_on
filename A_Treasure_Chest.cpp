#include<bits/stdc++.h>
typedef long long int ll;
#define endl "\n";
using namespace std;

int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        int x, y, k;
        cin >> x >> y >> k;
        if(x >= y){
            cout << x << endl;
        }
        else if(y > x){
            int z = y - x;
            int time = x + k;
            if(z >= k){
                time += (z-k)*2;
                cout << time << endl;
            }
            else{
                cout << y << endl;
            }
        }
    }
    return 0;
}