#include <iostream>
using namespace std;

int main() 
{
    int day;

    do {
        cout << "Enter day number (1-7): ";
        cin >> day;
        if (day < 1 || day > 7) {
            cout << "Invalid input. Please try again.\n";
        }
        
    } while (day < 1 || day > 7); 
    switch (day)
    {
        case 1:
            cout << "Today is Monday";
            break;
        case 2:
            cout << "Today is Tuesday";
            break;
        case 3:
            cout << "Today is Wednesday";
            break;
        case 4:
            cout << "Today is Thursday";
            break;
        case 5:
            cout << "Today is Friday";
            break;
        case 6:
            cout << "Today is Saturday";
            break;
        case 7:
            cout << "Today is Sunday";
            break;
        default: 
        cout << "Error: Invalid day";
    }
    
    cout << endl;
    return 0;
}