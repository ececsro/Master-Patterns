/*
 * Supermarket.h
 *
 *  Created on: 17 nov. 2017
 *      Author: ECECSRO
 */

#ifndef MASTER_PATTERNS_SUPERMARKET_SUPERMARKET_H_
#define MASTER_PATTERNS_SUPERMARKET_SUPERMARKET_H_

#include "State.h"
#include "Stock.h"
#include "Menu.h"
#include "MenuFactory.h"
#include "Ticket.h"


class Supermarket {

	Stock* stock;
	Menu* menu;
	State state;

public:
	Supermarket(State);
	virtual ~Supermarket();
	void sell (void);
};

#endif /* MASTER_PATTERNS_SUPERMARKET_SUPERMARKET_H_ */
