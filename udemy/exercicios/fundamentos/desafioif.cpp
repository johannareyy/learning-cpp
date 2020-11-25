#include <iostream>
using namespace std;

int main() {
    int x, y, z;
    cout << "Digite os 3 numeros";
    cin >> x >> y >> z;
    int maior = x;

    if(y > maior){
        maior = y; 
    }
    if(z > maior){
        maior = z;
    }
    cout << maior;

    return 0;
}