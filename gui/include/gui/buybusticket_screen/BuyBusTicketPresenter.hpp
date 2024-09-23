#ifndef BUYBUSTICKETPRESENTER_HPP
#define BUYBUSTICKETPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class BuyBusTicketView;

class BuyBusTicketPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    BuyBusTicketPresenter(BuyBusTicketView& v);

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

    virtual ~BuyBusTicketPresenter() {}

private:
    BuyBusTicketPresenter();

    BuyBusTicketView& view;
};

#endif // BUYBUSTICKETPRESENTER_HPP
