/*
 * ClassWithVisitor.h
 *
 *  Created on: 24 nov. 2017
 *      Author: ececsro
 */

#ifndef MASTER_PATTERNS_CLASE_X___VISITOR_VISITOR_PATTERN_CLASSWITHVISITOR_H_
#define MASTER_PATTERNS_CLASE_X___VISITOR_VISITOR_PATTERN_CLASSWITHVISITOR_H_

#include "A.h"
#include "B.h"
#include "C.h"
#include "Visitor.h"

class ClassWithVisitor {
	A* a;
	B* b;
	C* c;

public:
	ClassWithVisitor();
	virtual ~ClassWithVisitor();
	void accept (Visitor*);
};

#endif /* MASTER_PATTERNS_CLASE_X___VISITOR_VISITOR_PATTERN_CLASSWITHVISITOR_H_ */
