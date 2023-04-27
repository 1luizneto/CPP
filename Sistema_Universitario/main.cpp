#include "Interface.hpp"

using namespace std ;

int main() {
    //shared_ptr<Funcionario> funcionario01 = make_shared<Funcionario>(123, "Luiz", 20, 1200);
    //cout << funcionario01->print() << endl;

    //shared_ptr<Professor> professor01 = make_shared<Professor>(125,"Luiz",20,1200, 920);
    //cout << professor01->print() << endl;

    //shared_ptr<Gerente> gerente01 = make_shared<Gerente>(100,"Luiz",20,2000,500);
    //cout << gerente01->print() << endl;

    shared_ptr<Universidade> uni = make_shared<Universidade>();
    unique_ptr<Interface> menu = make_unique<Interface>(uni);

    menu->exibirMenu();

    return 0;
}