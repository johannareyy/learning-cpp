#include <iostream>
using namespace std;

int main() {

    int i = 0;

    for(;i < 10;){
        cout << i << endl;
        i++;
    }

//ou

    for(i = 0;i < 10; i++){
        cout << i << endl;
    }

    for(int j = 100; j >= 0; j -= 2){
        cout << j << endl;
    }

    return 0;
}