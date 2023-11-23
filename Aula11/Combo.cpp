#include "Combo.h"
#include <stdexcept>
#include <iostream>

using namespace std;

Combo::Combo(string nome) : Produto(nome, 0){
    this->produtos = new vector<Produto*>();

}

Combo::~Combo() {
    while(!produtos->empty()){
        produtos->pop_back(); 
    }
    delete produtos;
}

void Combo::adicionar(Produto *p) {
    for (unsigned int i = 0; i < this->produtos->size(); i++){
        if (produtos->at(i) == p){
            throw new invalid_argument("Produto ja existe");
        }
    }
    produtos->push_back(p);
}

double Combo::getPreco() {
    double soma = 0;
    for (unsigned int i = 0; i < produtos->size(); i++){
        soma += produtos->at(i)->getPreco();
    }
    return soma;
}

vector<Produto*>* Combo::getProdutos() {
    return produtos;
}


void Combo::imprimir() {
    cout << nome << " - " << getPreco() << " reais cada" << endl;
    for (unsigned int i = 0; i < produtos->size(); i++){
        produtos->at(i)->imprimir();
    }
}