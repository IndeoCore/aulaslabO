#include <iostream>

using namespace std;

double calculaTaxaDeEntrega(int tipoDePagamento, bool temCupom, int distancia) {
    double taxa;
    if ((tipoDePagamento == 3 && temCupom && distancia <= 5) || distancia < 1){
        return 0;
    } else {
        taxa = distancia * 1.5;
        if (distancia > 5 && tipoDePagamento == 1){
            taxa = taxa * 0.95;
        }
        return taxa;
    }
}

/*
int main(){

    cout << calculaTaxaDeEntrega(2, false, 5);
    return 0;
}
*/