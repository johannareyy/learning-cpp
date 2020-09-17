#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>

/*
 Projeto exemplo de interface gráfica com SFML.
 O texto se movimenta de acordo com as teclas CIMA; BAIXO; ESQUERDA; e DIREITA.
 Configurado para utilizar C++17.
 Portanto, sugere-se um compilador que suporte essa versão.

 Para instalar o SFML:
 ubuntu: sudo apt-get install libsfml-dev
 fedora: sudo dnf install SFML SFML-devel
 windows: https://www.sfml-dev.org/download.php
*/

int main(){
    int x_texto{30}, y_texto{30};

    sf::RenderWindow window(sf::VideoMode(500, 500), "Projeto SFML!");
    sf::Text texto;
    sf::Font opensans;
    if(!opensans.loadFromFile("./fonts/OpenSans-Bold.ttf")){
        std::cerr << "ERRO: fonte não encontrada!\n";
    }
    texto.setFont(opensans);
    texto.setString(">> Projeto SFML <<");
    texto.setCharacterSize(24); // em pixels
    texto.setFillColor(sf::Color::Red);// define a cor
    texto.setStyle(sf::Text::Bold);// define o estilo do texto
    texto.setPosition(x_texto,y_texto);

    //Link: https://www.sfml-dev.org/tutorials/2.5/window-events.php
    //https://www.sfml-dev.org/documentation/2.5.1/classsf_1_1Keyboard.php
    window.setKeyRepeatEnabled(true);//habilita a repetição das teclas

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            switch (event.type) {
            case sf::Event::Closed:
                 window.close();
                 break;
            
            // key pressed
            case sf::Event::KeyPressed:
                if(sf::Keyboard::isKeyPressed(sf::Keyboard::Left)) {
                    --x_texto;
                    std::cout << "Keyboard esquerda!" << std::endl;
                } else if(sf::Keyboard::isKeyPressed(sf::Keyboard::Right)) {
                    ++x_texto;
                    std::cout << "Keyboard direita!" << std::endl;
                } else if(sf::Keyboard::isKeyPressed(sf::Keyboard::Down)) {
                    ++y_texto;
                    std::cout << "Keyboard para baixo!" << std::endl;
                } else if(sf::Keyboard::isKeyPressed(sf::Keyboard::Up)) {
                    --y_texto;
                    std::cout << "Keyboard para cima!" << std::endl;
                } else
                    std::cout << "Keyboard pressed = " << event.key.code << std::endl;
                break;
            
            }
        }

        window.clear();
        texto.setPosition(x_texto,y_texto);
        window.draw(texto);
        window.display();
    }
    return 0;
}