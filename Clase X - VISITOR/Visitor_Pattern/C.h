/*
 * C.h
 *
 *  Created on: 24 nov. 2017
 *      Author: ececsro
 */

#ifndef MASTER_PATTERNS_CLASE_X___VISITOR_VISITOR_PATTERN_C_H_
#define MASTER_PATTERNS_CLASE_X___VISITOR_VISITOR_PATTERN_C_H_

#include "Element.h"
#include "Visitor.h"
#include <string>


class C: public Element {
public:
	C();
	virtual ~C();
	void accept (Visitor*);
	virtual string className(void);
};

#endif /* MASTER_PATTERNS_CLASE_X___VISITOR_VISITOR_PATTERN_C_H_ */
