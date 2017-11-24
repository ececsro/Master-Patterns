/*
 * A.h
 *
 *  Created on: 24 nov. 2017
 *      Author: ececsro
 */

#ifndef MASTER_PATTERNS_CLASE_X___VISITOR_VISITOR_PATTERN_A_H_
#define MASTER_PATTERNS_CLASE_X___VISITOR_VISITOR_PATTERN_A_H_

#include "Element.h"
#include "Visitor.h"
#include <string>


class A: public Element {
public:
	A();
	virtual ~A();
	void accept (Visitor*);
	virtual string className(void);
};

#endif /* MASTER_PATTERNS_CLASE_X___VISITOR_VISITOR_PATTERN_A_H_ */
