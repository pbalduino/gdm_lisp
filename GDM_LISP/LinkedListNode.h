#ifndef _LINKEDLISTNODE_H_
#define _LINKEDLISTNODE_H_

#include <string>
#include "Object.h"

class LinkedListNode
{
private:
	pObject value;

public:
	LinkedListNode(pObject item);

	std::string toString();

	LinkedListNode* next;
};

typedef LinkedListNode* pLinkedListNode;

#endif