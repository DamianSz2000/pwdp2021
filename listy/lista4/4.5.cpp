#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <fstream>
using namespace std;

int fibonacci(int n){
    if(n == 0){
        return 0;
    }
    else if(n == 1){
        return 1;
    }
    return fibonacci(n-1) + fibonacci(n-2);
}

int main(){
    int n = 0;
    ofstream result("resultfib.txt");
    cout<<"Podaj ilosc wyrazow ciagu fibonnaciego: "<<endl;
    cin>>n;
    for(int i = 0; i < n; i++){
        result<<i<<"\t"<<fibonacci(i)<<endl;
    }
    return 0;
}
