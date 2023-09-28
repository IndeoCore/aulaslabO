#include <iostream>

using namespace std;

int pot(int a, int b){
    int aux = 1;
    for (int i = 0; i < b; i++){
        aux = a * aux;
    }
    return aux;
}

int main(){
    int a, b;
    cin >> a;
    cin >> b;
    cout << a << " " << b << endl;
    
    cout << pot(a, b);
    return 0;
}