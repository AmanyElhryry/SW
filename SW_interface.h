/*
 *
SW_interface.h
 *
 *  Created on: Mar 4, 2023
 *      Author: Amany
 */

#ifndef SW_INTERFACE_H_
#define SW_INTERFACE_H_
#include "STD_TYPE.h"
#include "BIT_MATH.h"
#include "SW_private.h"
#include "SW_config.h"

ES_t SW_enuInit(SW_t *Copy_Switch);
ES_t SW_enuGetPressed(SW_t *Copy_Switch ,u8 *Copy_pu8State  );


#endif
