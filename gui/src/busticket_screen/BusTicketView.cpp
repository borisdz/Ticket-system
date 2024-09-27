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
			break;
		case 1:
			busTextSelectedDest.setTypedText(TypedText(T_DRACHEVO));
			break;
		case 2:
			busTextSelectedDest.setTypedText(TypedText(T_VELES));
			break;
		case 3:
			busTextSelectedDest.setTypedText(TypedText(T_GRADSKO));
			break;
		case 4:
			busTextSelectedDest.setTypedText(TypedText(T_NEGOTINO));
			break;
		case 5:
			busTextSelectedDest.setTypedText(TypedText(T_DEMIRKAPIJA));
			break;
		case 6:
			busTextSelectedDest.setTypedText(TypedText(T_GEVGELIJA));
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









