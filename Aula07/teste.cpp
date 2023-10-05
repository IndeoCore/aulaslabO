//Faca os includes necessarios
#include <iostream>
#include <string>
#include "Pedido.h"
#include "ProdutoComDesconto.h"

using namespace std;

void teste1(){
    Produto *p1 = new Produto("Bala de goma", 3.50);
    Produto *p2 = new Produto("Chocolate", 5.20);
    Pedido *pd1 = new Pedido(2);
    pd1->adicionar(p1);
    pd1->adicionar(p2, 4);
    pd1->imprimir();
    
    delete pd1;
    delete p1;
    delete p2;  
}

void teste2(){
    Produto *p1 = new Produto("Linguica", 20.90);
    Produto *p2 = new ProdutoComDesconto("Picanha", 70.49, 0.1);
    Pedido *pd1 = new Pedido(2);
    pd1->adicionar(p1, 2);
    pd1->adicionar(p2);
    pd1->imprimir();

    delete pd1;
    delete p1;
    delete p2;
}

void teste3() {
    int quantidade = 0;
    Pedido *pd1 = new Pedido(2);
    pd1->getProdutosComDesconto(quantidade);
    cout << quantidade << endl;
    
    Produto *p1 = new Produto("Refrigerante", 7.80);
    pd1->adicionar(p1, 2);
    pd1->getProdutosComDesconto(quantidade);
    cout << quantidade << endl;

    Produto *p2 = new ProdutoComDesconto("Pizza", 40.99);
    pd1->adicionar(p2, 2);
    pd1->getProdutosComDesconto(quantidade);
    cout << quantidade << endl;

    delete pd1;
    delete p1;
    delete p2;
}

