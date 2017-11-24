/*
 * Menu.h
 *
 *  Created on: 21 nov. 2017
 *      Author: ECECSRO
 */

#ifndef MASTER_PATTERNS_SUPERMARKET_MENU_H_
#define MASTER_PATTERNS_SUPERMARKET_MENU_H_

#include "Stock.h"
#include "Ticket.h"


class Menu {
public:
	Menu();
	virtual ~Menu();
	Ticket* exec(Stock*);
};

#endif /* MASTER_PATTERNS_SUPERMARKET_MENU_H_ */
