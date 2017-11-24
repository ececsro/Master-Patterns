/*
 * Visitor.h
 *
 *  Created on: 24 nov. 2017
 *      Author: ececsro
 */

#ifndef MASTER_PATTERNS_CLASE_X___VISITOR_VISITOR_PATTERN_VISITOR_H_
#define MASTER_PATTERNS_CLASE_X___VISITOR_VISITOR_PATTERN_VISITOR_H_

class A;
class B;
class C;
#include "Element.h"

#include <iostream>
using namespace std;

class Visitor {
public:
	Visitor();
	virtual ~Visitor();
	virtual void visit(A*) = 0;
	virtual void visit(B*) = 0;
	virtual void visit(C*) = 0;

	void show(Element*);
	virtual string className() = 0;
};

#endif /* MASTER_PATTERNS_CLASE_X___VISITOR_VISITOR_PATTERN_VISITOR_H_ */
