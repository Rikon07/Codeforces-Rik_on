#include<bits/stdc++.h>
using namespace std;
void solve()
{
    string pin;
    cin >> pin;
    int time = 0;
    for(int i=0; i<pin.size(); i++)
    {
        pin[i] -= '0';
    }
    for(int i=0; i<pin.size(); i++)
    {
        if(i == 0){
            if(pin[i] == 0){
                time += 10;
            }
            else
            time += pin[i];
            
        }
        else if(pin[i] == pin[i-1]){
            time++;
        }
        else if(pin[i-1] == 0){
            time += 10-pin[i]+1;
        }
        else if(pin[i] == 0){
            time += 10-pin[i-1]+1;
        }
        else if(pin[i] > pin[i-1]){
            time += (pin[i]-pin[i-1])+1;
        }
        else{
            time += abs(pin[i]-pin[i-1])+1;
        }
    }
    cout << time <<"\n";
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    
    int test;
    cin >> test;
    while(test--)
    {
        solve();
    }
    return 0;
}