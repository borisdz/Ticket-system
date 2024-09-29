#ifndef PAYTICKETPRESENTER_HPP
#define PAYTICKETPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class PayTicketView;

class PayTicketPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    PayTicketPresenter(PayTicketView& v);

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

    virtual ~PayTicketPresenter() {}
    virtual void saveTicketCount(int16_t ticketCount);
    virtual void setDestinationSelected(int16_t destinationSelected);


private:
    PayTicketPresenter();

    PayTicketView& view;
};

#endif // PAYTICKETPRESENTER_HPP
