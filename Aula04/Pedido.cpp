#include "Pedido.h"

using namespace std;

bool Pedido::adicionar(Produto* produto){
    if(quantidade == MAXIMO_DE_PRODUTOS){
        return false;
    }
    for(int i = 0; i < quantidade; i++){
        if(produtos[i] == produto){
            return false;
        }
    }
    this->produtos[quantidade] = produto;
    quantidade++;
    return true;
}

double Pedido::getPrecoTotal(){
    double precoTotal = 0;
    if(quantidade == 0){
        return 0;
    }
    for (int i = 0; i < quantidade; i++){
        precoTotal += produtos[i]->getPreco();
    }
    return precoTotal;
}

void Pedido::imprimir(){
    cout << "Pedido com " << quantidade << " produtos - " << getPrecoTotal() << " reais no total" << endl;
    for (int i = 0; i < quantidade; i++){
        cout << produtos[i]->getNome() << " - " << produtos[i]->getPreco() << " reais" << endl;
    }
}