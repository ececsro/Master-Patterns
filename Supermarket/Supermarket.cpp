/*
 * Supermarket.cpp
 *
 *  Created on: 17 nov. 2017
 *      Author: ECECSRO
 */

#include "Supermarket.h"


Supermarket::Supermarket(State stateParam) {
	this->state = stateParam;
	this->stock = new (Stock);
	this->menu = (new MenuFactory())->getMenu(this->state);
}

Supermarket::~Supermarket() {
	// TODO Auto-generated destructor stub
}

void Supermarket::sell(void) {
	do {
		Ticket* ticket = menu->exec(stock);
		ticket->close();
	} while (true);
}
