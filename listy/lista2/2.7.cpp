#include <iostream>
#include <cmath>
#include <fstream>

using namespace std;

int main(){
    ofstream wynik;
    int x;
    cout<<"Podaj x: ";
    cin>>x;
    wynik.open("wynik.dat");
    wynik<<x<<"\t"<<cos(x)<<"\t"<<pow(cos(x),2);
    wynik.close();
    cout<<"Wyniki zapisane do pliku wynik.dat";
    return 0;
}




