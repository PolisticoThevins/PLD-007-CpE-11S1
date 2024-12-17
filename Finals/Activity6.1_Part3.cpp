#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

double divide(int a, int b) {
    return static_cast<double>(a) / b;
}

int main() {
    int a;
    int b;

    cout << "Enter two integers: ";
    cin >> a >> b;

    cout << "Addition: " << add(a, b) << endl;
    cout << "Subtraction: " << subtract(a, b) << endl;
    cout << "Multiplication: " << multiply(a, b) << endl;
    if (b != 0) {
        cout << "Division: " << divide(a, b) << endl;
    } else {
        cout << "Division: Cannot divide by zero" << endl;
    }
    return 0;
}