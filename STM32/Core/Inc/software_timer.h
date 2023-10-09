/*
 * software_timer.h
 *
 *  Created on: Sep 24, 2022
 *      Author: KAI
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

extern int timer_flag[];

void Set_timer(int duration, int arr_pos);
void Run_timer();

#endif /* INC_SOFTWARE_TIMER_H_ */
