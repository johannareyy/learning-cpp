#include <iostream>
#include <random>

/*
 Projeto para execução em terminal.
 
 Configurado para utilizar C++17.
 Portanto, sugere-se um compilador que suporte essa versão.
 
 */

void teste_compilador(){
    static_assert(__cplusplus >= 201703L,"Projeto requer compilador compatível com C++17." );
}

auto numero_aleatorio(){
    std::uniform_int_distribution<int> randomDist(0, 50);
    std::random_device rd;
    std::mt19937 randomNumbers(rd());
    return randomDist(randomNumbers);
}

int main()
{
    std::cout << "Projeto Terminal: "<< numero_aleatorio() << '\n';
    return 0;
}
