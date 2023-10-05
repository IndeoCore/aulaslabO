#include "ProdutoComDesconto.h"
#include <iostream>

using namespace std;

ProdutoComDesconto::ProdutoComDesconto(string nome, double preco) : Produto(nome, preco),
                                                                 desconto(0) {}

ProdutoComDesconto::ProdutoComDesconto(string nome, double preco, double desconto) : Produto(nome, preco), 
                                                                               desconto(desconto) {}

ProdutoComDesconto::~ProdutoComDesconto() {
    cout << "Produto " << nome << " destruido" << endl;
}

double ProdutoComDesconto::getDesconto() {
    return desconto;
}

void ProdutoComDesconto::setDesconto(double desconto) {
    this->desconto = desconto;
}

 double ProdutoComDesconto::getPreco(){
    double valor;
    valor = this->preco*(1 - getDesconto());
    return valor;
}

