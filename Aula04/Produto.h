#ifndef PRODUTO_H
#define PRODUTO_H

#include <iostream>
#include <string>

using namespace std;

class Produto {
    private:
        string nome;
        double preco;
    public:
        void imprimir();
        void setNome(string nome);
        string getNome();
        void setPreco(double preco);
        double getPreco();
};
#endif