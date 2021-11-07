#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <fstream>
using namespace std;




int main(){
    ofstream result("result.txt");
    srand(time(NULL));
    float average = 0;
    float sum = 0;
    float random = 0;
    for(int i = 10; i <= 5000; i++){
        for(int j = 0; j < i; j++){
            random = (float) rand()/RAND_MAX;
            sum += random;
        }
        average = sum/i;
        sum = 0;
        result<<i<<"\t"<<average<<endl;
    }
    result.close();
    return 0;
}
