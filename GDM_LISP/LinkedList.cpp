#include <iostream>
#include "LinkedList.h"

LinkedList::LinkedList ()
{
	head = NULL;
	std::cout << "Criando LinkedList" << std::endl;
};

LinkedList::~LinkedList()
{
	std::cout << "Apagando LinkedList" << std::endl;
}

pLinkedList LinkedList::append(pObject item)
{
	pLinkedListNode node = new LinkedListNode(item);

	node->next = head;

	head = node;

	return this;
}

std::string LinkedList::toString()
{
	std::string result = "(";
	pLinkedListNode node = head;

	while(node != NULL)
	{
		result.append(node->toString());
		if(node->next)
		{
			result.append(", ");
		}

		node = node->next;
	}

	result.append(")");

	return result;
}