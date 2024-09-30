#include <gui/payticket_screen/PayTicketView.hpp>
#include <gui/payticket_screen/PayTicketPresenter.hpp>

PayTicketPresenter::PayTicketPresenter(PayTicketView& v)
    : view(v)
{

}

void PayTicketPresenter::activate()
{

}

void PayTicketPresenter::deactivate()
{

}

void PayTicketPresenter::getDataH750(){
	model->getDataH750();
}

int PayTicketPresenter::getTicketPrice(){
	return model->getTotalTicketPrice();
}

void PayTicketPresenter::saveTicketCount(int16_t ticketCount){
	model->saveTicketCount(ticketCount);
}

void PayTicketPresenter::setDestinationSelected(int16_t destinationSelected){
	model->setDestinationSelected(destinationSelected);
}


int PayTicketPresenter::getBalance(){
	return model->getUpdatedFunds();
}

uint8_t PayTicketPresenter::getFlag(){
	return model->getStatus();
}
