/*
 * VisitorN.h
 *
 *  Created on: 24 nov. 2017
 *      Author: ececsro
 */

#ifndef MASTER_PATTERNS_CLASE_X___VISITOR_VISITOR_PATTERN_VISITORN_H_
#define MASTER_PATTERNS_CLASE_X___VISITOR_VISITOR_PATTERN_VISITORN_H_

#include "Visitor.h"

#include "A.h"
#include "B.h"
#include "C.h"

#include <iostream>
using namespace std;

class VisitorN: public Visitor {
public:
	VisitorN();
	virtual ~VisitorN();
	virtual void visit(A*);
	virtual void visit(B*);
	virtual void visit(C*);
	virtual string className();

};

#endif /* MASTER_PATTERNS_CLASE_X___VISITOR_VISITOR_PATTERN_VISITORN_H_ */
