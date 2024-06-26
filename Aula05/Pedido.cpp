#include "Pedido.h"

#include <iostream>

using namespace std;

Pedido::Pedido(int quantidadeMaxima) : itens(new Item*[quantidadeMaxima]), quantidadeMaxima(quantidadeMaxima), quantidade(0) {}

Pedido::~Pedido(){
    cout << "Pedido com " << quantidade << " item(ns) destruido" << endl;
    for(int i = 0; i < quantidade; i++){
        delete itens[i];
    }
    delete[] itens;
}

Item** Pedido::getItens() {
    return itens;
}

int Pedido::getQuantidadeItens() {
    return quantidade;
}

int Pedido::getQuantidadeMaximaItens() {
    return quantidadeMaxima;
}

bool Pedido::adicionar(Produto* produto, int quantidade) {
    if(this->quantidade >= quantidadeMaxima)
        return false;

    itens[this->quantidade] = new Item(produto, quantidade);
	this->quantidade++;
    return true;
}

double Pedido::calcularPrecoTotal() {
    double precoTotal = 0;
    for(int i = 0; i < quantidade; i++)
        precoTotal += itens[i]->calculaPrecoTotal();

    return precoTotal;
}
