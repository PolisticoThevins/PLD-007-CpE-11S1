#include <iostream>
using namespace std;

double getCube(double a) {
  double result;
  result = a*a*a;
  return result;
}

int main() {
  double a;
  double result;
  cout << "Pls enter the length of the sides to get area: ";
  cin >> a;
  result = getCube(a);
  cout << "The area of the cube is: " << result << endl;
  return 0;
}