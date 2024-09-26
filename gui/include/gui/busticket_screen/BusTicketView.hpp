#ifndef BUSTICKETVIEW_HPP
#define BUSTICKETVIEW_HPP

#include <gui_generated/busticket_screen/BusTicketViewBase.hpp>
#include <gui/busticket_screen/BusTicketPresenter.hpp>

class BusTicketView : public BusTicketViewBase
{
public:
    BusTicketView();
    virtual ~BusTicketView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // BUSTICKETVIEW_HPP
