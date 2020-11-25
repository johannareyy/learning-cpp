#ifndef PESSOA_H
#define PESSOA_H

#include <iostream>
#include <string>

using namespace std;

class Pessoa {
private:    //normalmente se define as atributos (caracteristicas) da classe
    int idade;
    string nome;
public:     //e aqui os metodos da classe (protocolo=metodos publicos q podem ser acessados pelo usuario)
    Pessoa();
    Pessoa(int idade, string nome);
    int getIdade();
    void setIdade(int idade);
    string getNome();
    void setNome(string nome);
};

#endif