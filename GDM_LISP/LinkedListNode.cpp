#include "LinkedListNode.h"

LinkedListNode::LinkedListNode(pObject item)
{
	value = item;
	next = NULL;
}

std::string LinkedListNode::toString()
{
	return value->toString();
}