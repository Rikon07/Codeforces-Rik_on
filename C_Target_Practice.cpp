#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string x;
        int i, j, point=0;
        for(i=0; i<10; i++)
        {
            cin >> x;
            for(j=0; j<10; j++)
            {
                if(x[j] == 'X')
                {
                    if(i==0 || i==9){
                        point += 1;
                    }
                    else if(i==1 || i==8){
                        if(j==0 || j==9){
                            point += 1;
                        }
                        else{
                            point += 2;
                        }
                    }
                    else if(i==2 || i==7){
                        if(j==0 || j==9){
                            point += 1;
                        }
                        else if(j==1 || j==8){
                            point += 2;
                        }
                        else{
                            point += 3;
                        }
                    }
                    else if(i==3 || i==6){
                        if(j==0 || j==9){
                            point += 1;
                        }
                        else if(j==1 || j==8){
                            point += 2;
                        }
                        else if(j==2 || j==7){
                            point += 3;
                        }
                        else{
                            point += 4;
                        }
                    }
                    else if(i==4 || i==5){
                        if(j==0 || j==9){
                            point += 1;
                        }
                        else if(j==1 || j==8){
                            point += 2;
                        }
                        else if(j==2 || j==7){
                            point += 3;
                        }
                        else if(j==3 || j==6){
                            point += 4;
                        }
                        else{
                            point += 5;
                        }
                    }
                }
            }
        }
        cout << point << "\n";
    }
    return 0;
}
