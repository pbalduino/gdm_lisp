#ifndef _LINKEDLIST_H_

#define _LINKEDLIST_H_

#include "Object.h"
#include "LinkedListNode.h"

class LinkedList : public Object
{
private:
	pLinkedListNode head;

public:
	LinkedList();

	~LinkedList();

	LinkedList* append(pObject item);

	std::string toString();
};

typedef LinkedList* pLinkedList;

#endif