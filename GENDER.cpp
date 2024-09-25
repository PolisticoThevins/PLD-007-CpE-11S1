#include<iostream>
using namespace std;




int main()
{
	//create a c++ program to determine YOU GENDER
	char c;
	cout <<"Enter the gender:";
	cin>> c;
	
	switch(c)
	{
		case'M':
			cout<<"You are a male";
		break;
		
		case 'A':
			cout<<"You are a female";
		break;
		
		
		default:
			{
				cout<<"You are non binary";
				break;
			}
	}
	return 0;
}
