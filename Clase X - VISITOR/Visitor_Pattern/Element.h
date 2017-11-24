/*
 * Element.h
 *
 *  Created on: 24 nov. 2017
 *      Author: ececsro
 */

#ifndef MASTER_PATTERNS_CLASE_X___VISITOR_VISITOR_PATTERN_ELEMENT_H_
#define MASTER_PATTERNS_CLASE_X___VISITOR_VISITOR_PATTERN_ELEMENT_H_

class Visitor;
#include <string>
using namespace std;

class Element {
public:
	Element();
	virtual ~Element();
	virtual void accept (Visitor*) = 0;
	virtual string className(void) = 0;
};

#endif /* MASTER_PATTERNS_CLASE_X___VISITOR_VISITOR_PATTERN_ELEMENT_H_ */
