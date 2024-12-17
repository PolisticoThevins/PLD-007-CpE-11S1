#include <iostream>
#include <cmath>
using namespace std;

double getHypotenuse(double a, double b) {
  double answer;
  answer = sqrt(a*a + b*b);
  return answer;
}

int main() {
  double SIDE_1;
  double SIDE_2;

  cout << "Please the two sides of the triangle: " << endl;
  cout << "Enter Length: ";
  cin >> SIDE_1;
  cout << "Enter width: ";
  cin >> SIDE_2;
  cout << "The hypotenuse of the triangle is: " << getHypotenuse(SIDE_1, SIDE_2) << endl;
  return 0;
}