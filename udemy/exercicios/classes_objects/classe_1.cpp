#include <iostream>
#include <sstream>
using namespace std;

class Date { //nome da classe letra maiuscula
public:        //classes sao privadas para fora da classe || public permite o programa enxergar/acessar
    int day;  //atributos: dados da classe
    int month;
    int year;
    int hour;
    
    string toString() {        //metodos: funcoes da classe  || nome pode ser ToString toString ou to_string
        stringstream ss;        //transforma varias variaveis em uma string
        ss << day << "/" << month << "/" << year;
        return ss.str();
    }            
};                              //; depois de fechar o escopo

int main() {
    Date d1;    //objeto (instancia) criado a partir de uma classe
    d1.day = 3;
    d1.month = 11;
    d1.year = 2023;

    Date d2;
    d2.day = 31;
    d2.month = 12;
    d2.year = 2022;

    cout << d1.day << "/" << d1.month << "/" << d1.year << endl;
    cout << d2.day << "/" << d2.month << "/" << d2.year << endl;
    cout << d1.toString() << endl;
    cout << d2.toString() << endl;

    cout << &d1 << endl;
    cout << &d2 << endl;

    return 0;
}