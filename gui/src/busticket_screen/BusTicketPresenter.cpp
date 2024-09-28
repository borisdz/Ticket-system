#include <gui/busticket_screen/BusTicketView.hpp>
#include <gui/busticket_screen/BusTicketPresenter.hpp>

BusTicketPresenter::BusTicketPresenter(BusTicketView& v)
    : view(v)
{

}

void BusTicketPresenter::activate()
{

}

void BusTicketPresenter::deactivate()
{

}

void BusTicketPresenter::saveBusTicketCount(int16_t busTicketCount){
	model->saveTicketCount(busTicketCount);
}

void BusTicketPresenter::busDestinationSelected(int16_t busItemSelected){
	model->setDestinationSelected(busItemSelected);
}

int16_t BusTicketPresenter::getBusTicketCount(){
	return model->getTicketCount();
}
