#include <gui/reviewticket_screen/ReviewTicketView.hpp>
#include <gui/reviewticket_screen/ReviewTicketPresenter.hpp>

ReviewTicketPresenter::ReviewTicketPresenter(ReviewTicketView& v)
    : view(v)
{

}

void ReviewTicketPresenter::activate()
{
	view.setSelectedDestItem(model->getTrainTicketScrollDestItem());
}

void ReviewTicketPresenter::deactivate()
{

}
