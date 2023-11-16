#ifndef COMBO_H
#define COMBO_H

// Faca os includes necessarios
#include <string>
#include "Produto.h"

using namespace std;

class Combo: public Produto {
protected:
    //Inclua aqui os atributos necessarios
    double desconto;
    int quantidadeDeProdutos;
    Produto **produtos;
public:
    Combo(string nome, Produto **p, int quantidadeDeProdutos, double desconto);
    virtual ~Combo();
    Produto **getProdutos();
    int getQuantidadeDeProdutos();
    double getDesconto();
};
#endif