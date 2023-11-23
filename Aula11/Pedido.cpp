#include "Pedido.h"

#include <iostream>
#include <stdexcept>

using namespace std;

Pedido::Pedido(){
    this->itens = new list<Item*>();
}

Pedido::~Pedido() {
    cout << "Pedido com " << itens->size() << " item(ns) destruido" << endl;
    while(!itens->empty()){
        Item* item = itens->front();
        itens->pop_front();
        delete item;
    }
    delete itens;
}

void Pedido::adicionar(Produto* produto, int quantidade) {
    list<Item*>::iterator i = itens->begin();
    while(i != itens->end()){
        if (produto == (*i)->getProduto()){
            throw new invalid_argument("Produto ja existente");
        }
        i++;
    }
    itens->push_back(new Item(produto, quantidade));
}

list<Item*>* Pedido::getItens() {
    return itens;
}

void Pedido::imprimir() {
    cout << "Pedido - " << itens->size() << " item(ns)" << endl;
    list<Item*>::iterator i = itens->begin();
    while(i != itens->end()){
        (*i)->imprimir();
        i++;
    }
    
}