/**
6.19 (Hypotenuse Calculations) Define a function hypotenuse that calculates the hypotenuse of a right 
triangle when the other two sides are given. The function should take two double arguments
and return the hypotenuse as a double. Use this function in a program to determine the hypotenuse for 
each of the triangles shown below.
Triangle  Side 1  Side 2
1         3.0     4.0
2         5.0     12.0
3         8.0     15.0
*/

#include <iostream>
#include <cmath>
#include <vector>
#include <utility>
#include <array>
#include <algorithm>

[[nodiscard]] double hipotenusa(double lado1, double lado2);

void mostra_nome(std::string nome){
    std::cout << "Nome: " << nome << std::endl;
}

int main (){
    int t{1};
    std::vector<std::pair<double,double>> lados{{3.0,4.0},
                                                {5.0,12.0},
                                                {8.0,15.0}};
    std::vector<std::string> nomes{{"Primeiro"}, {"Segundo"}, {"Terceiro"}};  

    auto mostra = [](std::string texto){
         std::cout << "Nome: " << texto << std::endl;
    };

    std::sort(lados.begin(), lados.end(), [](auto a, auto b) { return a.first > b.first; });

    for(auto catetos : lados){
        std::cout << "Triangulo " <<(t++)<< " hipotenusa:" 
                  << hipotenusa(catetos.first,catetos.second) << std::endl;        
    }

    for(std::string um_nome : nomes){
        mostra(um_nome);
    }
    //
    std::array<int, 10> s = {5, 7, 4, 2, 8, 6, 1, 9, 0, 3};//desordenado
//    std::sort(s.begin(), s.end());//< crescente

    std::sort(s.begin(), s.end(), [](auto a, auto b) { 
        return a <= b; 
    }); // > decrescente
    for (auto a : s) {
        std::cout << a << " ";
    } 
    std::cout << '\n';
    return 0;
}

double hipotenusa(double lado1, double lado2){
    //namespace padrão -> std    
    return std::sqrt(pow(lado1,2)+pow(lado2,2));
}
