/*
 * update7SEG.h
 *
 *  Created on: Oct 8, 2024
 *      Author: Mr Duc Anh
 */
#include "main.h"

#ifndef INC_UPDATE7SEG_H_
#define INC_UPDATE7SEG_H_

const int MAX_LED = 4;
int index_led = 0;
int led_buffer [4] = {1, 2, 3, 4};
void update7SEG ( int index );

#endif /* INC_UPDATE7SEG_H_ */
