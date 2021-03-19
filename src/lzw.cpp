#include <iostream>
#include "lzw.hpp"
#include <fstream>
#include <string.h>
#include <cstring>
#include <bits/stdc++.h>

string lzw::codificar(string mensagem)
{
    unordered_map<string, int> table;
    for (int i = 0; i <= 255; i++)
    {
        string ch = "";
        ch += char(i);
        table[ch] = i;
    }

    int n = mensagem.length(); //n recebe o tamanho da string
    char mensagemArray[n];     //vetor de char que armazena n caracteres

    strcpy(mensagemArray, mensagem.c_str()); //"transforma" a string em um array de char

    int i = 0;
    while (i < n) //quando i = n, quer dizer que nao ha mais caracteres para a leitura
    {
        s = mensagemArray[i];
        c = mensagemArray[i + 1];

        if (table.find(s + c) != table.end())
        {
            s = s + c;
        }
        else
        {
            cout << s << "\t" << table[s] << "\t\t" << s + c << "\t" << code << endl;
            output_code.push_back(table[s]);
            table[s + c] = code;
            code++;
            s = c;
        }
        c = "";
        strin = strin + s;
    }
}
