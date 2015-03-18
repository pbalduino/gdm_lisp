#ifndef _OBJECT_H_
#define _OBJECT_H_

#include <sstream>
#include <string>


class Object
{
public:
	virtual std::string toString()
	{
		std::ostringstream ss;
		ss << "<Object:" << this << ">";
		return ss.str();
	}
};

typedef Object* pObject;

#endif