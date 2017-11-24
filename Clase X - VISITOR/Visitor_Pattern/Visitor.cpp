/*
 * Visitor.cpp
 *
 *  Created on: 24 nov. 2017
 *      Author: ececsro
 */

#include "Visitor.h"

Visitor::Visitor() {
	// TODO Auto-generated constructor stub

}

Visitor::~Visitor() {
	// TODO Auto-generated destructor stub
}

void Visitor::show(Element* element) {
	cout << this->className() << " working with " << element->className() << endl;
}
