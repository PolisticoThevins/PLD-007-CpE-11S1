#include <iostream>
using namespace std;

bool multiple(int num, int divisor)
{
    return (num % divisor == 0);
}

int main()
{
    int inputNum, multipleOf;
    cout << "Enter an integer: ";
    cin >> inputNum;
    cout << "Enter the divisor: ";
    cin >> multipleOf;
    
    if(multiple(inputNum, multipleOf))
    {
        cout << inputNum << " is a multiple of: " << multipleOf << " " << endl;
    }
    else
    {
        cout << inputNum << " is not a multiple of: " << multipleOf << " " << endl;
    }
    return 0;
}