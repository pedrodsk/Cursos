#include "cliente.h"
#include <iostream>

int main()
{
	cliente cli(1);
	cli.setNome(std::string{"Maria Silva Alcantra"});
	cli.setAltura(150);
	cli.nascimento.setDia(12);
	cli.nascimento.setMes(4);
	cli.nascimento.setAno(1998);
	cli.clienteDesde.setDia(24);
	cli.clienteDesde.setMes(7);
	cli.clienteDesde.setAno(2019);
	cli.mostrar();
}
