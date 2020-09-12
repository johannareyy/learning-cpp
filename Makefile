CXXARGS = -Wall -Wextra -std=c++17
NOMEPROG = aula.bin
#alvo: dependencia outroalvo arquivo (3 alvos: compilar, debug, limpar arquivos)
#	#acao
#make compilar
compilar: aula.cpp #dependencia
	g++ aula.cpp -o aula.bin -Wall -Wextra -std=c++17
	g++ aula.cpp -o aula.bin $(CXXARGS)
	g++ aula.cpp -o $(NOMEPROG) $(CXXARGS)

#make debug no terminal do linux
debug: aula.cpp
	g++ aula.cpp -o aula.bin -Wall -Wextra -std=c++17 -g
	g++ aula.cpp -o aula.bin $(CXXARGS) -g
	g++ aula.cpp -o $(NOMEPROG) $(CXXARGS) -g

apagar:
	rm aula.bin
	rm $(NOMEPROG)

executar: compilar
	./aula.bin
	./$(NOMEPROG)


#no meu programa precisa dar make executar pra executar

