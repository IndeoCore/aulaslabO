#ifndef PROD_H
#define PROD_H
#include <iostream>
#include <string>
using namespace std;

class Produto {
protected:
    string nome;
    double preco;
public:
    Produto(string nome, double preco);
    virtual ~Produto();
    double getPreco();
    string getNome();
    void imprimir();
};

#endif