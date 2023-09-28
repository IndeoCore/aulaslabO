#ifndef PEDIDO_H
#define PEDIDO_H

#define MAXIMO_DE_PRODUTOS 10

#include <iostream>
#include <string>

#include "Produto.h"

using namespace std;

class Pedido {
    private:
        Produto* produtos[MAXIMO_DE_PRODUTOS];
        int quantidade = 0;
    public:
        bool adicionar(Produto* produto);
        double getPrecoTotal();
        void imprimir();
};
#endif