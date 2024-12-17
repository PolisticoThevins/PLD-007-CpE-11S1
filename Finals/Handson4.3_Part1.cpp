#include <iostream>
#include <string>
using namespace std;

int main()
{
    int size = 8;
    const string days[size] = { "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday" };
	int day;

    cin >> day;

    for (int i = 0; i < size; i++)
    {
        if (day >= 0 && day <= 7)
        {
            cout << days[day] << "\n";
            break;
            return 0;
        }
        else
        {
            cout << "that day does not exist" << endl;
            break;
            return 0;
        }
    }
    return main();
}