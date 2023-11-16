//Faca os includes necessarios
//Implemente aqui os metodos
#include "Pedido.h"

Pedido::Pedido(int quantidadeMaxima) {
    // implemente
    this->quantidadeMaxima = quantidadeMaxima;
    this->produtos = new Produto*[quantidadeMaxima];
    this->quantidadeDeProdutos = 0;
}

Pedido::~Pedido() {
    // implemente
    cout << "Pedido Destruido" << endl;
}

bool Pedido::adicionar(Produto *p) {
    // implemente
    if(quantidadeDeProdutos >= quantidadeMaxima){
        return false;
    }
    for(int i = 0; i < quantidadeDeProdutos; i++) {
        if (produtos[i] == p){
            return false;
        }
    }
    produtos[quantidadeDeProdutos] = p;
    quantidadeDeProdutos++;
    return true;
}

bool Pedido::remover(Produto *p) {
    // implemente
    bool removeu = false;
    for (int i = 0; i < quantidadeDeProdutos; i++){
        if (produtos[i] == p){         
            for(int j = i+1; j < quantidadeDeProdutos; j++){
                produtos[j - 1] = produtos[j];
            }
            produtos[quantidadeDeProdutos] == nullptr;
            removeu = true;
        }
    }
    if(removeu){
        quantidadeDeProdutos--;
        return true;
    }
    return false;
}

Produto** Pedido::getProdutos() {
    return produtos;
}

int Pedido::getQuantidadeDeProdutos() {
    return quantidadeDeProdutos;
}

double Pedido::getValor() {
    double valor;
    for (int i = 0; i < quantidadeDeProdutos; i++){
        valor += produtos[i]->getPreco();
    }
    return valor;
}

void Pedido::imprimir() {
    cout << "Pedido com " << getQuantidadeDeProdutos() << " produto(s) - " << getValor() << " reais" << endl;
    for (int i = 0; i < getQuantidadeDeProdutos(); i++)
        getProdutos()[i]->imprimir();
    cout << endl;
}