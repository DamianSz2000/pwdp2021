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
    if(bmi < 16){
        return "wyglodzenie";
    }
    if(bmi >= 16 && bmi < 17){
        return "wychudzenie";
    }
    if(bmi >= 17 && bmi < 18.5){
        return "niedowaga";
    }
    if(bmi >= 18.5 && bmi < 25){
        return "pozadana masa ciala";
    }
    if(bmi >= 25 && bmi < 30){
        return "nadwaga";
    }
    if(bmi >= 30 && bmi < 35){
        return "otylosc 1 stopnia";
    }
    if(bmi >= 35 && bmi < 40){
        return "otylosc 2 stopnia";
    }
    if(bmi >= 16){
        return "otylosc 3 stopnia";
    }

}

int main(){
    cout<<BMIprint(BMI(readHeight(),readMass()));


    return 0;
}
