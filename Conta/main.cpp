#include "ContaCorrente.h"
#include "Poupanca.h"
#include "ContaEspecial.h"

int main(){

	ContaCorrente cc = ContaCorrente("Jorge Luiz", 1234, 1250, 1500);
	Poupanca pp = Poupanca("Joao Lucas", 4321, 1752, 1, 3);
	ContaEspecial ce = ContaEspecial("Matheus Correia", 4567, 3250, 4000);

	cc.definirLimite();
	ce.definirLimite();

	cc.sacar(250);
	ce.sacar(250);

	pp.render();

	cc.depositar(1250);
	ce.depositar(729);

	cc.print();
	pp.print();
	ce.print();

	return 0;
}