#include <iostream>
#include "cliente.h"

cliente::cliente(){}
cliente::cliente(uint var){this->id=var;}
void cliente::setId(uint var){this->id=var;}
void cliente::setClienteDesde(data var){this->clienteDesde=var;}
uint cliente::getId(){return id;}
data cliente::getClienteDesde(){return clienteDesde;}
void cliente::mostrar()
{
	std::cout << "Cliente: " << this->getNome() << '\n';
	std::cout << "ID: " << this->getId() << '\n'; 
	std::cout << "Altura: " << this->getAltura() << "cm\n";
	std::cout << "Data de nascimento: " << this->nascimento.getDia() << '/' << this->nascimento.getMes() << '/' << this->nascimento.getAno() << '\n';
	std::cout << "Cliente desde: " << this->clienteDesde.getDia() << '/' << this->clienteDesde.getMes() << '/' << this->clienteDesde.getAno() << '\n';

}