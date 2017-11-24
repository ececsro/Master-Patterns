/*
 * C.cpp
 *
 *  Created on: 24 nov. 2017
 *      Author: ececsro
 */

#include "C.h"

C::C() {
	// TODO Auto-generated constructor stub

}

C::~C() {
	// TODO Auto-generated destructor stub
}

void C::accept(Visitor* visitorParam) {
	visitorParam->visit(this);
}

string C::className() {
	return "C";
}
