#include <gui/trainticket_screen/TrainTicketView.hpp>
#include <touchgfx/hal/types.hpp>
#include <texts/TextKeysAndLanguages.hpp>

TrainTicketView::TrainTicketView() :
scrollTrainDest_ItemSelectedCallback(this, &TrainTicketView::scrollTrainDest_ItemSelectedHandler){

}

void TrainTicketView::setupScreen(){
	scrollTrainDest.setItemSelectedCallback(scrollTrainDest_ItemSelectedCallback);
	TrainTicketViewBase::setupScreen();

	trainTicketCount = presenter->getTrainTicketCount();

	Unicode::snprintf(textTicketNoBuffer, TEXTTICKETNO_SIZE, "%d", trainTicketCount);
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
		presenter->setTrainBaseSelectedPrice(280);
		break;
	case 1:
		textSelectedDest.setTypedText(TypedText(T_DRACHEVO));
		presenter->setTrainBaseSelectedPrice(270);
		break;
	case 2:
		textSelectedDest.setTypedText(TypedText(T_VELES));
		presenter->setTrainBaseSelectedPrice(200);
		break;
	case 3:
		textSelectedDest.setTypedText(TypedText(T_GRADSKO));
		presenter->setTrainBaseSelectedPrice(190);
		break;
	case 4:
		textSelectedDest.setTypedText(TypedText(T_NEGOTINO));
		presenter->setTrainBaseSelectedPrice(180);
		break;
	case 5:
		textSelectedDest.setTypedText(TypedText(T_DEMIRKAPIJA));
		presenter->setTrainBaseSelectedPrice(150);
		break;
	case 6:
		textSelectedDest.setTypedText(TypedText(T_GEVGELIJA));
		presenter->setTrainBaseSelectedPrice(100);
		break;
	}
	textSelectedDest.invalidate();

	presenter->setDestinationSelected(itemSelected);
}

void TrainTicketView::buttonUpPressed() {
	trainTicketCount++;

	Unicode::snprintf(textTicketNoBuffer, TEXTTICKETNO_SIZE, "%d", trainTicketCount);
	presenter->saveTicketCount(trainTicketCount);
	textTicketNo.invalidate();
}

void TrainTicketView::buttonDownPressed() {
	trainTicketCount--;

	Unicode::snprintf(textTicketNoBuffer, TEXTTICKETNO_SIZE, "%d", trainTicketCount);
	presenter->saveTicketCount(trainTicketCount);

	textTicketNo.invalidate();
}

void TrainTicketView::trainButtonCancelPressed(){
		presenter->saveTicketCount(0);
		presenter->setDestinationSelected(1);
		presenter->setTrainBaseSelectedPrice(0);
		application().gotoMainScreenNoTransition();
}
