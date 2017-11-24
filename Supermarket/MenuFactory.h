/*
 * MenuFactory.h
 *
 *  Created on: 21 nov. 2017
 *      Author: ECECSRO
 */

#ifndef MASTER_PATTERNS_SUPERMARKET_MENUFACTORY_H_
#define MASTER_PATTERNS_SUPERMARKET_MENUFACTORY_H_

#include "Menu.h"
#include "State.h"

class MenuFactory {
public:
	MenuFactory();
	virtual ~MenuFactory();
	Menu* getMenu(State);

};

#endif /* MASTER_PATTERNS_SUPERMARKET_MENUFACTORY_H_ */
