#include <gui/reviewticket_screen/ReviewTicketView.hpp>
#include <texts/TextKeysAndLanguages.hpp>

ReviewTicketView::ReviewTicketView()
{

}

void ReviewTicketView::setupScreen()
{
    ReviewTicketViewBase::setupScreen();

    ticketCount = presenter->getTicketCount();

    // printing the number of tickets:
    Unicode::snprintf(textNoTicketsBuffer, TEXTNOTICKETS_SIZE, "%d", ticketCount);

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
			break;
		case 1:
			selectedDestination.setTypedText(TypedText(T_DRACHEVO));
			break;
		case 2:
			selectedDestination.setTypedText(TypedText(T_VELES));
			break;
		case 3:
			selectedDestination.setTypedText(TypedText(T_GRADSKO));
			break;
		case 4:
			selectedDestination.setTypedText(TypedText(T_NEGOTINO));
			break;
		case 5:
			selectedDestination.setTypedText(TypedText(T_DEMIRKAPIJA));
			break;
		case 6:
			selectedDestination.setTypedText(TypedText(T_GEVGELIJA));
			break;
		}
	selectedDestination.invalidate();
}
