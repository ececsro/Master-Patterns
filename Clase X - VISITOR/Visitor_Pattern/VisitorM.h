/*
 * VisitorM.h
 *
 *  Created on: 24 nov. 2017
 *      Author: ececsro
 */

#ifndef MASTER_PATTERNS_CLASE_X___VISITOR_VISITOR_PATTERN_VISITORM_H_
#define MASTER_PATTERNS_CLASE_X___VISITOR_VISITOR_PATTERN_VISITORM_H_

#include "Visitor.h"

#include "A.h"
#include "B.h"
#include "C.h"

#include <iostream>
#include <string>
using namespace std;

class VisitorM: public Visitor {
public:
	VisitorM();
	virtual ~VisitorM();
	virtual void visit(A*);
	virtual void visit(B*);
	virtual void visit(C*);
	virtual string className();
};

#endif /* MASTER_PATTERNS_CLASE_X___VISITOR_VISITOR_PATTERN_VISITORM_H_ */
