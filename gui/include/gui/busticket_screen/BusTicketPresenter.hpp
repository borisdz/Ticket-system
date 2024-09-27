#ifndef BUSTICKETPRESENTER_HPP
#define BUSTICKETPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class BusTicketView;

class BusTicketPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    BusTicketPresenter(BusTicketView& v);

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

    virtual ~BusTicketPresenter() {}

    void saveBusTicketCount(int16_t busTicketCount);
    int16_t getBusTicketCount();
    virtual void busDestinationSelected(int16_t itemSelected);

private:
    BusTicketPresenter();

    BusTicketView& view;
};

#endif // BUSTICKETPRESENTER_HPP
