#pragma once 
#include "pessoa.h"

class cliente : public pessoa
{
private:
	uint id;
public:
	data clienteDesde;

	cliente();
	cliente(uint var);
	void setId(uint var);
	void setClienteDesde(data var);
	uint getId();
	data getClienteDesde();
	void mostrar();
};