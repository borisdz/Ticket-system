#ifndef BUYBUSTICKETVIEW_HPP
#define BUYBUSTICKETVIEW_HPP

#include <gui_generated/buybusticket_screen/BuyBusTicketViewBase.hpp>
#include <gui/buybusticket_screen/BuyBusTicketPresenter.hpp>

class BuyBusTicketView : public BuyBusTicketViewBase
{
public:
    BuyBusTicketView();
    virtual ~BuyBusTicketView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // BUYBUSTICKETVIEW_HPP
