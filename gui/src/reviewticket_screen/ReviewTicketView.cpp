#include <gui/reviewticket_screen/ReviewTicketView.hpp>
#include <texts/TextKeysAndLanguages.hpp>

#ifndef SIMULATOR
#include "stdio.h"
#include <cstring>
#endif

ReviewTicketView::ReviewTicketView()
{

}

void ReviewTicketView::setupScreen()
{
    ReviewTicketViewBase::setupScreen();

    ticketCount = presenter->getTicketCount();

    totalTicketPrice=presenter->getTotalTicketPrice();

    // printing the number of tickets:
    Unicode::snprintf(textNoTicketsBuffer, TEXTNOTICKETS_SIZE, "%d", ticketCount);
    //printing the total price of the order:
    Unicode::snprintf(textTotalPriceBuffer, TEXTTOTALPRICE_SIZE, "%d", totalTicketPrice);

    textDestination.resizeToCurrentText();
}

void ReviewTicketView::tearDownScreen()
{
    ReviewTicketViewBase::tearDownScreen();
}

void ReviewTicketView::setSelectedDestItem(int16_t itemSelected){
	switch (itemSelected) {
		default:
			break;
		case 0:
			selectedDestination.setTypedText(TypedText(T_SKOPJE));
			Unicode::toUTF8(TypedText(T_SKOPJE).getText(),(uint8_t *)destinationName, sizeof(destinationName));
			break;
		case 1:
			selectedDestination.setTypedText(TypedText(T_DRACHEVO));
			Unicode::toUTF8(TypedText(T_DRACHEVO).getText(),(uint8_t *)destinationName, sizeof(destinationName));
			break;
		case 2:
			selectedDestination.setTypedText(TypedText(T_VELES));
			Unicode::toUTF8(TypedText(T_VELES).getText(),(uint8_t *)destinationName, sizeof(destinationName));
			break;
		case 3:
			selectedDestination.setTypedText(TypedText(T_GRADSKO));
			Unicode::toUTF8(TypedText(T_GRADSKO).getText(),(uint8_t *)destinationName, sizeof(destinationName));
			break;
		case 4:
			selectedDestination.setTypedText(TypedText(T_NEGOTINO));
			Unicode::toUTF8(TypedText(T_NEGOTINO).getText(),(uint8_t *)destinationName, sizeof(destinationName));
			break;
		case 5:
			selectedDestination.setTypedText(TypedText(T_DEMIRKAPIJA));
			Unicode::toUTF8(TypedText(T_DEMIRKAPIJA).getText(),(uint8_t *)destinationName, sizeof(destinationName));
			break;
		case 6:
			selectedDestination.setTypedText(TypedText(T_GEVGELIJA));
			Unicode::toUTF8(TypedText(T_GEVGELIJA).getText(),(uint8_t *)destinationName, sizeof(destinationName));
			break;
		}
	selectedDestination.invalidate();
}


void ReviewTicketView::reviewCancelButtonPressed(){
	presenter->saveTicketCount(0);
	presenter->setDestinationSelected(1);
	application().gotoMainScreenNoTransition();
}

void ReviewTicketView::reviewBuyButtonPressed(){
	  presenter->sendDataH750(destinationName, totalTicketPrice, ticketCount);

	  memset(destinationName, '\0', sizeof(destinationName));

}










