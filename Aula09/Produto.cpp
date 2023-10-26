//Faca os includes necessarios

#include "Produto.h"

#include <iostream>
#include <stdexcept>

using namespace std;

Produto::Produto(string nome, double preco){
    if (preco <= 0){
        throw new invalid_argument ("Preco invalido");
    }
    this->preco = preco;
    this->nome = nome;
    disponivel = true;
}

Produto::~Produto() {
    cout << "Produto " << nome << " destruido" << endl;
}

string Produto::getNome() {
    return nome;
}

double Produto::getPreco() {
    if(this->disponivel == false){    
        throw new ProdutoIndisponivel("Produto indisponivel");
    }
    return preco;
}

bool Produto::getDisponivel() {
    return disponivel;
}

void Produto::setDisponivel(bool disponivel) {
    this->disponivel = disponivel;
}

void Produto::imprimir(){
    cout << nome << " - " << getPreco() << " reais cada" << endl;
}
