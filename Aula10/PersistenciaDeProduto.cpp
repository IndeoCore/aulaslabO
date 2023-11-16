#include "PersistenciaDeProduto.h"
#include <fstream>
#include <stdexcept>

PersistenciaDeProduto::PersistenciaDeProduto(string arquivo){
    this->arquivo = arquivo;
}

PersistenciaDeProduto::~PersistenciaDeProduto(){

}

void PersistenciaDeProduto::inserir(Produto *produto){
    ofstream output;
    output.open(this->arquivo, ios_base::app);
    output << produto->getNome() << endl << produto->getPreco() << endl;
    output.close();
}

Pedido* PersistenciaDeProduto::obter(){
    ifstream input;
    input.open(this->arquivo);
    if (input.fail()){
        throw new invalid_argument("Erro de leitura");
        input.close();
    }
    Pedido *pd1 = new Pedido(10);
    double x;
    string y;
    int quantidade = 0;
    input >> y;
    input >> x;

    while(input){     
        Produto *p = new Produto (y, x);
        pd1->adicionar(p);
        quantidade++;
        input >> y;
        input >> x;
    }

    if(!input.eof()){
        throw new logic_error("Arquivo com formatacao inesperada");
        input.close();
    }

    if(quantidade == 0){
        input.close();
        return NULL;
    }

    input.close();
    return pd1;
};