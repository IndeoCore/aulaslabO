#include "Produto.h"

using namespace std;

void Produto::imprimir() {
    cout << this->nome << " - " << this->preco << " reais" << endl;
}

string Produto::getNome(){
    return nome;
}

void Produto::setNome(string nome){
    this->nome = nome;
}

double Produto::getPreco(){
    return preco;
}

void Produto::setPreco(double preco){
    this->preco = preco;
}