#include <iostream>
using namespace std;

int main() {
    int month;
    cout << "Enter a month: ";
    cin >> month;

    int numberOfDays;

    switch(month){
        case 2:
            numberOfDays = 28;
            break;
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            numberOfDays = 31;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            numberOfDays = 30;
            break;
        default:
            numberOfDays = -1;
            break;

    }

    cout << numberOfDays << " days" << endl;

    return 0;
}