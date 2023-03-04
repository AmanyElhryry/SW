/*
 * SW_config.c
 *
 *  Created on: Mar 4, 2023
 *      Author: Amany
 */

#include "STD_TYPE.h"
#include "BIT_MATH.h"
#include "SW_private.h"
#include "SW_config.h"
#include "DIO_interface.h"
SW_t Switch_State[SW_NUM]={
		{DIO_PORTA,DIO_PIN0,PULL_UP},
		{DIO_PORTA,DIO_PIN1,PULL_UP},
		{DIO_PORTA,DIO_PIN3,PULL_UP}
};
