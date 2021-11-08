#include <iostream>
#include <cmath>
using namespace std;

float readHeight(){
    float height;
    cout<<"Podaj swoj wzrost w metrach"<<endl;
    cin>>height;
    return height;
}
int readMass(){
    int weight;
    cout<<"Podaj swoja wage w kg"<<endl;
    cin>>weight;
    return weight;
}
float BMI(float height, int weight){
    float bmi = weight/(pow(height,2));
    return bmi;
}

string BMIprint(float bmi){
    if(bmi > 0){
        return "simea";
    }

}

int main(){;
    cout<<BMIprint(BMI(readHeight(),readMass()));


    return 0;
}
