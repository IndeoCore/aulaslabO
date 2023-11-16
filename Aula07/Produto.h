#ifndef PRODUTO_H
#define PRODUTO_H

#include <string>

using namespace std;

class Produto {
protected:
    string nome;
    double preco;

public:
    Produto(string nome, double preco);
    ~Produto();

    string getNome();
    virtual double getPreco();
    void imprimir();
};

#endif
