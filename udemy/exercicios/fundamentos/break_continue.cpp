#include <iostream>
using namespace std;

int main() {

    for(int i = 0; i < 10; i++){
        if(i % 2 == 1){
            continue; //n imprime os impares
            //break;
        cout << i << endl;
        }
    }
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++)
            if(j == 2){
                continue; //n imprime o 2 || n quebra o for do i
                //break;
            cout << i << " " << j << endl;
            }
    }

    cout << "end" << endl;
    return 0;
}