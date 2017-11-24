/*
 * Ticket.h
 *
 *  Created on: 21 nov. 2017
 *      Author: ECECSRO
 */

#ifndef MASTER_PATTERNS_SUPERMARKET_TICKET_H_
#define MASTER_PATTERNS_SUPERMARKET_TICKET_H_

class Ticket {
public:
	Ticket();
	virtual ~Ticket();
	void close(void);
};

#endif /* MASTER_PATTERNS_SUPERMARKET_TICKET_H_ */
