/*
 * DC_MOTOR_Interface.h
 *
 * Created: 3/31/2022 11:09:05 PM
 *  Author: Sara Ahmed
 */ 


#ifndef DC_MOTOR_INTERFACE_H_
#define DC_MOTOR_INTERFACE_H_

#define MOTOR_DIRECTION_CW         1
#define MOTOR_DIRECTION_CCW        2

void MOTOR_VoidInit(void);
/*
 * FUNCTION NAME:       MOTOR_VoidInit
 * FUNCTION RETURN:     nothing(void)
 * FUNCTION ARGUMENTS:  nothing(void).
 * FUNCTION DESCRIPTION:set the pins of the motor.
 */
void  MOTOR_VoidSetDirection(u8 u8cpy_direction);
/*
 * FUNCTION NAME:       MOTOR_VoidSetDirection
 * FUNCTION RETURN:     nothing(void)
 * FUNCTION ARGUMENTS:  nothing(void).
 * FUNCTION DESCRIPTION:control the direction of the motor.
 */
void MOTOR_VoidSetSpeed(u8 u8cpy_speed);
/*
 * FUNCTION NAME:       MOTOR_VoidSetDirection
 * FUNCTION RETURN:     nothing(void)
 * FUNCTION ARGUMENTS:  nothing(void).
 * FUNCTION DESCRIPTION:control the speed of the motor.
 */



#endif /* DC_MOTOR_INTERFACE_H_ */