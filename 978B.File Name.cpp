#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, x, to_remove=0;
    string file;

    cin >> n >> file;

    for(int i=0; i<n; i++)
    {
        if(file[i] == 'x'){
            x++;
        }
        else if(file[i] != 'x'){
            if(x >= 3){
                to_remove += x - 2;
            }
            x = 0;
        }
    }

    if(x>=3) cout << to_remove+(x-2) << "\n";
    else cout << to_remove << "\n";

    return 0;
}
