CXXARGS = -Wall -Wextra -std=c++17 -Werror
NOMEPROG = aula.exe
#alvo: dependencia outroalvo arquivo
#	acao
compilar: aula.cpp
	g++ aula.cpp -o $(NOMEPROG) $(CXXARGS)

debug: aula.cpp
	g++ aula.cpp -o $(NOMEPROG) $(CXXARGS) -g

apagar: 
	rm $(NOMEPROG) 

executar: compilar
	./$(NOMEPROG)