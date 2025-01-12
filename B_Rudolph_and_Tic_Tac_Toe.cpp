#include<bits/stdc++.h>
using namespace std;
void TicTacToe()
{
    vector <string> game(3);
		for(int i=0; i<3; i++){
			cin >> game[i];
        }
		string winner = "DRAW";
		for(int i=0; i<3; i++){
			if(game[i][0] == game[i][1] && game[i][1] == game[i][2] && game[i][0] != '.')
				winner = game[i][0];
		}
		for(int i=0; i<3; i++){
			if(game[0][i] == game[1][i] && game[1][i] == game[2][i] && game[0][i] != '.')
				winner = game[0][i];
		}
		if(game[0][0] == game[1][1] && game[1][1] == game[2][2] && game[0][0] != '.'){
			winner = game[0][0];
        }
		if(game[0][2] == game[1][1] && game[1][1] == game[2][0] && game[0][2] != '.'){
			winner = game[0][2];
        }
		cout << winner <<"\n";
}
int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        TicTacToe();
    }
    return 0;
}