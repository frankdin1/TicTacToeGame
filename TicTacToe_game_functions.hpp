#include <iostream>
using namespace std;

int playGameX(int x, int i, int j,char gameBoard[3][3],int gamePos[9]);
int playGameY(int x, int i, int j,char gameBoard[3][3],int gamePos[9]);
int gameWinX(char gameBoard[3][3]);
int gameWinY(char gameBoard[3][3]);

int playGameX(int x, int i, int j,char gameBoard[3][3],int gamePos[9]){
    cout<<"Player x, select a grid position (0 - 8):";
    cin>>x;
    gamePos[x] = x;
    if (x >= 0 && x <= 8){
        int row = x/3, column = x%3;//any integer less than 3: when divided by 3 will be 0; when modulo by 3 will be that integer
            gameBoard[row][column] = 'x';
            for (i = 0; i < 3; i++){
                for (j = 0; j < 3; j++){
                    cout<<gameBoard[i][j]<<' ';
            }
            cout<<endl;
        }
    }
}

int playGameY(int y, int i, int j,char gameBoard[3][3],int gamePos[9]){
   cout<<"Player o, select a grid position (0 - 8):";
   cin>>y;
   if (y >= 0 && y <= 8){
        int row = y/3, column = y%3;
       gameBoard[row][column] = 'o';
       for (i = 0; i < 3; i++){
           for (j = 0; j < 3; j++){
               cout<<gameBoard[i][j]<<' ';
           }
           cout<<endl;
       }
   }
}

int gameWinX(char gameBoard[3][3])
{
    int countd = 0;
    int countd2 = 0;
    for(int i=0;i<3; i++)
    {
        int countx = 0;
        int county = 0;

        if (gameBoard[i][i] == 'x')//checking for 3 Xs along the diagonal from left to right
            countd++;
        if(gameBoard[i][2-i] == 'x')//checking for 3 Xs along the diagonal from right to left
            countd2++;
        for(int j=0;j<3; j++)//checking for 3 Xs along the same row
        {
            if(gameBoard[i][j]=='x')
            {
                countx++;
            }
            if(gameBoard[j][i]=='x')//checking for 3 Xs along the same column
            {
                county++;
            }
        }
        if(countx == 3 || countd == 3 || countd2 == 3 || county == 3)
            return 1;
    }
     return 0;
}

int gameWinY(char gameBoard[3][3])
{
    int countd = 0;
    int countd2 = 0;
    for(int i=0;i<3; i++)
    {
        int countx = 0;
        int county = 0;

        if (gameBoard[i][i] == 'o')
            countd++;
        if(gameBoard[i][2-i] == 'o')
            countd2++;
        for(int j=0;j<3; j++)
        {
            if(gameBoard[i][j]=='o')
            {
                countx++;
            }
            if(gameBoard[j][i]=='o')
            {
                county++;
            }
        }
        if(countx == 3 || countd == 3 || countd2 == 3 || county == 3)
            return 1;
    }
     return 0;
}
