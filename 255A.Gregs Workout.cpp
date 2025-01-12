#include<bits/stdc++.h>
using namespace std;

void exercises(int N)
{
    int exe[N], cnt=1, chest=0, bicep=0, back=0;
    for(int i=0; i<N; i++)
    {
        cin >> exe[i];
        if(cnt == 1)
        {
            chest += exe[i];
            cnt++;
        }
        else if(cnt == 2)
        {
            bicep += exe[i];
            cnt++;
        }
        else if(cnt == 3)
        {
            back += exe[i];
            cnt = 1;
        }
    }
    if(chest > bicep && chest > back)
        cout << "chest\n";
    else if(bicep > chest && bicep > back)
        cout << "biceps\n";
    else if(back > chest && back > bicep)
        cout << "back\n";
}

int main()
{
    int n;
    cin >> n;
    exercises(n);

    return 0;
}
