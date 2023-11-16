#include <iostream>
#include "Produto.h"
#include "Pedido.h"
#include "PersistenciaDeProduto.h"
#include <stdexcept>
using namespace std;

void teste1() {
    Produto *p1 = new Produto("Lasanha", 20);
    Produto *p2 = new Produto("Batata", 5);
    PersistenciaDeProduto *pdp = new PersistenciaDeProduto("teste1.txt");
    pdp->inserir(p1);
    pdp->inserir(p2);
    delete pdp;
    delete p1;
    delete p2;
}

void teste2() {
    PersistenciaDeProduto *pdp = new PersistenciaDeProduto("teste2.txt");
    try
    {
        Pedido *pd1 = pdp->obter();
        if (pd1 != NULL){
            pd1->imprimir();
        }
        delete pd1;
    }
    catch(std::exception *e)
    {
        cout << e->what() << endl;
        delete e;
    }
    delete pdp;
    
}