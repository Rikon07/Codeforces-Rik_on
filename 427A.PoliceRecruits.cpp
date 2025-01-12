#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, recruit = 0, untreated =0 ;
    cin >> n;
    int events[n];
    for(i=0; i<n; i++)
    {
        cin >> events[i];
    }
    for(i=0; i<n; i++)
    {
        if(events[i] > 0){
            recruit += events[i];
        }
        else if(events[i] < 0){
            if(recruit > 0){
                recruit--;
            }
            else{
                untreated++;
            }
        }
    }

    cout << untreated << "\n";
    return 0;
}
