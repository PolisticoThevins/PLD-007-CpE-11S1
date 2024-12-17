#include <iostream>
#include <string>
using namespace std;

int display(int Element)
{
    char star = '*';
    cout << string(Element, star);
    cout << Element << endl;
}

int main()
{
    int size = 11;
    int arr[size] = { 19, 3, 15, 7, 119, 13, 5, 17, 1 };
    char star = '*';
    
    cout << "Element" << " " << "Value" << " " << "Histogram" << endl;
    for (int i = 0; i < size; i++) 
	{
        for (int j = 0; j < arr[i]; j++) 
		{
            //display(arr[i]);
            cout << i << " " << " " << arr[i] << " " << " " << string(arr[i], star) << endl;
            break;
        }
        cout << endl;
    }
}