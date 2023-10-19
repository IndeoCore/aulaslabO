// Faca os includes necessarios
#include "Combo.h"
#include <iostream>
#include <string>

using namespace std;

void teste1() {
    ProdutoNormal* p1 = new ProdutoNormal("Temaki Atum", 20);
    ProdutoNormal* p2 = new ProdutoNormal("Shimeji", 15);
    ProdutoNormal* p3 = new ProdutoNormal("Sashimi", 15);
    Combo* c1 = new Combo("Sushi Executivo", 3);
    c1->adicionar(p1);
    c1->adicionar(p2);
    c1->adicionar(p3);
    c1->imprimir();
    delete c1;
}

void teste2() {
    ProdutoNormal* p1 = new ProdutoNormal("Temaki Atum", 20);
    ProdutoNormal* p2 = new ProdutoNormal("Shimeji", 15);
    ProdutoNormal* p3 = new ProdutoNormal("Sashimi", 15);
    Combo* c1 = new Combo("Sushi Executivo", 3);
    c1->adicionar(p1);
    c1->adicionar(p2);
    c1->adicionar(p3);
    cout << p1->getId() << endl;
    cout << p2->getId() << endl;
    cout << p3->getId() << endl;
    cout << c1->getId() << endl;
    delete c1;

}