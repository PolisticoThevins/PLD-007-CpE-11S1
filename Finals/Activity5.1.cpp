#include <iostream>
using namespace std;

struct BitData{
    unsigned int originalInt;
    unsigned int reversedInt;
};

unsigned int reversebits(unsigned int bit)
{
    unsigned int result = 0;
    for(int i = 0; i < 32; i++)
    {
        result <<= 1;
        result |= (bit & 1);
        bit >>= 1;
    }
    return result;
}

void printbits(unsigned int bit)
{
    for(int i = 31; i >= 0; i--)
    {
        cout << ((bit >> i) & 1);
    }
    cout << endl;
}

int main()
{
    BitData data;
    cout << "Enter a number: ";
    cin >> data.originalInt;
    cout << "Original bits: " << endl;
    printbits(data.originalInt);
    data.reversedInt = reversebits(data.originalInt);
    cout << "Reversed: " << endl;
    printbits(data.reversedInt);
    return 0;
}



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