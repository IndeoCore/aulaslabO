
#include <iostream>
#include <string>

using namespace std;

#include "Produto.h"
#include "Pedido.h"

void teste1() {
    Produto* esc = new Produto;
    esc->setNome("Escova de dentes");
    esc->setPreco(5.49);
    esc->imprimir();
}

void teste2() {
    Produto* ag = new Produto;
    Produto* des = new Produto;
    Pedido* ped = new Pedido;
    ag->setNome("Agua");
    ag->setPreco(4.90);
    des->setNome("Desodorante");
    des->setPreco(15.59);
    ped->adicionar(ag);
    ped->adicionar(des);
    ped->imprimir();
}
