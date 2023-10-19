#ifndef PROD_H
#define PROD_H

#include <iostream>
#include <string>
using namespace std;

class Produto {
protected:
    string nome;
    double preco;
    int id;
private:
    static int proximoId;
public:
    Produto(string nome, double preco);
    virtual ~Produto();
    
    double getPreco();
    string getNome();
    static int getProximoId();
    int getId();
    
    virtual void imprimir() = 0;// Torne a classe abstrata
};
#endif