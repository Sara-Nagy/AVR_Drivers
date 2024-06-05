/*
 * EXTI_Config.h
 *
 * Created: 9/27/2021 3:47:26 PM
 *  Author: Sara Ahmed
 */ 


#ifndef EXTI_CONFIG_H_
#define EXTI_CONFIG_H_
    //INT0
	/*
EXTI_RISING_EDGE   
EXTI_FALLING_EDGE         
EXTI_ONCHANGE             
EXTI_LOWLEVEL             
*/
#define EXTI_INT0                        DISABLE
#define EXTI_INT0_INT1_SENSEMODE         EXTI_FALLING_EDGE
   //INT1
   	/*
   	EXTI_RISING_EDGE
   	EXTI_FALLING_EDGE
   	EXTI_ONCHANGE
   	EXTI_LOWLEVEL
   	*/
#define EXTI_INT1                        DISABLE
#define EXTI_INT0_INT1_SENSEMODE         EXTI_FALLING_EDGE
   //INT2
   /*
EXTI_RISING_EDGE_INT2     
EXTI_FALLING_EDGE_INT2    
   */
#define EXTI_INT2                        ENABLE
#define EXTI_INT2_SENSEMODE              EXTI_FALLING_EDGE_INT2 


#endif /* EXTI_CONFIG_H_ */