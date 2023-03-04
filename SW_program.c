/*
 * SW_program.c
 *
 *  Created on: Mar 4, 2023
 *      Author: Amany
 */



#include "SW_private.h"
#include "SW_config.h"
#include "DIO_interface.h"
#include "STD_TYPE.h"
#include "error_status.h"

ES_t SW_enuInit(SW_t  *Copy_Switch){
	ES_t Local_enuErorrState=ES_NOK;
	if(Copy_Switch!=NULL){
	u8 Local_itrator =0;
for(Local_itrator=0 ; Local_itrator < SW_NUM ; Local_itrator++){
	Local_enuErorrState= DIO_enuSetPinDirection(Copy_Switch[Local_itrator].SW_PortID ,Copy_Switch[Local_itrator].SW_PinID, INPUT);
	Local_enuErorrState= DIO_enuSetPinValue(Copy_Switch[Local_itrator].SW_PortID ,Copy_Switch[Local_itrator].SW_PinID , Copy_Switch[Local_itrator].SW_state);

    }
	}
	else {
		Local_enuErorrState=ES_NULL_POINTER;
	}
	return Local_enuErorrState;
}
ES_t SW_enuGetPressed(SW_t *Copy_Switch ,u8 *Copy_pu8State ){
	ES_t Local_enuErorrState=ES_NOK;
		if(Copy_Switch!=NULL &&Copy_pu8State!=NULL ){
			Local_enuErorrState=DIO_enuTGetPinValue(Copy_Switch->SW_PortID ,Copy_Switch->SW_PinID,Copy_pu8State);
	    }

		else {
			Local_enuErorrState=ES_NULL_POINTER;
		}
		return Local_enuErorrState;
}
