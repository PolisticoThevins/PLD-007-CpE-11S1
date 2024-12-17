#include <iostream>
using namespace std;

double enterCelsius(int fahrenheit) {
  return (static_cast<double>(5.0 / 9.0) * (fahrenheit - 32));
}

double enterFahrenheit(int celsius) {
  return (static_cast<double>(9.0 / 5.0) * celsius + 32);
}

int main() {
  int f;
  int c;
  cout << "Fahrenheit to Celsius: ";
  cin >> f;
  cout << f << " F = " << enterCelsius(f) << " C " << endl;

  cout << "Celsius to Fahrenheit: ";
  cin >> c;
  cout << c << " C = " << enterFahrenheit(c) << " F " << endl;
  return 0;
}