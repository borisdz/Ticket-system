#ifndef REVIEWTICKETPRESENTER_HPP
#define REVIEWTICKETPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>
#include <touchgfx/hal/types.hpp>

using namespace touchgfx;

class ReviewTicketView;

class ReviewTicketPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    ReviewTicketPresenter(ReviewTicketView& v);

    /**
     * The activate function is called automatically when this screen is "switched in"
     * (ie. made active). Initialization logic can be placed here.
     */
    virtual void activate();

    /**
     * The deactivate function is called automatically when this screen is "switched out"
     * (ie. made inactive). Teardown functionality can be placed here.
     */
    virtual void deactivate();

    virtual ~ReviewTicketPresenter() {}

    int16_t getTicketCount(){
    	return model->getTicketCount();
    }
    virtual void saveTicketCount(int16_t ticketCount);
    virtual void setDestinationSelected(int16_t destinationSelected);
    int getTotalTicketPrice();
    void setBaseTicketSelectedPrice(int baseTicketPrice);
    virtual void sendDataH750(char *data);
private:
    ReviewTicketPresenter();

    ReviewTicketView& view;
};

#endif // REVIEWTICKETPRESENTER_HPP
