/*
 * B.h
 *
 *  Created on: 24 nov. 2017
 *      Author: ececsro
 */

#ifndef MASTER_PATTERNS_CLASE_X___VISITOR_VISITOR_PATTERN_B_H_
#define MASTER_PATTERNS_CLASE_X___VISITOR_VISITOR_PATTERN_B_H_

#include "Element.h"
#include "Visitor.h"
#include <string>


class B: public Element {
public:
	B();
	virtual ~B();
	void accept (Visitor*);
	virtual string className(void);
};

#endif /* MASTER_PATTERNS_CLASE_X___VISITOR_VISITOR_PATTERN_B_H_ */
