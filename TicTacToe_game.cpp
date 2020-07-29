#include <iostream>
#include <cstdlib>
#include "TicTacToe_game_functions.hpp"


int main (){

    int i,j;
    int x,y;
    char gameBoard[3][3] = {{'*','*','*'},{'*','*','*'},{'*','*','*'}};
    int gamePos[9] = {9,9,9,9,9,9,9,9,9};
    string user1,user2;//use string instead of char for multiple user entries

    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            cout<<gameBoard[i][j]<<' ';
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<endl;
    cout<<"Enter name:";
    cin>>user1;
    cout<<"You are player x"<<endl;
    cout<<"Enter name:";
    cin>>user2;
    cout<<"You are player o";
    cout<<endl;

    int count = 0;
    while(1){
    //first player will play
    playGameX(x,i,j,gameBoard,gamePos);
        count++;
    //If the first player wins, output his name as winner and break the loop
    if(gameWinX(gameBoard)== 1 ){
        cout<<"\n X wins\n";
        break;
    }
    if(count == 5){
        cout<<"It is a draw!"<<endl;//if player 1 plays for up to 5 turns without winning it means it's a draw
        break;
    }
    // now the second player will play
    playGameY(y,i,j,gameBoard,gamePos);
    // if second player wins, output his name and declare him the winner and break from loop.
    if(gameWinY(gameBoard)== 1){
        cout<<" Y wins\n";
        break;
    }
}
    cout<<endl;
    system("pause");
    return 0;
}
