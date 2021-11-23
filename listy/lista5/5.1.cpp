#include<iostream>
#include<windows.h>
#include<cstdlib>
#include<ctime>
using namespace std;

void printboard(int gameboard[10][10]){
    cout<<" 0 1 2 3 4 5 6 7 8 9"<<endl; //Print x coordinates
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            if(gameboard[j][i] == 1){
                cout<<"\x1B[48;5;209m()\x1B[0m";
            }
            else if(gameboard[j][i] == 2){
                cout<<"\x1B[48;5;45m()\x1B[0m";
            }
            else{
                cout<<"\x1B[48;5;198m[]\x1B[0m";
            }
        }
        cout<<i<<endl;
    }
}
int main(){
    system("CLS"); //Clearing console windows so colors work
    srand(time(NULL)); //Random seed
    int gameboard[10][10]; //Game board
    int x, y; //Coordinates of ship
    int length; //Length of ship
    int ships = 0; //Amount of ships
    const int taken = 1; //Spots taken by the ship
    const int destroyed = 2; //Spots destroyed
    while(ships <= 10){
        x = rand() % 10; //Random value between 0 and 9
        y = rand() % 10;
        length = rand() % 3 + 1; //Random value between 1 and 2
        if(gameboard[x][y] == taken){ //Make sure that ship cant be placed on taken spot
            continue; //Make the loop skip rest of it
        }
        if(length == 1){
            gameboard[x][y] = taken; //Set the x y spot to be taken
            ++ships; //Adding one ship
        }
        else if(length == 2){
            gameboard[x][y] = taken;
            if(gameboard[x-1][y] != taken){
                gameboard[x-1][y] = taken;
                ++ships; //Adding one ship
                ++ships; //Adding one ship
            }
            else if(gameboard[x+1][y] != taken){
                gameboard[x+1][y] = taken;
                ++ships; //Adding one ship
                ++ships; //Adding one ship
            }
            else if(gameboard[x][y-1] != taken){
                gameboard[x][y-1] = taken;
                ++ships; //Adding one ship
                ++ships; //Adding one ship
            }
            else if(gameboard[x][y+1] != taken){
                gameboard[x][y+1] = taken;
                ++ships; //Adding one ship
                ++ships; //Adding one ship
            }
            else{
                ++ships; //Adding one ship
                continue; //Skip the loop
            }
        }
    }
    printboard(gameboard);
    int guessed = 0;
    while(true){
        int xguess, yguess; //Guessing x and y coordinates
        cout<<"Zgadnij gdzie jest statek. Podaj x i y: "<<endl;
        cin>>xguess>>yguess; //Get xguess and yguess from user
        if(gameboard[xguess][yguess] == 1){ //Check if [x][y] is occupied
            cout<<"Trafiony! x: "<<xguess<<" y: "<<yguess<<endl;
            Sleep(2000);
            guessed++;
            if(guessed == 10){
                break;
            }
        }
        gameboard[xguess][yguess] = 2; //Make ship destroyed
        system("CLS");
        printboard(gameboard); //Print the gameboard again

    }
    system("CLS");
    cout<<"Wygrales zajebiscie!";
    return 0;
}
