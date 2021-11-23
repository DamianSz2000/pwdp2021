#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int guess(int x, int y){
    srand(time(NULL));
    bool win = 0;
    int guessnumber = 0;
    int tries = 0;
    int number = (rand() % (x-y)+1) + y;
    while(win == 0){
        cin>>guessnumber;
        if(guessnumber == number){
            win = 1;
            tries += 1;
            cout<<"Wygrales! Ilosc prob: "<<tries<<endl;
            return 0;
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
    int maxnumber = 0;
    int minnumber = 0;
    cout<<"Podaj minimalna liczbe do zgadniecia: "<<endl;
    cin>>minnumber;
    cout<<"Podaj maksymalna liczbe do zgadniecia: "<<endl;
    cin>>maxnumber;
    cout<<"Zgaduj liczbe od "<<minnumber"do "<<maxnumber<<endl;
    guess(maxnumber, minnumber);
    return 0;
}
