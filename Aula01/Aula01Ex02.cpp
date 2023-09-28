#include <iostream>
#include <string>

using namespace std;


bool produtoEstaDisponivel(string produtos[], int quantidadeDisponivel[], int tamanhoDaLista, string produtoBuscado, int quantidadeBuscada) {
    for(int i = 0; i < tamanhoDaLista; i++){
        if(produtoBuscado == produtos[i] && quantidadeBuscada <= quantidadeDisponivel[i]){
            return true;
        } 
    }
    return false;
}

/*
int main() {
    return 0;
}
*/
