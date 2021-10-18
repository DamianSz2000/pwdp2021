#include <iostream>

using namespace std;

int main(){
    for(int i = 0; i < 100; i++){
        cout<<"\x1b["<<i<<"m Jakis tekst \x1b[0m"<<endl;
    }
    return 0;
}


