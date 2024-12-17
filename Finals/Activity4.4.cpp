#include <iostream>
#include <stdio.h>
#include <ctype.h>
using namespace std;

void isItLowercase(char a)
{
    if (islower(a))
    {
        cout << a << " is a lowercase letter" << endl;
    }
    else
    {
        cout << a << " is not a lower case" << endl;
    }
}

void isItUppercase(char a)
{
    if (isupper(a))
    {
        cout << a << " is an uppercase letter" << endl;
    }
    else
    {
        cout << a << " is not an uppercase" << endl;
    }
}

void toToLower(char a)
{
    if (isupper(a))
    {
        char b = tolower(a);
        cout << a << " Is converted to uppercase: " << b << endl;
    }
}

void toToUpper(char a)
{
    if (islower(a))
    {
        char b = toupper(a);
        cout << a << " Is converted to uppercase: " << b << endl;
    }
}

void isBlank(char a)
{
    if (isblank(a))
    {
        cout << a << " is blank " << endl;
    }
    else
    {
        cout << a << "is not blank " << endl;
    }
}

void isDigit(char a)
{
    if (isdigit(a))
    {
        cout << a << " is digit " << endl;
    }
    else
    {
        cout << a << " is not a digit" << endl;
    }
}

void isALpha(char a)
{
    if (isalpha(a))
    {
        cout << a << " is an alpha " << endl;
    }
    else
    {
        cout << a << " is not an alpha" << endl;
    }
}

void isAlNum(char a)
{
    if (isalnum(a))
    {
        cout << a << " is alnum " << endl;
    }
    else
    {
        cout << a << " is not an alnum" << endl;
    }
}

int main()
{
    char a;

    cout << "Enter a character: ";
    cin >> a;

    isItLowercase(a);
    isItUppercase(a);
    toToLower(a);
    toToUpper(a);
    isBlank(a);
    isDigit(a);
    isALpha(a);
    isAlNum(a);

    return 0;
}

