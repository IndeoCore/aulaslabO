#ifndef COMBO_H
#define COMBO_H
#include "Produto.h"
#include <string>
#include <vector>

using namespace std;

//Modifique a classe Combo para que seus produtos estejam em um container vector

class Combo : public Produto {
private:
    vector <Produto*>* produtos;
public:
    Combo(string nome);
    virtual ~Combo();

    void adicionar(Produto* p);
    double getPreco();
    vector <Produto*>* getProdutos();

    void imprimir();
};

#endif