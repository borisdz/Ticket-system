#include <gui/payticket_screen/PayTicketView.hpp>

PayTicketView::PayTicketView()
{

}

void PayTicketView::setupScreen()
{
    PayTicketViewBase::setupScreen();
}

void PayTicketView::tearDownScreen()
{
    PayTicketViewBase::tearDownScreen();
}


void PayTicketView::buttonPaymentCancelled(){
	presenter->saveTicketCount(0);
	presenter->setDestinationSelected(1);

	application().gotoMainScreenNoTransition();
}
