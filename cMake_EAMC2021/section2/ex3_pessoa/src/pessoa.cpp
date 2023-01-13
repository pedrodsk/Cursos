#include "pessoa.h"

pessoa::pessoa(){}
pessoa::pessoa(const char* var){this->nome=std::string{var}; }
pessoa::~pessoa(){}
std::string pessoa::getNome(){return this->nome;}
std::string pessoa::getEstadoCivil(){return this->estado_civil;}
uint pessoa::getAltura(){return this->altura;}
uint pessoa::getIdade(){return this->idade;}
void pessoa::setNome(std::string var){this->nome=var;}
void pessoa::setEstadoCivil(std::string var){this->estado_civil=var;}
void pessoa::setAltura(uint var){this->altura=var;}
void pessoa::setIdade(uint var){this->idade=var;}