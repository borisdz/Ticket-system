#include <gui/busticket_screen/BusTicketView.hpp>
#include <texts/TextKeysAndLanguages.hpp>

BusTicketView::BusTicketView() :
scrollBusDest_ItemSelectedCallback(this, &BusTicketView::scrollBusDest_ItemSelectedHandler){

}

void BusTicketView::setupScreen()
{
	scrollBusDest.setItemSelectedCallback(scrollBusDest_ItemSelectedCallback);
    BusTicketViewBase::setupScreen();

    busTicketCount=presenter->getBusTicketCount();
    Unicode::snprintf(busTextTicketNoBuffer, BUSTEXTTICKETNO_SIZE, "$d", busTicketCount);

}

void BusTicketView::tearDownScreen()
{
    BusTicketViewBase::tearDownScreen();
}


void BusTicketView::scrollBusDestUpdateItem(DestinationMenu& item, int16_t itemIndex){
	item.setNumber(itemIndex);
}

void BusTicketView::scrollBusDest_ItemSelectedHandler(int16_t itemSelected){
	busTextSelectedDest.invalidate();
	switch (itemSelected) {
		default:
			break;
		case 0:
			busTextSelectedDest.setTypedText(TypedText(T_SKOPJE));
			presenter->setBusBaseSelectedPrice(1000);
			break;
		case 1:
			busTextSelectedDest.setTypedText(TypedText(T_DRACHEVO));
			presenter->setBusBaseSelectedPrice(800);
			break;
		case 2:
			busTextSelectedDest.setTypedText(TypedText(T_VELES));
			presenter->setBusBaseSelectedPrice(500);
			break;
		case 3:
			busTextSelectedDest.setTypedText(TypedText(T_GRADSKO));
			presenter->setBusBaseSelectedPrice(900);
			break;
		case 4:
			busTextSelectedDest.setTypedText(TypedText(T_NEGOTINO));
			presenter->setBusBaseSelectedPrice(200);
			break;
		case 5:
			busTextSelectedDest.setTypedText(TypedText(T_DEMIRKAPIJA));
			presenter->setBusBaseSelectedPrice(300);
			break;
		case 6:
			busTextSelectedDest.setTypedText(TypedText(T_GEVGELIJA));
			presenter->setBusBaseSelectedPrice(1100);
			break;
		}
	busTextSelectedDest.invalidate();

	presenter->busDestinationSelected(itemSelected);
}

void BusTicketView::busButtonUpPressed(){
	busTicketCount++;

	Unicode::snprintf(busTextTicketNoBuffer, BUSTEXTTICKETNO_SIZE, "%d", busTicketCount);
	presenter->saveBusTicketCount(busTicketCount);

	busTextTicketNo.invalidate();
}

void BusTicketView::busButtonDownPressed(){
	busTicketCount--;

	Unicode::snprintf(busTextTicketNoBuffer, BUSTEXTTICKETNO_SIZE, "%d", busTicketCount);
	presenter->saveBusTicketCount(busTicketCount);

	busTextTicketNo.invalidate();
}









