
#include <iostream>
#include "lzw.hpp"
#include <fstream>
#include <string.h>
#include <cstring>
#include <bits/stdc++.h>

int lzw::codificar(string mensagem)
{
    unordered_map<string, int> table; //table se refere ao dicionario, no caso
    for (int i = 0; i <= 255; i++)    //considerando a tabela ascii
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
        p = "";
        c = "";

        int code = 256;
        vector<int> output_code; //output_code eh o codigo de saida codificado

        if (table.find(s + c) != table.end())
        {
            s = s + c;
        }
        else
        {
            cout << s << "\t" << table[s] << "\t\t" << s + c << "\t" << code << endl;
            output_code.push_back(table[s]);
            table[s + c] = code;
            code++; //
            s = c;
        }
        c = "";
        strin = strin + s; //atualiza a string strin
    }

    output_code.push_back(table[p]);
    return output_code;
}

void lzw::decodificar(vector<int> temp)
{

    unordered_map<int, string> table;
    for (int i = 0; i <= 255; i++)
    {
        string ch = "";
        ch += char(i);
        table[i] = ch;
    }
    int old = op[0], n;
    string s = table[old];
    string c = "";
    c += s[0];
    cout << s;
    int count = 256;
    for (int i = 0; i < op.size() - 1; i++)
    {
        n = op[i + 1];
        if (table.find(n) == table.end())
        {
            s = table[old];
            s = s + c;
        }
        else
        {
            s = table[n];
        }
        cout << s;
        c = "";
        c += s[0];
        table[count] = table[old] + c;
        count++;
        old = n;
    }
}