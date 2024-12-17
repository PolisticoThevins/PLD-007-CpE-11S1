#include <iostream>
using namespace std;
char choice;
double dollarsToPesos(double dollars, double rate){
    return dollars * rate;
}

double pesosToDollars(double pesos, double rate){
    return pesos / rate;
}

int main(){
    int AMOUNT;
    double RATE;

    cout << "Enter exchange rate, 1 Dollar = how much PHP?: ";
    cin >> RATE;
    cout << "Convert Dollars to PHP or PHP to Dollars? (P / D) : ";
    cin >> choice;

    if (choice == 'D' || choice == 'd'){
        cout << "Pls enter the amount in Dollars: ";
        cin >> AMOUNT;
        cout << "PHP: " << dollarsToPesos(AMOUNT, RATE) << endl;
    }
    else if (choice == 'P' || choice == 'p'){
        cout << "Pls enter the amount in Pesos: ";
        cin >> AMOUNT;
        cout << "USD: " << pesosToDollars(AMOUNT, RATE) <<endl;
    }
    return 0;
}