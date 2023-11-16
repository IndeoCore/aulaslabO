#include "Combo.h"

Combo::Combo(string nome, Produto **p, int quantidadeDeProdutos, double desconto) : Produto (nome, 0)   {
    this->produtos = p;
    this->quantidadeDeProdutos = quantidadeDeProdutos;
    this->desconto = desconto;
    for(int i = 0; i < quantidadeDeProdutos; i++){
        this->preco += produtos[i]->getPreco();
    }
    this->preco = this->preco*(1 - desconto);
}

Produto **Combo::getProdutos(){
    return produtos;
}

int Combo::getQuantidadeDeProdutos(){
    return quantidadeDeProdutos;
}

double Combo::getDesconto(){
    return desconto;
}

Combo::~Combo(){
    cout << "Combo destruido" << endl;
}