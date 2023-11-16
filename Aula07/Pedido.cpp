#include "Pedido.h"
#include "ProdutoComDesconto.h"
#include "Item.h"

#include <iostream>

//Faca os includes necessarios e implemente os metodos pedidos no enunciado

using namespace std;

Pedido::Pedido(int quantidadeMaxima) : itens(new Item*[quantidadeMaxima]), quantidadeMaxima(quantidadeMaxima), quantidade(0) {}

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

bool Pedido::adicionar(Produto* produto) {
    if (this->quantidade >= quantidadeMaxima)
        return false;

    itens[this->quantidade++] = new Item(produto, 1);
    return true;
}

bool Pedido::adicionar(Produto* produto, int quantidade) {
    if (this->quantidade >= quantidadeMaxima)
        return false;

    itens[this->quantidade++] = new Item(produto, quantidade);
    return true;
}

double Pedido::calcularPrecoTotal() {
    double precoTotal = 0;
    for (int i = 0; i < quantidade; i++)
        precoTotal += itens[i]->calculaPrecoTotal();

    return precoTotal;
}

void Pedido::imprimir(){
    cout << "Pedido com " << getQuantidadeItens() << " item(ns)" << endl;
    for(int i = 0; i < getQuantidadeItens(); i++){
        itens[i]->imprimir();
    }
}

ProdutoComDesconto** Pedido::getProdutosComDesconto(int& quantidade){
    quantidade = 0;
    ProdutoComDesconto **produtosComDesconto = new ProdutoComDesconto*[this->quantidade];
    for(int i = 0; i < this->quantidade; i++){
        if(dynamic_cast<ProdutoComDesconto*>(itens[i]->getProduto()) != NULL){
            produtosComDesconto[quantidade] = dynamic_cast<ProdutoComDesconto*>(itens[i]->getProduto());
            quantidade++;
        }
    }
    if (quantidade == 0){
        return NULL;
    }
    return produtosComDesconto;
}