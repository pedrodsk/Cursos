#pragma once 
#include "data.h"
#include <string>

class pessoa
{
private:
	std::string nome;
	std::string estado_civil;
	uint altura;
	uint idade;
public:
	data nascimento;

	pessoa();
	pessoa(const char* var);
	virtual ~pessoa();
	std::string getNome();
	std::string getEstadoCivil();
	uint getAltura();
	uint getIdade();
	void setNome(std::string var);
	void setEstadoCivil(std::string var);
	void setAltura(uint var);
	void setIdade(uint var);
};