#include "Symbol.h"

Symbol::Symbol(const std::string name)
{
	this->name = name;
}

std::string Symbol::toString()
{
	return name;
}