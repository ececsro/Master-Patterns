/*
 * VisitorN.cpp
 *
 *  Created on: 24 nov. 2017
 *      Author: ececsro
 */

#include "VisitorN.h"

VisitorN::VisitorN() {
	// TODO Auto-generated constructor stub

}

VisitorN::~VisitorN() {
	// TODO Auto-generated destructor stub
}

void VisitorN::visit(A* a) {
	this->show(a);
//	cout << "N working with A " << endl;
}

void VisitorN::visit(B* b) {
	this->show(b);
//	cout << "N working with B " << endl;
}

void VisitorN::visit(C* c) {
	this->show(c);
//	cout << "N working with C " << endl;
}

string VisitorN::className() {
	return "VisitorN";
}
