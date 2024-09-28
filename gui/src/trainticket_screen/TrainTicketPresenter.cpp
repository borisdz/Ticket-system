#include <gui/trainticket_screen/TrainTicketView.hpp>
#include <gui/trainticket_screen/TrainTicketPresenter.hpp>

TrainTicketPresenter::TrainTicketPresenter(TrainTicketView& v)
    : view(v)
{

}

void TrainTicketPresenter::activate()
{

}

void TrainTicketPresenter::deactivate()
{

}

void TrainTicketPresenter::saveTicketCount(int16_t ticketCount){
	model->saveTicketCount(ticketCount);
}


void TrainTicketPresenter::destinationSelected(int16_t itemSelected){
	model->setDestinationSelected(itemSelected);
}

int16_t TrainTicketPresenter::getTrainTicketCount(){
	return model->getTicketCount();
}
