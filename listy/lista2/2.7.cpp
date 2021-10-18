#include <iostream>
#include <cmath>
#include <fstream>

using namespace std;

int main(){
    ofstream wynik;
    wynik.open("wynik.dat");
    for(int x = 1; x<100; x++){
        wynik<<x<<"\t"<<cos(x)<<"\t"<<pow(cos(x),2)<<endl;
    }
    wynik.close();
    cout<<"Wyniki zapisane do pliku wynik.dat";
    return 0;
}




