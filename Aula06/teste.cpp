//Faca os includes necessarios
#include "Combo.h"
#include "Pedido.h"

void teste1() {
    Produto *p1 = new Produto("Pipoca Grande", 20);
    Produto *p2 = new Produto("Coca-Cola 1L", 15);
    Produto *produtos[2] = {p1, p2};
    Combo *c = new Combo("Combo 2", produtos, 2, 0.2);
    c->imprimir();
    delete c;
    delete p1;
    delete p2;
}

void teste2() {
    Produto *p1 = new Produto("Pipoca Grande", 20);
    Produto *p2 = new Produto("Coca-Cola 1L", 15);
    Produto *produtos[2] = {p1, p2};
    Combo *c = new Combo("Combo 2", produtos, 2, 0.2);
    Produto *p3 = new Produto("Pipoca Pequena", 15);
    Produto *p4 = new Produto("Pepsi 500ml", 10);
    Pedido *pd1 = new Pedido(3);
    pd1->adicionar(c);
    pd1->adicionar(p3);
    pd1->adicionar(p4);
    pd1->imprimir();
    pd1->remover(p3);
    pd1->imprimir();
    delete pd1;
    delete c;
    delete p1;
    delete p2;
    delete p3;
    delete p4;
}

