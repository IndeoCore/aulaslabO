// Use os includes necessarios.
#include <iostream>
#include <string>

using namespace std;

// Exercicio 1
string* recomendaProduto(string produtos[], int numeroDePedidos[], 
                         double precos[], int quantidade) {
    string* escolhido;
    int numpedidos = numeroDePedidos[0];
    double precosalvo = precos[0];
    escolhido = &produtos[0];
    for(int i = 1; i < quantidade; i++){
        if (numeroDePedidos[i] > numpedidos){
            escolhido = &produtos[i];
            precosalvo = precos[i];
            numpedidos = numeroDePedidos[i];
        } else if(numeroDePedidos[i] == numpedidos && precos[i] > precosalvo){
            escolhido = &produtos[i];
            precosalvo = precos[i];
        }
    }
    return escolhido;
}

// Exercicio 2
double calcularEstatisticas(string categorias[], double precos[], int quantidade,
                            string categoria, double* precoMaximo, double& precoMinimo) {
    *precoMaximo = 0;
    precoMinimo = 0;
    int p = 1;
    double soma;
    for(int i = 0; i < quantidade; i++){
        if(categoria == categorias[i]){
            if (*precoMaximo == 0 && precoMinimo == 0){
                *precoMaximo = precos[i];
                precoMinimo = precos[i];
            } else { 
                if (precos[i] < precoMinimo){
                    precoMinimo = precos[i];
                }
                if (precos[i] > *precoMaximo){
                    *precoMaximo = precos[i];
                }
                p++;
            }
            soma += precos[i];
        }
    }
    return soma/p;
    
}

////////////////////////////////////////////
// REMOVA A MAIN ANTES DE ENVIAR AO JUDGE //
////////////////////////////////////////////


int main() {
    string produtos[] = {"X-Burger", "X-Salada", "X-Bacon", "X-Tudo"};
    int numeroDePedidos[] = {120, 110, 120, 120};
    double precos[] = {30, 24.5, 35.90, 20};
    int quantidade = 4;

    cout << *recomendaProduto(produtos, numeroDePedidos, precos, quantidade);
    
}
