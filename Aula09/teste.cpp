//Faca os includes necessarios
#include <iostream>
#include <string>
#include <stdexcept>
#include "Produto.h"
#include "Pedido.h"

using namespace std;

void teste1(){
    try {
        Produto *p = new Produto("Banana", -1);
    }
    catch(invalid_argument *e) {
        cout << e->what() << endl;
        delete e;
    }
    
}

void teste2(){
    try {
        Produto *p = new Produto("Gatorade", 7.50);
        cout << p->getPreco() << endl;
        p->setDisponivel(false);
        p->getPreco();
    }
    catch(logic_error *e) {
        cout << e->what() << endl;
        delete e;
    }
    
}

void teste3(){
   Pedido *pd1 = new Pedido(4);
   Produto *p1 = new Produto("Cerveja", 4.35);
   Produto *p2 = new Produto("Bis", 3.90);
   Produto *p3 = new Produto("Frigideira", 80.79);
   Produto *p4 = new Produto("Vassoura", 30.50);
   pd1->adicionar(p1, 5);
   pd1->adicionar(p2, 2);
   pd1->adicionar(p3, 1);
   pd1->adicionar(p4, 1);
   cout << pd1->calcularPrecoTotal() << endl;
   p1->setDisponivel(false);
   p3->setDisponivel(false);
   cout << pd1->calcularPrecoTotal() << endl;
   p2->setDisponivel(false);
   p4->setDisponivel(false);
   cout << pd1->calcularPrecoTotal() << endl;
   delete pd1;
   delete p1;
   delete p2;
   delete p3;
   delete p4;
}
