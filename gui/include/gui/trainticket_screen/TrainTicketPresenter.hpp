#ifndef TRAINTICKETPRESENTER_HPP
#define TRAINTICKETPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>
#include <touchgfx/hal/types.hpp>

using namespace touchgfx;

class TrainTicketView;

class TrainTicketPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    TrainTicketPresenter(TrainTicketView& v);

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

    virtual ~TrainTicketPresenter() {}

    void saveTicketCount(int16_t ticketCount);
    int16_t getTicketCount();
    virtual void destinationSelected(int16_t itemSelected);
private:
    TrainTicketPresenter();

    TrainTicketView& view;
};

#endif // TRAINTICKETPRESENTER_HPP
