#include <iostream>
using namespace std;

int main() {
    string title = "Mr. ";
    string name("John");
    string end(10, '!');

    cout << name.size() << endl;
    cout << name.back() << endl; //ultima posicao da string
    cout << name[0] << endl; //posicao 0 da string
    cout << end << endl;
    
    //concatenacao da string
    cout << title + name << endl;
    cout << title << endl;
    cout << name << endl;

    name += " Doe";
    name.append("???"); //adiciona no nome
    cout << name << endl;

    cout << title.append(name) << endl;
    cout << title << endl;


    return 0;
}