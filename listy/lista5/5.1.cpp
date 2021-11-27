#include<iostream>
#include<windows.h>
#include<cstdlib>
#include<ctime>
using namespace std;

void computersetboard(int computergameboard[10][10]){
    srand(time(NULL));
    int x, y;
    for(int i = 0; i < 10; i++){
        x = rand() % 10;
        y = rand() % 10;
        if(computergameboard[x][y] == 0){
            computergameboard[x][y] = 1;
        }
        else{
            while(computergameboard[x][y] == 1){
                x = rand() % 10;
                y = rand() % 10;
            }
        computergameboard[x][y] = 1;
        }
    }
}

bool computermove(int playergameboard[10][10]){
    int xguess, yguess;
    bool hit = 0;
    xguess = rand() % 10;
    yguess = rand() % 10;
    Sleep(2000);
    while(playergameboard[xguess][yguess] == 3){
        xguess = rand() % 10;
        yguess = rand() % 10;
    }
    if(playergameboard[xguess][yguess] == 1){
        cout<<"Komputer trafil! x: "<<xguess<<" y:"<<yguess<<endl;
        playergameboard[xguess][yguess] = 2;
        hit = 1;
        Sleep(2000);
    }
    else{
        cout<<"Pudlo! Twoja tura."<<endl;
        playergameboard[xguess][yguess] = 3;
        Sleep(2000);
    }
    return hit;
}

void printboard(int playergameboard[10][10], int computergameboard[10][10]){
    system("CLS");
    cout<<"Twoja plansza"<<endl;
    cout<<"0 1 2 3 4 5 6 7 8 9"<<endl;
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            if(playergameboard[j][i] == 0){
                cout<<"\x1B[48;5;220m[]\x1B[0m";
            }
            else if(playergameboard[j][i] == 1){
                cout<<"\x1B[48;5;118m[]\x1B[0m";
            }
            else if(playergameboard[j][i] == 2){
                cout<<"\x1B[48;5;196m()\x1B[0m";
            }
            else if(playergameboard[j][i] == 3){
                cout<<"\x1B[48;5;8m[]\x1B[0m";
            }
        }
        cout<<i;
        cout<<endl;
    }
    cout<<endl;
    cout<<"Plansza komputera"<<endl;
    cout<<"0 1 2 3 4 5 6 7 8 9"<<endl;
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            if(computergameboard[j][i] == 0){
                cout<<"\x1B[48;5;220m[]\x1B[0m";
            }
            else if(computergameboard[j][i] == 1){
                cout<<"\x1B[48;5;220m[]\x1B[0m";
            }
            else if(computergameboard[j][i] == 2){
                cout<<"\x1B[48;5;196m()\x1B[0m";
            }
            else if(computergameboard[j][i] == 3){
                cout<<"\x1B[48;5;8m[]\x1B[0m";
            }
        }
        cout<<i;
        cout<<endl;
    }
}

int main(){
    int again = 1;
    while(again == 1){
        //Variables
        int playergameboard[10][10];
        int computergameboard[10][10];
        int free = 0;
        int taken = 1;
        int destroyed = 2;
        int checked = 3;
        int ships = 0;
        int playerpoints = 0;
        int computerpoints = 0;
        int points = 10;
        int x, y, xguess, yguess;
        bool chit = 0;
        bool game = 1;
        //Make gameboards ready to play
        for(int i = 0; i < 10; i++){
            for(int j = 0; j < 10; j++){
                playergameboard[j][i] = free;
            }
        }
        for(int i = 0; i < 10; i++){
            for(int j = 0; j < 10; j++){
                computergameboard[j][i] = free;
            }
        }
        //Let player setup his field
        printboard(playergameboard, computergameboard);
        cout<<"Masz 10 punktow do wydania na ustawienie statkow!"<<endl;
        cout<<"Statek ustawiasz podajac najpierw wspolrzedna x a potem y"<<endl;
        while(ships < 10){
            cout<<"Pozostalo ci "<<points<<" statkow do rozstawienia"<<endl;
            cout<<"Podaj x: "<<endl;
            cin>>x;
            cout<<"Podaj y: "<<endl;
            cin>>y;
            while(playergameboard[x][y] == 1){
                cout<<"To pole jest zajete! Wybierz inne"<<endl;
                cout<<"Podaj x: "<<endl;
                cin>>x;
                cout<<"Podaj y: "<<endl;
                cin>>y;
            }
            ships++;
            points--;
            playergameboard[x][y] = taken;
            printboard(playergameboard, computergameboard);
        }
        computersetboard(computergameboard);
        cout<<"Komputer rozstawil swoje statki. Powodzenia!"<<endl;
        Sleep(2000);
        //Game start
        while(game == 1){
            printboard(playergameboard, computergameboard);
            cout<<endl;
            cout<<"\x1B[48;5;220m[]\x1B[0m - pole gry, \x1B[48;5;118m[]\x1B[0m - zajete przez statek, \x1B[48;5;196m()\x1B[0m - zniszczony statek, \x1B[48;5;8m[]\x1B[0m - pole sprawdzone";
            cout<<endl;
            cout<<"Wybierz pole w ktorym moze ukrywac sie statek przeciwnika: "<<endl;
            cout<<"Podaj x: "<<endl;
            cin>>xguess;
            cout<<"Podaj y: "<<endl;
            cin>>yguess;
            if(computergameboard[xguess][yguess] == taken){
                computergameboard[xguess][yguess] = destroyed;
                cout<<"Trafiony! x: "<<xguess<<" y:"<<yguess<<endl;
                cout<<"Tura przeciwnika."<<endl;
                playerpoints++;
                chit = computermove(playergameboard);
            }
            else{
                cout<<"Pudlo! Tura przeciwnika."<<endl;
                computergameboard[xguess][yguess] = 3;
                chit = computermove(playergameboard);
            }
            if(chit == 1){
                computerpoints++;
                chit = 0;
            }
            if(playerpoints == 10){
                game = 0;
                cout<<"Wygrales!"<<endl;
                Sleep(3000);
            }
            else if(computerpoints == 10){
                game = 0;
                cout<<"Wygral komputer :("<<endl;
                Sleep(3000);
            }
        }
        system("CLS");
        cout<<"Chcesz zagrac jeszcze raz? 0/1"<<endl;
        cin>>again;
    }
    return 0;
}
