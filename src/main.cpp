#include <iostream>
#include "lzw.hpp"
#include <fstream>
#include <string.h>
#include <cstring>

/*
Rodrigo da Silva Soares 201765218AB
*/

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
    vector<int> temp = teste.codificar(mensagem); //vetor temporario recebe a mensagem codificada

    for (int i = 0; i < temp.size(); i++) //imprime na tela
        cout << "Saida codificada:\n " << temp[i] << endl;

    
}