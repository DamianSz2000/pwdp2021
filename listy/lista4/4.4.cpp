#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int guess(int x){
    srand(time(NULL));
    bool win = 0;
    bool again = 0;
    int guessnumber = 0;
    int tries = 0;
    int number = rand() % x;
    while(win == 0){
        cin>>guessnumber;
        if(guessnumber == number){
            win = 1;
            tries += 1;
            cout<<"Wygrales! Ilosc prob: "<<tries<<endl;
            cout<<"Jezeli chcesz zagrac ponownie wpisz 1, jezeli nie wpisz 0: "<<endl;
            cin>>again;
            return again;
        }
        else{
            tries += 1;
            if(guessnumber > number){
                cout<<"Liczba jest mniejsza!"<<endl;
            }
            else{
                cout<<"Liczba jest wieksza!"<<endl;
            }
        }
    }

}
int main(){
    bool again = 1;
    while(again == 1){
        int maxnumber = 0;
        cout<<"########################################"<<endl;
        cout<<"#Podaj maksymalna liczbe do zgadniecia:#"<<endl;
        cout<<"########################################"<<endl;
        cin>>maxnumber;
        cout<<"Zgaduj liczbe od 0 do "<<maxnumber<<endl;
        again = guess(maxnumber);
    }
    return 0;
}
