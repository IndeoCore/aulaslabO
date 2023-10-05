#ifndef PRODUTOCOMDESCONTO_H
#define PRODUTOCOMDESCONTO_H

#include "Produto.h"
#include <string>

using namespace std;

class ProdutoComDesconto : public Produto {
public:
    ProdutoComDesconto(string nome, double preco);
    ProdutoComDesconto(string nome, double preco, double desconto);
    ~ProdutoComDesconto();

    double getDesconto();
    void setDesconto(double desconto);
    virtual double getPreco();
protected:
    double desconto;
};

#endif