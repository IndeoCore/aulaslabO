//Faca os includes necessarios

#include "Pedido.h"

#include <iostream>

using namespace std;

Pedido::Pedido(int quantidadeMaxima) : itens(new Item*[quantidadeMaxima]), quantidadeMaxima(quantidadeMaxima), quantidade(0) {
    
}

Pedido::~Pedido() {
    cout << "Pedido com " << quantidade << " item(ns) destruido" << endl;
    for (int i = 0; i < quantidade; ++i) delete itens[i];
    delete[] itens;
}

Item** Pedido::getItens() {
    return itens;
}

int Pedido::getQuantidadeItens() {
    return quantidade;
}

bool Pedido::adicionar(Produto* produto, int quantidade) {
    if (this->quantidade >= quantidadeMaxima)
        return false;

    itens[this->quantidade++] = new Item(produto, quantidade);
    return true;
}

double Pedido::calcularPrecoTotal(){
    if(quantidade == 0){
        return 0;
    }
    double precoTotal = 0;
    for(int i = 0; i < this->getQuantidadeItens(); i++){
        try
        {
            precoTotal += itens[i]->calcularPrecoTotal();
        }
        catch(logic_error *e)
        {
            delete e;
            
        }
    }
    return precoTotal;
}

void Pedido::imprimir() {
    cout << "Pedido com " << quantidade << " item(ns)" << endl;
    for (int i = 0; i < quantidade; i++) itens[i]->imprimir();
}