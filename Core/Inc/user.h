/*
 * user.h
 *
 *  Created on: 30.9.2024
 *      Author: boris
 */

#ifndef INC_USER_H_
#define INC_USER_H_

#include "main.h"

#define MAX_USERS 10

typedef struct{
	uint8_t rfidCode[11];
	int balance;
} user_t;

extern user_t users[MAX_USERS];

user_t* findUserByRFID(const uint8_t* rfid);
void updateUserBalance(const uint8_t* rfid, int amount);
int getBalance(const uint8_t* rfid);
void initializeUsers(void);

#endif /* INC_USER_H_ */
