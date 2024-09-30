#include <gui/payticket_screen/PayTicketView.hpp>

PayTicketView::PayTicketView()
{

}

void PayTicketView::setupScreen()
{
    PayTicketViewBase::setupScreen();
    presenter->getDataH750();
    balance = presenter->getBalance();
    f = presenter->getFlag();
    ticketPrice = presenter->getTicketPrice;
    Unicode::snprintf(textCardAmountBuffer, TEXTCARDAMOUNT_SIZE, "%d", balance);
    Unicode::snprintf(textTicketPrice, TEXTTICKETPRICE_SIZE, "%d", ticketPrice);
    getDataH750();
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


void PayTicketView::getDataH750(){
	if(f==0){
		textArea1.setVisible(false);
		creditCardImg.setVisible(false);
		buttonCancel.setVisible(false);
		textPayFailure.setVisible(true);
		textTicketPrice.setVisible(true);
		textCardAmount.setVisible(true);
		osDelay(10000);
	}else if(f==1){
		textArea1.setVisible(false);
		creditCardImg.setVisible(false);
		buttonCancel.setVisible(false);
		textPaySuccess.setVisible(true);
		textTicketPrice.setVisible(true);
		textCardAmount.setVisible(true);
		osDelay(10000);
	}

	presenter->saveTicketCount(0);
	presenter->setDestinationSelected(1);
	application().gotoMainScreenNoTransition();
}
