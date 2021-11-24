#include<iostream>
#include<windows.h>
#include<cstdlib>
#include<ctime>
using namespace std;

void printboard(int labirynth[40][40]){
    for(int i = 1; i < 5; i++){
        if(labirynth[1][i] == 3){continue;}
        else{labirynth[1][i] = 1;}
    }
    for(int i = 1; i < 8; i++){
        if(labirynth[i][4] == 3){continue;}
        else{labirynth[i][4] = 1;}
    }
    for(int i = 4; i < 8; i++){
        if(labirynth[8][i] == 3){continue;}
        else{labirynth[8][i] = 1;}
    }
    for(int i = 8; i < 40; i++){
        if(labirynth[i][8] == 3){continue;}
        else{labirynth[i][8] = 1;}
    }

    for(int i = 0; i < 40; i++){
        for(int j = 0; j < 40; j++){
            if(labirynth[j][i] == 2){
                cout<<"\x1B[48;5;196m[]\x1B[0m";
            }
            else if(labirynth[j][i] == 1){
                cout<<"\x1B[48;5;154m[]\x1B[0m";
            }
            else if(labirynth[j][i] == 3){
                cout<<"\x1B[48;5;45m[]\x1B[0m";
            }
            else if(labirynth[j][i] == 4){
                cout<<"\x1B[48;5;220m[]\x1B[0m";
            }
        }
        cout<<endl;
    }
}
int main(){
    srand(time(NULL));
    int labirynth[40][40];
    for(int i = 0; i < 40; i++){
        for(int j = 0; j < 40; j++){
            labirynth[j][i] = 2;
        }
    }
    system("CLS");
    labirynth[1][0] = 3;
    labirynth[39][35] = 4;
    int x = 1;
    int y = 0;
    while(true){
        printboard(labirynth);
        int ruch = 0;
        cout<<"Jak chcesz sie ruszyc: 0 - prawo, 1 - lewo, 2 - gora, 3 - dol"<<endl;
        cin>>ruch;
        if(ruch == 0){
            if(labirynth[x+1][y] == 1){
                labirynth[x][y] = 1;
                x+=1;
                labirynth[x][y] = 3;
            }
            else{
                system("CLS");
                continue;
            }
        }
        if(ruch == 1){
            if(labirynth[x-1][y] == 1){
                labirynth[x][y] = 1;
                x-=1;
                labirynth[x][y] = 3;
            }
            else{
                system("CLS");
                continue;
            }
        }
        if(ruch == 2){
            if(labirynth[x][y-1] == 1){
                labirynth[x][y] = 1;
                y-=1;
                labirynth[x][y] = 3;
            }
            else{
                system("CLS");
                continue;
            }
        }
        if(ruch == 3){
            if(labirynth[x][y+1] == 1){
                labirynth[x][y] = 1;
                y+=1;
                labirynth[x][y] = 3;
            }
            else{
                system("CLS");
                continue;
            }
        }
        system("CLS");
    }
    return 0;
}
