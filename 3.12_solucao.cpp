#include <iostream>
#include <memory>
//#include "3.12_conta.h"

//diferença pra struct é q struct tudo é público, na classe é privada

class Conta{    //classe
    int saldo;  //atributo ou variável-membro ou membro de dados
    public:     //se tira isso o minha_conta.saldo n consegue acessar
        //construtores
        explicit Conta(int valor):saldo{valor}{
            if(saldo<0){
                saldo = 0;
                std::cout << "Saldo inicial era inválido.\n";
            }
        }
        //delegando construtor
        Conta():Conta{0}{
        }

        //função-membro ou método
        void credito(unsigned int valor){
            saldo = saldo + valor;
            //saldo += valor;
        }
        void debito(unsigned int valor){
            if(valor>saldo){
                std::cout << "Valor para retirar é maior que o saldo disponível.\n";
            }else{
                saldo = saldo - valor;
            }
        }
        int getsaldo(){
            return saldo;
        }
};              

int main(){
    
    Conta minha_conta{1000}, outra_conta;  //minha_conta é um objeto de Conta

    auto ptr_conta = std::make_unique<Conta>(500);      //feito com ponteiro inteligente
    ptr_conta->credito(150);
    ptr_conta->debito(300);
    std::cout << "Dinâmico: " << ptr_conta->getsaldo() << std::endl;

    //outra_conta = 500;        //só funciona se tirar o explicit
    //minha_conta.credito(0);
    std::cout << "Minha: " << minha_conta.getsaldo() << " Outra: " << outra_conta.getsaldo() << std::endl;
    minha_conta.credito(550);//invocando método credito com argumento 55
                            //passando a mensagem credito com o argumento 55 para o objeto minha_conta
    std::cout << "Minha: " << minha_conta.getsaldo() << " Outra: " << outra_conta.getsaldo() << std::endl;
    minha_conta.debito(200);
    outra_conta.debito(100);
    std::cout << "Minha: " << minha_conta.getsaldo() << " Outra: " << outra_conta.getsaldo() << std::endl;
    outra_conta.credito(100);
    std::cout << "Minha: " << minha_conta.getsaldo() << " Outra: " << outra_conta.getsaldo() << std::endl;
    outra_conta.debito(42);
    std::cout << "Minha: " << minha_conta.getsaldo() << " Outra: " << outra_conta.getsaldo() << std::endl;


    //minha_conta.saldo = 0;     //alocar dinamicamente = minha_conta -> saldo

    return 0;
}
//cout cerr clog   = abordagens pra saida no console