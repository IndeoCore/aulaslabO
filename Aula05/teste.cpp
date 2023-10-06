#include <iostream>
#include <string>

using namespace std;

#include "Produto.h"
#include "Item.h"
#include "Pedido.h"

void teste1() {
    Produto *p1 = new Produto("Cueca", 20.89);
    p1->imprimir();
    Item *i1 = new Item(p1, 5);
    i1->imprimir();

    delete i1;
    delete p1;
}

void teste2() {
    Produto *p1 = new Produto("Absorvente", 10.40);
    Produto *p2 = new Produto("Pringles", 12.37);
    Produto *p3 = new Produto("Cookies", 5.39);
    Pedido *pd1 = new Pedido(4);
    pd1->adicionar(p1, 1);
    pd1->adicionar(p2, 1);
    pd1->adicionar(p3, 1);
    Pedido *pd2 = new Pedido(4);
    pd2->adicionar(p1, 1);
    pd2->adicionar(p3, 2);

    delete pd1;
    delete pd2;
    delete p1;
    delete p2;
    delete p3;
}