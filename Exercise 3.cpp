#include <iostream>

using namespace std;



int main()
{
	float grade;
	
	cout<<"Enter your grade:"; cin >> grade;
	
	if (grade >=94 and grade <= 100)
	{
		cout <<"Excelent" << endl;
	}
	
	else if (grade >=88.5 and grade <=93.99)
	{
		cout <<"Superior" << endl;
	}
	
	else if (grade >=83 and grade <= 88.49)
	{
		cout <<"Meritorious " << endl;
	}
	else if (grade >=77.5 and grade <= 82.99)
	{
		cout <<"Very Good" << endl;
	}
	else if (grade >=72 and grade <= 77.49)
	{
		cout <<"Good" << endl;
	}
	else if (grade >=65.5 and grade <= 71.99)
	{
		cout <<"Very Satisfactory" << endl;
	}
	else if (grade >=61 and grade <= 65.49)
	{
		cout <<"Satisfactory" << endl;
	}
	else if (grade >=55.5 and grade <= 60.99)
	{
		cout <<"Fair" << endl;
	}
	else if (grade >=50 and grade <= 55.49)
	{
		cout <<"Passing" << endl;
	}
	else if (grade >=1 and grade <= 49.99)
	{
		cout <<"faILED" << endl;
	}
	else if (grade > 100 or grade <= 0)
	{
		cout <<"Error" <<endl;
	}
	else 
	{
		cout <<"XD " <<endl;
	}
}
