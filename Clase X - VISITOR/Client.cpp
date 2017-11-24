/*
 * Client.cpp
 *
 *  Created on: 23 nov. 2017
 *      Author: ececsro
 */

#include "Client.h"

Client::Client() {
	// TODO Auto-generated constructor stub
	ClaseOriginal ObjetoClaseOriginal;
	ObjetoClaseOriginal.M();
	ObjetoClaseOriginal.N();

	VisitorM* visitorM = new VisitorM;
	VisitorN* visitorN = new VisitorN;

	ClassWithVisitor ObjectClassWithVisitor;
	ObjectClassWithVisitor.accept(visitorM);
	ObjectClassWithVisitor.accept(visitorN);


}

Client::~Client() {
	// TODO Auto-generated destructor stub
}

