#pragma once 
#include <iostream>

class data
{
private:
	uint dia;
	uint mes;
	uint ano;
public:
	void setDia(uint var);
	void setMes(uint var);
	void setAno(uint var);
	uint getDia();
	uint getMes();
	uint getAno();
};