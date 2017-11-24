/*
 * MenuFactory.cpp
 *
 *  Created on: 21 nov. 2017
 *      Author: ECECSRO
 */

#include "MenuFactory.h"

MenuFactory::MenuFactory() {
	// TODO Auto-generated constructor stub

}

MenuFactory::~MenuFactory() {
	// TODO Auto-generated destructor stub
}

Menu* MenuFactory::getMenu(State state) {
	Menu* menu = new Menu();
	return (menu);
}
