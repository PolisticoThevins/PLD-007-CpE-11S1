#include <iostream>
using namespace std;

double  FARENHEIT_TO_CELCIUS(double f){
    return (f - 32) * 5 / 9;
}

double CELCIUS_TO_FARENHEIT(double c){
    return (c * 9 / 5) + 32;
}

int main(){

    char choice;

    cout << "Convert (Fahrenheit to Celsius or (Celsius to Fahrenheit)? : ";
    cin >> choice;

    if (choice == 'F' || choice == 'f'){
        cout << "Enter temperature in Fahrenheit: ";
        double TEMPERATURE;
        cin >> TEMPERATURE;
        cout << "Temperature in Celsius: " << FARENHEIT_TO_CELCIUS(TEMPERATURE) << " << end;";
    }
    else if (choice == 'C' || choice == 'c'){
        cout << "Enter temperature in Celsius: ";
        double TEMPERATURE;
        cin >> TEMPERATURE;
        cout << "Temperature in Fahrenheit: " << CELCIUS_TO_FARENHEIT(TEMPERATURE) << " << Fahrenheit: ";
    }
    else{
        cout << "Invalid Input!!! " << endl;
    }

    return 0;
}