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


void PayTicketPresenter::saveTicketCount(int16_t ticketCount){
	model->saveTicketCount(ticketCount);
}

void PayTicketPresenter::setDestinationSelected(int16_t destinationSelected){
	model->setDestinationSelected(destinationSelected);
}
