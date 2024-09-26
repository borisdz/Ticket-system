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
			textDestination.setWildcard(touchgfx::TypedText(T_SKOPJE).getText());
			break;
		case 1:
			textDestination.setWildcard(touchgfx::TypedText(T_DRACHEVO).getText());
			break;
		case 2:
			textDestination.setWildcard(touchgfx::TypedText(T_VELES).getText());
			break;
		case 3:
			textDestination.setWildcard(touchgfx::TypedText(T_GRADSKO).getText());
			break;
		case 4:
			textDestination.setWildcard(touchgfx::TypedText(T_NEGOTINO).getText());
			break;
		case 5:
			textDestination.setWildcard(touchgfx::TypedText(T_DEMIRKAPIJA).getText());
			break;
		case 6:
			textDestination.setWildcard(touchgfx::TypedText(T_GEVGELIJA).getText());
			break;
		}
}
