#include <iostream>

using namespace std;

class Produto {
public:
    string nome = "";
    double preco = 0.0;
    double desconto = 0.0;
    double calcularValorDeVenda();
    void imprimir();
};

double Produto::calcularValorDeVenda(){
    // Calcula o valor final do preco com desconto
    double precoFinal;
    precoFinal = this->preco - (this->desconto * this->preco);
    return precoFinal;
}

void Produto::imprimir(){
    // Imprime o preco final do produto (com desconto)
    cout << "Produto: " << this->nome << " custa " << this->calcularValorDeVenda() << endl;
}

class Pedido {
public:
    Produto *produto1 = nullptr;
    Produto *produto2 = nullptr;
    int quantidade1 = 0;
    int quantidade2 = 0;

    bool adicionar(Produto *produto, int quantidade);
    double calcularPrecoTotal();
    void imprimir();
};

bool Pedido::adicionar(Produto *produto, int quantidade){
    // Atribui uma certa quantidade de um certo produto ao pedido
    if(this->produto1 == nullptr){
        this->produto1 = produto;
        this->quantidade1 = quantidade;
        return true;   
    } else if (this->produto2 == nullptr) {
        this->produto2 = produto;
        this->quantidade2 = quantidade;
        return true;
    } 
    
    return false;
    
}

double Pedido::calcularPrecoTotal(){
    // Calcula o preco total do pedido baseado nos preços e quantidades dos produtos 1 e 2
    double precoTotal = 0.0, preco1 = 0.0, preco2 = 0.0;
    if(this->produto1 != nullptr){
        preco1 = this->produto1->calcularValorDeVenda() * quantidade1;
    }
    if(this->produto2 != nullptr){
        preco2 = this->produto2->calcularValorDeVenda() * quantidade2;
    }
    precoTotal = preco1 + preco2;
    return precoTotal;
}

void Pedido::imprimir(){
    // Imprime o valor final do pedido, aplicando os devidos descontos
    cout << "Pedido: Preco total: " << this->calcularPrecoTotal() << endl;
}

void teste1() {
    // Implemente a funcao teste do exercicio 01 segundo o enunciado
    Produto *tv = new Produto;
    tv->nome = "TV";
    tv->preco = 1000.0;
    tv->desconto = 0.2;
    tv->imprimir();
}

void teste2() {
    // Implemente a funcao teste do exercicio 02 segundo o enunciado
    Produto *tv = new Produto;
    Produto *sup = new Produto;
    Pedido *ped1 = new Pedido;
    tv->nome = "TV";
    tv->preco = 1000.0;
    tv->desconto = 0.2;
    tv->imprimir();
    sup->nome = "Suporte para TV";
    sup->preco = 150.0;
    sup->desconto = 0.05;
    sup->imprimir();
    ped1->adicionar(tv, 1);
    ped1->adicionar(sup, 2);
    ped1->imprimir();
}

/*
int main() {
    teste2();
    return 0;
}
*/
