/*
 * DC_MOTOR.c
 *
 * Created: 3/31/2022 11:07:12 PM
 *  Author: Sara Ahmed
 */ 
#include  "../LIB/BIT_MATH.h"
#include  "../LIB/STD_TYPES.h"
#include  "DC_MOTOR_Config.h"
#include  "../DIO/DIO_Interface.h"
 
 void MOTOR_VoidInit(void)
 {
	 DIO_VoidSetPinDirection(MOTOR_PORT,MOTOR_IN1,DIO_OUT);               //IN1 OUTPUT
	 DIO_VoidSetPinDirection(MOTOR_PORT,MOTOR_IN2,DIO_OUT);               //IN2 OUTPUT
	 DIO_VoidSetPinDirection(MOTOR_PORT,MOTOR_PIN_ENABLE,DIO_OUT);        //Enable OUTPUT
	 DIO_VoidSetPinValue(MOTOR_PORT,MOTOR_PIN_ENABLE,DIO_HIGH);	          //Enable =1
 }
 
 void MOTOR_VoidSetDirection(u8 u8cpy_direction)
 {
	 if(u8cpy_direction==1) //CW
	 {
		  DIO_VoidSetPinValue(MOTOR_PORT,MOTOR_IN1,DIO_HIGH);     // IN1=1
		  DIO_VoidSetPinValue(MOTOR_PORT,MOTOR_IN2,DIO_LOW);      //IN2=0
	 }
	 else if(u8cpy_direction==2) //CCW
	 {
		  DIO_VoidSetPinValue(MOTOR_PORT,MOTOR_IN1,DIO_LOW);      // IN1=0
		  DIO_VoidSetPinValue(MOTOR_PORT,MOTOR_IN2,DIO_HIGH);     //IN2=1
	 }
	 else if(u8cpy_direction==3) //breaking
	 {
		  DIO_VoidSetPinValue(MOTOR_PORT,MOTOR_IN1,DIO_HIGH);       //IN1=1         OR    IN1=0
		  DIO_VoidSetPinValue(MOTOR_PORT,MOTOR_IN2,DIO_HIGH);       //IN2=1          OR    IN2=0
	 }
 }

void MOTOR_VoidSetSpeed(u8 u8cpy_speed)
{

}


