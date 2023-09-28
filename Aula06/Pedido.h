#ifndef PEDIDO_H
#define PEDIDO_H
#include "Produto.h"

class Pedido {
protected:
    int quantidadeDeProdutos;
    int quantidadeMaxima;
    Produto **produtos;
public:
    Pedido(int quantidadeMaxima);
    virtual ~Pedido();

    bool adicionar(Produto *p);
    bool remover(Produto *p);
    Produto **getProdutos();
    int getQuantidadeDeProdutos();
    double getValor();
    void imprimir();
};
#endif