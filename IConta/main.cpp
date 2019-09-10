#include <iostream>
#include "Conta.h"
#include "ContaEspecial.h"

using namespace std;

int main(){

	Conta c1 = Conta("Jorge Luiz", 5200, "34462-1", 4250);
	ContaEspecial ce1 = ContaEspecial("Joao Lucas", 3000, "1514-2", 2341);

	c1.definirLimite();
	ce1.definirLimite();

	c1.sacar(2750);
	ce1.sacar(4537);

	c1.depositar(150);
	ce1.depositar(726);
	
	c1.print();
	ce1.print();

	return 0;
}