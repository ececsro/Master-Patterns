/*
 * ClaseOriginal.cpp
 *
 *  Created on: 23 nov. 2017
 *      Author: ececsro
 */

#include "ClaseOriginal.h"

ClaseOriginal::ClaseOriginal() {
	// TODO Auto-generated constructor stub

}

ClaseOriginal::~ClaseOriginal() {
	// TODO Auto-generated destructor stub
}

void ClaseOriginal::M(void) {
	cout << this->className() << ": M working with A " << endl;
	cout << this->className() << ": M working with B " << endl;
	cout << this->className() << ": M working with C " << endl;
}

void ClaseOriginal::N(void) {
	cout << this->className() << ": N working with A " << endl;
	cout << this->className() << ": N working with B " << endl;
	cout << this->className() << ": N working with C " << endl;
}


string ClaseOriginal::className(void) {
	return "ClaseOriginal";
}
