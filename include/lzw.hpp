#include <iostream>

using namespace std;

class lzw
{
private:
    string s; //variavel string do pseudocodigo
    string strin = NULL; //outra variavel que representa a string, porem de fato uma string e que armazena 
                         //a string codificada
    string c; //variavel c do pseudocodigo

public:
    lzw(){}; //construtor
    ~lzw(){}; //destrutor
    int codificar(string mensagem); //codifica usando o algoritmo lwz
    void decodificar(string temp);   //decodifica
};