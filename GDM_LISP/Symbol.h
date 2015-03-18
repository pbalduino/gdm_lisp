#ifndef _SYMBOL_H_
#define _SYMBOL_H_

#include "Object.h"

class Symbol : public Object
{
private:
	std::string name;

public:
	Symbol(const std::string name);

	std::string toString();
};

typedef Symbol* pSymbol;

#endif