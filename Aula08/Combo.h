#ifndef COMBO_H
#define COMBO_H

// Faca os includes necessarios
#include <iostream>
#include <string>
#include "ProdutoNormal.h"

using namespace std;

class Combo : public Produto {

private:
    ProdutoNormal** produtosNormais;
    string nome;
    int quantidadeMaxima;
    int quantidadeDeProdutos;
public:
    Combo(string nome, int quantidadeMaxima);
    virtual ~Combo();

    bool adicionar(ProdutoNormal *ep);
    ProdutoNormal **getProdutosNormais();
    int getQuantidadeDeProdutosNormais();
    double getPreco();
    void imprimir();
};
#endif