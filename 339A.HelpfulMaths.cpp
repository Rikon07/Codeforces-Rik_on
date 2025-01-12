#include<bits/stdc++.h>
using namespace std;
int main()
{
    string math;
    cin >> math;
    int i, j;
    for(i=0; i<math.size(); i+=2)
    {
        for(j=0; j<math.size()-i-1; j+=2)
        {
            if(math[j] > math[j+2])
            {
                int temp = math[j];
                math[j] = math[j+2];
                math[j+2] = temp;
            }
        }
    }
    cout << math << endl;
    return 0;
}
