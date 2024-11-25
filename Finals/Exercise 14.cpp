#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main(){
	srand(time(0));
	int randomValue = rand();
	cout << "Random value: " << randomValue << endl;
	return 0;
}
