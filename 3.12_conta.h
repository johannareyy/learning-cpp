class Conta{              //classe
    int saldo; //atributo ou variável-membro ou membro de dados
    public:        //se tira isso o minha_conta.saldo n consegue acessar
        //construtores
        explicit Conta(int valor);
        //delegando construtor
        Conta();

        //função-membro ou método
        void credito(unsigned int valor);
        void debito(unsigned int valor);
        int getsaldo() const;   //const pra garantir q n vai alterar o valor
};