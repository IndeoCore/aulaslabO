#include "Produto.h"

#include <iostream>

using namespace std;

// IMPLEMENTAR CONSTRUTOR

Produto::Produto(string nome, double preco) : nome(nome), preco(preco) {}

Produto::~Produto(){
    cout << "Produto " << this->getNome() << " destruido" << endl;
}

string Produto::getNome() {
    return nome;
}

double Produto::getPreco() {
    return preco;
}

void Produto::imprimir(){
    cout << nome << " - " << preco << " reais cada" << endl;
}

