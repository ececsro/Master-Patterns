/*
 * VisitorM.cpp
 *
 *  Created on: 24 nov. 2017
 *      Author: ececsro
 */

#include "VisitorM.h"

VisitorM::VisitorM() {
	// TODO Auto-generated constructor stub

}

VisitorM::~VisitorM() {
	// TODO Auto-generated destructor stub
}

void VisitorM::visit(A* a) {
	this->show(a);
}

void VisitorM::visit(B* b) {
	this->show(b);
}

void VisitorM::visit(C* c) {
	this->show(c);
}

string VisitorM::className() {
	return "VisitorM";
}
