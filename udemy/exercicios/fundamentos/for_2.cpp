#include <iostream>
using namespace std;

int main() {
    
    int number = 0;
    double total = 0;
    int qty = 0;

    for(;number != -1;){
        cout << "Enter a number or -1 to finish: ";
        cin >> number;

        if(number != -1){
            total += number;
            qty++;
        }
    }

    //cast : converter p outro tipo
    double avg = (double)total/qty;
    cout << avg << endl;

    return 0;
}