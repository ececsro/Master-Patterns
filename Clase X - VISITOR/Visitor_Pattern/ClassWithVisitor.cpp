/*
 * ClassWithVisitor.cpp
 *
 *  Created on: 24 nov. 2017
 *      Author: ececsro
 */

#include "ClassWithVisitor.h"

ClassWithVisitor::ClassWithVisitor() {
	// TODO Auto-generated constructor stub
	a = new A;
	b = new B;
	c = new C;
}

ClassWithVisitor::~ClassWithVisitor() {
	// TODO Auto-generated destructor stub
}

void ClassWithVisitor::accept(Visitor* visitorParam) {
	a->accept(visitorParam);
	b->accept(visitorParam);
	c->accept(visitorParam);
}
