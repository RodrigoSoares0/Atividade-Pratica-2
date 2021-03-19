#include <iostream>
#include "lzw.hpp"
#include <fstream>
#include <string.h>
#include <cstring>

using namespace std;
int main()
{
    ifstream file("arquivo.txt");
    string mensagem;

    if (file.is_open()) //se file estiver aberto
    {
        while (file.good())
        {
            getline(file, mensagem); //le a linha do txt e armazena na string mensagem
        }
    }

    lzw teste;
    teste.codificar(mensagem);
    teste.imprime();

    //int n = mensagem.length(); //n recebe o tamanho da string
    //char mensagemArray[n];     //vetor de char que armazena n caracteres

    //strcpy(mensagemArray, mensagem.c_str()); //"transforma" a string em um array de char

}