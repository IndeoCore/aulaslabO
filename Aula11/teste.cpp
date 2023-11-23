#include <iostream>
#include <string>
#include <stdexcept>
#include "Combo.h"
#include "Produto.h"
#include "Pedido.h"

using namespace std;

void teste1() {
    Combo *c1 = new Combo("Burger e bebida");
    Produto *p1 = new Produto("X-Bacon", 24.99);
    c1->adicionar(p1);
    Produto *p2 = new Produto("Coca-Cola Lata", 4.49);
    c1->adicionar(p2);
    c1->imprimir();
    delete c1;
    delete p1;
    delete p2;
}

void teste2() {
    Pedido *pd1 = new Pedido();
    Combo *c1 = new Combo("Burger e bebida");
    Produto *p1 = new Produto("X-Bacon", 24.99);
    c1->adicionar(p1);
    Produto *p2 = new Produto("Coca-Cola Lata", 4.49);
    c1->adicionar(p2);
    pd1->adicionar(c1, 2);
    Produto *p3 = new Produto("Sundae", 7.85);
    pd1->adicionar(p3, 2);
    pd1->imprimir();
    delete pd1;
    delete c1;
    delete p1;
    delete p2;
    delete p3;
}