/*
 * ClaseOriginal.h
 *
 *  Created on: 23 nov. 2017
 *      Author: ececsro
 */

#ifndef MASTER_PATTERNS_CLASE_X___VISITOR_ORIGINAL_CLASEORIGINAL_H_
#define MASTER_PATTERNS_CLASE_X___VISITOR_ORIGINAL_CLASEORIGINAL_H_

#include <iostream>
#include <string>

#include "Coriginal.h"
#include "Aoriginal.h"
#include "Boriginal.h"
using namespace std;

class ClaseOriginal {
	Aoriginal a;
	Boriginal b;
	Coriginal c;

public:
	ClaseOriginal();
	virtual ~ClaseOriginal();
	void M (void);
	void N (void);
	string className(void);
};

#endif /* MASTER_PATTERNS_CLASE_X___VISITOR_ORIGINAL_CLASEORIGINAL_H_ */
