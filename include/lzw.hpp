#include <iostream>

using namespace std;

class lzw
{
private:
    char s; //variavel string do pseudocodigo
    string strin = NULL; //outra variavel que representa a string, porem de fato uma string e que armazena 
                         //a string codificada
    char c; //variavel c do pseudocodigo

public:
    lzw(){}; //construtor
    ~lzw(){}; //destrutor
    string codificar(string mensagem); //codifica usando o algoritmo lwz
    string decodificar();
    void imprime();
};