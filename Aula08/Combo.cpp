#include "Combo.h"

Combo::Combo(string nome, int quantidadeMaxima) : Produto(nome, preco) {
	this->nome = nome;
	this->quantidadeDeProdutos = 0;
	this->quantidadeMaxima = quantidadeMaxima;
	this->produtosNormais = new ProdutoNormal*[quantidadeMaxima];
}

Combo::~Combo() {
	cout << "Combo " << this->getNome() << " destruido" << endl;
	for(int i = 0; i < quantidadeDeProdutos; i++){
		delete produtosNormais[i];
	}
	delete[] produtosNormais;
}

bool Combo::adicionar(ProdutoNormal *ep) {
	if(quantidadeDeProdutos >= quantidadeMaxima){
		return false;
	}
	produtosNormais[quantidadeDeProdutos] = ep;
	quantidadeDeProdutos++;
	return true;
}

ProdutoNormal** Combo::getProdutosNormais() {
	return produtosNormais;
}

int Combo::getQuantidadeDeProdutosNormais() {
	return quantidadeDeProdutos;
}

// Veja outros metodos necessarios

double Combo::getPreco(){
	double precoFinal = 0;
	for(int i = 0; i < quantidadeDeProdutos; i++){
		precoFinal += produtosNormais[i]->getPreco();
	}
	return precoFinal;
}

void Combo::imprimir(){
	cout << this->getNome() << " - " << this->getPreco() << " reais - " << quantidadeDeProdutos << " produtos normais" << endl; 
	for(int i = 0; i < quantidadeDeProdutos; i++){
		cout << "\t" << i+1 << ": ";
		produtosNormais[i]->imprimir();
	}
}