#include <iostream>

using namespace std;

int freq(int responses[], int size, int target)
{
    int number = 0;
    for (int i = 0; i < size; i++) 
	{
	    if (target == responses[i])
		{
	        number++;
	    }
	    return number;
	}
}

int main()
{
    int responses[] = { 1, 2, 6, 4, 8, 9, 7, 1, 0, 2, 6, 3, 8, 2, 8, 7, 5, 6, 7, 8, 5, 7, 6, 5, 7, 6, 5, 5, 4, 6, 6, 6, 8, 10 };
    int size = sizeof(responses) / sizeof(responses[0]);
    for (int i = 1; i <= 10; i++)
	{
        cout << "the responses of your" << i << " is: " << freq(responses, size, i) << endl;
    }
    return 0;
}