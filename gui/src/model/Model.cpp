/******************************************************************************
 *
 * @brief     This file is part of the TouchGFX 4.8.0 evaluation distribution.
 *
 * @author    Draupner Graphics A/S <http://www.touchgfx.com>
 *
 ******************************************************************************
 *
 * @section Copyright
 *
 * This file is free software and is provided for example purposes. You may
 * use, copy, and modify within the terms and conditions of the license
 * agreement.
 *
 * This is licensed software for evaluation use, any use must strictly comply
 * with the evaluation license agreement provided with delivery of the
 * TouchGFX software.
 *
 * The evaluation license agreement can be seen on www.touchgfx.com
 *
 * @section Disclaimer
 *
 * DISCLAIMER OF WARRANTY/LIMITATION OF REMEDIES: Draupner Graphics A/S has
 * no obligation to support this software. Draupner Graphics A/S is providing
 * the software "AS IS", with no express or implied warranties of any kind,
 * including, but not limited to, any implied warranties of merchantability
 * or fitness for any particular purpose or warranties against infringement
 * of any proprietary rights of a third party.
 *
 * Draupner Graphics A/S can not be held liable for any consequential,
 * incidental, or special damages, or any other relief, or for any claim by
 * any third party, arising from your use of this software.
 *
 *****************************************************************************/
#include <gui/model/Model.hpp>
#include <gui/model/ModelListener.hpp>
#include <touchgfx/hal/types.hpp>

#ifndef SIMULATOR
#include "main.h"
#include "string.h"
#include "cmsis_os.h"

extern "C"
{
	extern UART_HandleTypeDef huart1;
	extern osMessageQueueId_t scrDataQueueHandle;;
	scData dataQ;
}
#endif


Model::Model() :
modelListener(0),ticketCount(0),ticketBaseSelectedPrice(0),totalTicketPrice(0)
{
}

void Model::tick()
{
}


void Model::setDestinationSelected(int itemSelected){
	ticketDestinationSelected = itemSelected;
}

int Model::getTicketScrollDestItem(void){
	return ticketDestinationSelected;
}

int16_t Model::getTicketCount(){
	return ticketCount;
}

void Model::saveTicketCount(int16_t saveTicketCount){
	ticketCount=saveTicketCount;
}

void Model::setTicketBaseSelectedPrice(int baseTicketPrice){
	ticketBaseSelectedPrice=baseTicketPrice;
}

int Model::getTotalTicketPrice(){
	return ticketBaseSelectedPrice*ticketCount;
}

void Model::sendDataH750(char *data, int totalPrice, int ticketNo){
#ifndef SIMULATOR
	//HAL_UART_Transmit(&huart1, (uint8_t *)data, strlen(data), 100);
	strcpy(dataQ.data,data);
	dataQ.len=strlen(data);
	dataQ.totalPrice=totalPrice;
	dataQ.ticketNo=ticketNo;
	if(osMessageQueueGetSpace(scrDataQueueHandle)>0){ // if there is space in the queue
		osMessageQueuePut(scrDataQueueHandle, &dataQ, 0, 0); //send the structure to the queue
	}
#endif
}
