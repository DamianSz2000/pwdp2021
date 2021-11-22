#include<iostream>
#include<windows.h>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(){
    system("CLS");
    srand(time(NULL));
    int pos[20][2];
    int x, y, decyzja, xguess, yguess;
    for(int i = 0; i < 20; i++){
        x = rand()%10;
        y = rand()%10;
        pos[i][0] = x;
        pos[i][1] = y;
    }
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            cout<<"#";
        }
        cout<<i+1;
        cout<<endl;
    }
    while(1==1){
        cout<<"Podaj wiersz i kolumne gdzie jest statek: "<<endl;
        cin>>yguess;
        cin>>xguess;
        int counter = 0;
        while(counter < 20){
            if(pos[counter][0] == xguess && pos[counter][1] == yguess){
                cout<<"\x1b[14;0HTrafiony! "<<"x: "<<xguess<<" "<<"y: "<<yguess<<endl;
                counter == 21;
                cout<<"\x1b["<<yguess<<";"<<xguess<<"Hx";
                cout<<"\x1b[11;0H";
            }
            counter++;
            cout<<"\x1b[11;0H";
            cout<<"\x1b[0J";
        }
    }
    return 0;
}
