#include "Item.h"
#include <iostream>

using namespace std;

Item::Item(Produto* produto, int quantidade) : produto(produto), quantidade(quantidade) {}

Item::~Item() {
    cout << "Item " << produto->getNome() << " destruido" << endl;
}

Produto* Item::getProduto() {
    return produto;
}

int Item::getQuantidade() {
    return quantidade;
}

double Item::calcularPrecoTotal() {
    try
    {
        double preco;
        preco = produto->getPreco() * quantidade;
        return preco;
    }
    catch(logic_error *e)
    {
        delete e;
        return 0;
    }
    
}

void Item::setQuantidade(int quantidade) {
    this->quantidade = quantidade;
} 

void Item::imprimir() {
    cout << quantidade << " unidade(s) de ";
    produto->imprimir(); 
}