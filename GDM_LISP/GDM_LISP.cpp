// GDM_LISP.cpp : Defines the entry point for the console application.
//
#include <iostream>

#include "stdafx.h"
#include "LinkedList.h"
#include "Symbol.h"

int _tmain(int argc, _TCHAR* argv[])
{
	std::cout << "(def lst (list))        ; ";

	pLinkedList list = new LinkedList();

	std::cout <<  std::endl;

	std::cout << "lst                     ; " << list->toString() << std::endl << std::endl;

	std::cout << "(cons lst 'a)           ; " << (list->append(new Symbol("a")))->toString() << std::endl << std::endl;

	std::cout << "(cons (cons lst 'a) 'b) ; " << (list->append(new Symbol("b")))->toString() << std::endl << std::endl;

	std::cout << "; ";

	delete list;

	std::cin.get();

	return 0;
}

