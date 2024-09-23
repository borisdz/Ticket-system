#ifndef BUYTRAINTICKETPRESENTER_HPP
#define BUYTRAINTICKETPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class BuyTrainTicketView;

class BuyTrainTicketPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    BuyTrainTicketPresenter(BuyTrainTicketView& v);

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

    virtual ~BuyTrainTicketPresenter() {}

private:
    BuyTrainTicketPresenter();

    BuyTrainTicketView& view;
};

#endif // BUYTRAINTICKETPRESENTER_HPP
