#include<iostream>
#include<string>
using namespace std;




int main()
{
	//create a c++ program to determine if alphabet is vowel
	int a;
	int b;
	char c;
	
	cout<<"Enter first number:";
	cin>> a;
	
	cout<<"Enter second number:";
	cin>> b;
	
	cout<<"Enter type:";
	cin>> c;
	
	int sum;
	int difference;
	int quotient;
	int product;
	
	switch(c)
	{
		case'+':
			sum = a+b;
			cout<< "Output is:" << sum;
		break;
		
		case'-':
			difference = a - b;
			cout<< "Output is:" << difference;
		break;
		
		case'/':
			quotient = a/b;
			cout<< "Output is:" << quotient;
		break;
		
		case'*':
			product = a*b;
			cout<< "Output is:" << product;
		break;

		
		default:
			{
				cout<<"error";
				break;
			}
	}
	return 0;
}
