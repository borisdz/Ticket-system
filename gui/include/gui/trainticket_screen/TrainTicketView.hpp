#ifndef TRAINTICKETVIEW_HPP
#define TRAINTICKETVIEW_HPP

#include <gui_generated/trainticket_screen/TrainTicketViewBase.hpp>
#include <gui/trainticket_screen/TrainTicketPresenter.hpp>

class TrainTicketView : public TrainTicketViewBase
{
public:
    TrainTicketView();
    virtual ~TrainTicketView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // TRAINTICKETVIEW_HPP
