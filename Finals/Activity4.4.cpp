#include <iostream>
#include <stdio.h>
#include <ctype.h>
using namespace std;

int isItLowercase(char a)
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

int isItUppercase(char a)
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

int toToLower(char a)
{
    if (isupper(a))
    {
        char b = tolower(a);
        cout << a << " Is converted to uppercase: " << b << endl;
    }
}

int toToUpper(char a)
{
    if (islower(a))
    {
        char b = toupper(a);
        cout << a << " Is converted to uppercase: " << b << endl;
    }
}

int isBlank(char a)
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

int isDigit(char a)
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

int isALpha(char a)
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

int isAlNum(char a)
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


