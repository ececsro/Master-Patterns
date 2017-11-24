/*
 * B.cpp
 *
 *  Created on: 24 nov. 2017
 *      Author: ececsro
 */

#include "B.h"

B::B() {
	// TODO Auto-generated constructor stub

}

B::~B() {
	// TODO Auto-generated destructor stub
}

void B::accept(Visitor* visitorParam) {
	visitorParam->visit(this);
}

string B::className() {
	return "B";
}
