#include "ProdutoNormal.h"
// Faca os includes necessarios
//implemente os métodos

ProdutoNormal::ProdutoNormal(string nome, double preco) : Produto::Produto(nome, preco){

}

ProdutoNormal::~ProdutoNormal(){
    cout << "ProdutoNormal " << this->getNome() << " destruido" << endl;
}

void ProdutoNormal::imprimir() {
    cout << getNome() << " - " << getPreco() << " reais" << endl;
}