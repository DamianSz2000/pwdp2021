#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <fstream>
#include <cmath>
#include <math.h>
using namespace std;

int factorial(int n){
   if (n <= 1)
        return 1;
   else
       return n*factorial(n-1);
}


int main(){
    int n = 0;
    ofstream result("resultmyseq.txt");
    cout<<"Podaj ilosc wyrazow ciagu: "<<endl;
    cin>>n;
    for(int i = 0; i < n; i++){
        result<<i<<"\t"<<factorial(i)<<endl;
    }
    return 0;
}
