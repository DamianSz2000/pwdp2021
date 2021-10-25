#include <iostream>
using namespace std;

int main(){
    int n = 0;
    cout<<"Podaj z jakiej liczby ma byc silnia: "<<endl;
    cin>>n;
    int silnia = 1;
    for(int i = 1; i<n+1; i++){
        silnia = silnia*i;

    }
    cout<<silnia;
    //ostatnia wartosc jaka jest poprawnym wynikiem to 12!, dzieje sie tak dlatego ze wynik dzialania 13! i wyzej nie miesci sie w zakresie typu int

}
