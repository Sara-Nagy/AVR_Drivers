/*
 * EXTI_Interface.h
 *
 * Created: 9/27/2021 3:47:53 PM
 *  Author: Sara Ahmed
 */ 


#ifndef EXTI_INTERFACE_H_
#define EXTI_INTERFACE_H_

void EXTI_VoidInit(void);
/*
 * FUNCTION NAME:       EXTI_VoidInit
 * FUNCTION RETURN:     nothing(void)
 * FUNCTION ARGUMENTS:  nothing(void)
 * FUNCTION DESCRIPTION:enable a source form 3 sources of external enterrupt.
 */

void  EXTI_Call_Back(void (*ptr)(void));
/*
 * FUNCTION NAME:       EXTI_Call_Back
 * FUNCTION RETURN:     nothing(void)
 * FUNCTION ARGUMENTS:  pointer to function that take nothing and return nothing
 * FUNCTION DESCRIPTION:pass a callback function address to ISR.
 */


#endif /* EXTI_INTERFACE_H_ */