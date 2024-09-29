#include <gui/reviewticket_screen/ReviewTicketView.hpp>
#include <gui/reviewticket_screen/ReviewTicketPresenter.hpp>

ReviewTicketPresenter::ReviewTicketPresenter(ReviewTicketView& v)
    : view(v)
{

}

void ReviewTicketPresenter::activate()
{
	view.setSelectedDestItem(model->getTicketScrollDestItem());
}

void ReviewTicketPresenter::deactivate()
{

}

void ReviewTicketPresenter::saveTicketCount(int16_t ticketCount){
	model->saveTicketCount(ticketCount);
}

void ReviewTicketPresenter::setDestinationSelected(int16_t destinationSelected){
	model->setDestinationSelected(destinationSelected);
}

int ReviewTicketPresenter::getTotalTicketPrice(){
	return model->getTotalTicketPrice();
}

void ReviewTicketPresenter::sendDataH750(char *data, int totalPrice, int ticketNo){
	model->sendDataH750(data,totalPrice, ticketNo);
}
