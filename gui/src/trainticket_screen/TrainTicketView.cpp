#include <gui/trainticket_screen/TrainTicketView.hpp>
#include <touchgfx/hal/types.hpp>
#include <texts/TextKeysAndLanguages.hpp>

TrainTicketView::TrainTicketView() :
scrollTrainDest_ItemSelectedCallback(this, &TrainTicketView::scrollTrainDest_ItemSelectedHandler){

}

void TrainTicketView::setupScreen(){
	scrollTrainDest.setItemSelectedCallback(scrollTrainDest_ItemSelectedCallback);
	TrainTicketViewBase::setupScreen();

	ticketCount = presenter->getTicketCount();

	Unicode::snprintf(textTicketNoBuffer, TEXTTICKETNO_SIZE, "%d", ticketCount);
}

void TrainTicketView::tearDownScreen() {
	TrainTicketViewBase::tearDownScreen();
}

void TrainTicketView::scrollTrainDestUpdateItem(DestinationMenu& item, int16_t itemIndex){
	item.setNumber(itemIndex);
}

void TrainTicketView::scrollTrainDest_ItemSelectedHandler(int16_t itemSelected) {
	textSelectedDest.invalidate();
	switch (itemSelected) {
	default:
		break;
	case 0:
		textSelectedDest.setTypedText(TypedText(T_SKOPJE));
		break;
	case 1:
		textSelectedDest.setTypedText(TypedText(T_DRACHEVO));
		break;
	case 2:
		textSelectedDest.setTypedText(TypedText(T_VELES));
		break;
	case 3:
		textSelectedDest.setTypedText(TypedText(T_GRADSKO));
		break;
	case 4:
		textSelectedDest.setTypedText(TypedText(T_NEGOTINO));
		break;
	case 5:
		textSelectedDest.setTypedText(TypedText(T_DEMIRKAPIJA));
		break;
	case 6:
		textSelectedDest.setTypedText(TypedText(T_GEVGELIJA));
		break;
	}
	textSelectedDest.invalidate();

	presenter->destinationSelected(itemSelected);
}

void TrainTicketView::buttonUpPressed() {
	ticketCount++;

	Unicode::snprintf(textTicketNoBuffer, TEXTTICKETNO_SIZE, "%d", ticketCount);
	presenter->saveTicketCount(ticketCount);

	textTicketNo.invalidate();
}

void TrainTicketView::buttonDownPressed() {
	ticketCount--;

	Unicode::snprintf(textTicketNoBuffer, TEXTTICKETNO_SIZE, "%d", ticketCount);
	presenter->saveTicketCount(ticketCount);

	textTicketNo.invalidate();
}
