#ifndef TRAINTICKETPRESENTER_HPP
#define TRAINTICKETPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

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

private:
    TrainTicketPresenter();

    TrainTicketView& view;
};

#endif // TRAINTICKETPRESENTER_HPP
