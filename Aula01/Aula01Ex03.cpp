#include <iostream>
#include <string>

using namespace std;

double calcularPrecoTotal(string produtos[], double precos[], int quantidadeDeProdutos, string produtosNaSacola[], int quantidadeDeProdutosNaSacola) {
    double soma;
    for(int i = 0; i < quantidadeDeProdutosNaSacola; i++){
        for(int j = 0; j < quantidadeDeProdutos; j++){
            if(produtosNaSacola[i] == produtos[j]){
                soma += precos[j];
            }
        }
    }
    return soma;
}

/*
int main(){
    return 0;
}
*/