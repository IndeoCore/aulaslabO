#include <iostream>
#include <stdexcept>

using namespace std;

class ProdutoIndisponivel : public logic_error {
    public:
        ProdutoIndisponivel(string mensagem);
        ~ProdutoIndisponivel();
};