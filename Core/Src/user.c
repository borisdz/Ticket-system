/*
 * user.c
 *
 *  Created on: 30.9.2024
 *      Author: boris
 */
#include "user.h"
#include <string.h>

user_t users[MAX_USERS] = { 0 };

void initializeUsers(void) {
	uint8_t rfid1[10] = {0x12, 0x34, 0x56, 0x78, 0x90, 0xAB, 0xCD, 0xEF, 0x00, 0x01};
	    memcpy(users[0].rfidCode, rfid1, 10);
	    users[0].balance = 100;


	    uint8_t rfid2[10] = {0x98, 0x76, 0x54, 0x32, 0x10, 0xFE, 0xDC, 0xBA, 0x09, 0x08};
	    memcpy(users[1].rfidCode, rfid2, 10);
	    users[1].balance = 200;
}

user_t* findUserByRFID(const uint8_t* rfid) {
    for (int i = 0; i < MAX_USERS; i++) {
        // Compare the RFID code using memcmp for binary comparison
        if (memcmp(users[i].rfidCode, rfid, 10) == 0) {
            return &users[i];  // Return pointer to the user if RFID matches
        }
    }
    return NULL;  // User not found
}


void updateUserBalance(const uint8_t* rfid, int amount) {
    user_t* user = findUserByRFID(rfid);
    if (user != NULL) {
        user->balance += amount;  // Adjust the user's balance
    }
}

int getBalance(const uint8_t *rfid) {
	user_t* user = findUserByRFID(rfid);
	return user->balance;
}
