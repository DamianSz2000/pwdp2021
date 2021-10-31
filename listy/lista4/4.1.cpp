#include <iostream>
using namespace std;

void wypisz(){
    cout<<"Hello world!"<<endl;
}
float wypiszliczbe(){
    float liczba = 0;
    cout<<"Podaj liczbe do wypisania"<<endl;
    cin>>liczba;
    return liczba;
}

int suma(int a, int b){
    return a+b;
}

int iloczyn(int a, float b, float c){
    return static_cast<int>(a*b*c);
}
int iloczyntab(int t[],int r){
    int iloczyn = 1;
    for(int i = 0; i < r; i++){
        iloczyn *= t[i];
    }
    return iloczyn;
}

int main(){
    int tab[5] = {1, 2, 3, 4, 5};
    float a, b, c = 0;
    cout<<"a):"<<endl;
    wypisz();
    cout<<"b):"<<endl;
    cout<<wypiszliczbe()<<endl;
    cout<<"c):"<<endl;
    cout<<"Podaj dwie liczby do sumowania(po jednej, kazda zatwierdzaj enter)"<<endl;
    cin>>a;
    cin>>b;
    cout<<"Suma:"<<suma(a, b)<<endl;
    cout<<"d):"<<endl;
    cout<<"Podaj trzy liczby do iloczynu(po jednej, kazda zatwierdzaj enter)"<<endl;
    cin>>a;
    cin>>b;
    cin>>c;
    cout<<"Iloczyn: "<<iloczyn(a, b, c)<<endl;
    cout<<"e):"<<endl;
    cout<<"Iloczyn elementow tablicy: "<<iloczyntab(tab, 5);
    return 0;
}
