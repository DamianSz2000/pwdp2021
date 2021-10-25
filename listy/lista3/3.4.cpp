#include <iostream>
using namespace std;

int main(){
    int ponownie = 1;
    while(ponownie == 1){
        int dzialanie, a, b = 0;
        cout<<"Podaj dzialanie (0-dodawanie, 1-mnozenie): "<<endl;
        while(!(cin>>dzialanie) ){
            cout << "Podaj liczbe!" << endl;
            cin.clear();
            cin.ignore(INT_MAX,'\n');
        }
        cout<<"Podaj pierwsza liczbe: "<<endl;
        while(!(cin>>a) ){
            cout << "Podaj liczbe!" << endl;
            cin.clear();
            cin.ignore(INT_MAX,'\n');
        }
        cout<<"Podaj druga liczbe: "<<endl;
        while(!(cin>>b) ){
            cout << "Podaj liczbe!" << endl;
            cin.clear();
            cin.ignore(INT_MAX,'\n');
        }
        if(dzialanie == 0){
            cout<<"Wynik dodawania to: "<<a+b<<endl;
            cout<<"Chcesz sprobowac jeszcze raz? (1/0)"<<endl;
            while(!(cin>>ponownie) ){
            cout << "Podaj liczbe 0 dla nie i 1 dla tak" << endl;
            cin.clear();
            cin.ignore(INT_MAX,'\n');
        }
        }
        else if(dzialanie == 1){
            cout<<"Wynik mnozenia to: "<<a*b<<endl;
            cout<<"Chcesz sprobowac jeszcze raz? (1/0)"<<endl;
            while(!(cin>>ponownie) ){
            cout << "Podaj liczbe 0 dla nie i 1 dla tak" << endl;
            cin.clear();
            cin.ignore(INT_MAX,'\n');
        }
        }
    }
    return 0;
}
