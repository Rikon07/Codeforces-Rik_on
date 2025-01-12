#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, taxi=0, cnt1=0, cnt2=0, cnt3=0;
    cin >> n;
    int s[n];
    for(i=0; i<n; i++)
    {
        cin >> s[i];
    }

    for(i=0; i<n; i++)
    {
        if(s[i]==4)
            taxi++;
        else if(s[i]==1)
            cnt1++;
        else if(s[i]==2)
            cnt2++;
        else if(s[i]==3)
            cnt3++;
    }

    if(cnt2 % 2 == 0)
    {
        taxi += cnt2/2;
        cnt2=0;
    }
    else if(cnt2 %2 != 0)
    {
        taxi += cnt2/2;
        cnt2 = 1;
    }
    if(cnt3 == cnt1)
    {
        taxi += cnt3+cnt2;
    }
    else if(cnt3 > cnt1)
    {
        taxi += cnt1+cnt2+(cnt3-cnt1);

    }
    else if(cnt3 < cnt1)
    {
        taxi += cnt3;
        cnt1 = cnt1-cnt3;
        if(cnt2!=0)
        {
            taxi++;
            if(cnt1 > 2)
            {
                cnt1 -= 2;
            }
            else if(cnt1 <= 2)
            {
                cnt1 = 0;
            }
        }
        if(cnt1 % 4 == 0)
        taxi += cnt1/4;
        else if(cnt1 %4 != 0)
            taxi += cnt1/4 + 1;

    }
    cout << taxi << endl;
    return 0;
}

