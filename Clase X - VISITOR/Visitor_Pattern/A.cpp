/*
 * A.cpp
 *
 *  Created on: 24 nov. 2017
 *      Author: ececsro
 */

#include "A.h"

A::A() {
	// TODO Auto-generated constructor stub

}

A::~A() {
	// TODO Auto-generated destructor stub
}

void A::accept(Visitor* visitorParam) {
	visitorParam->visit(this);
}

string A::className() {
	return "A";
}
