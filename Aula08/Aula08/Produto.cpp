#include <iostream>
#include "Produto.h"

using namespace std;

int Produto::proximoId = 0;

Produto::Produto(string nome, double preco) : nome(nome), preco(preco) {
    this->id = this->getProximoId();
    Produto::proximoId++;
}

Produto::~Produto() {
}

double Produto::getPreco() {
    return preco;
}
string Produto::getNome() {
    return nome;
}

int Produto::getProximoId(){
    return Produto::proximoId;
}

int Produto::getId(){
    return id;
}

