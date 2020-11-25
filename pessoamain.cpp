#include <iostream>
#include "pessoa.hpp"
#include "pessoa.cpp"

using namespace std;

int main(){
    Pessoa p;
    Pessoa p2(20, "Thales");

    p.setNome("Thales");

    cout << p.getNome() << endl;
    cout << p2.getIdade() << " " << p2.getNome() << endl;

    return 0;
}