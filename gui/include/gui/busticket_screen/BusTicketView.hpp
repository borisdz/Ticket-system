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
    virtual void scrollBusDestUpdateItem(DestinationMenu& item, int16_t itemIndex);
    virtual void busButtonUpPressed();
    virtual void busButtonDownPressed();
protected:
    int16_t busTicketCount;
    Callback<BusTicketView, int16_t> scrollBusDest_ItemSelectedCallback;
    void scrollBusDest_ItemSelectedHandler(int16_t itemSelected);
};

#endif // BUSTICKETVIEW_HPP
