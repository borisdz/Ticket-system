#ifndef TRAINTICKETVIEW_HPP
#define TRAINTICKETVIEW_HPP

#include <gui_generated/trainticket_screen/TrainTicketViewBase.hpp>
#include <gui/trainticket_screen/TrainTicketPresenter.hpp>
#include <touchgfx/hal/types.hpp>

class TrainTicketView : public TrainTicketViewBase
{
public:
    TrainTicketView();
    virtual ~TrainTicketView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
    virtual void scrollTrainDestUpdateItem(DestinationMenu& item, int16_t itemIndex);
    virtual void buttonUpPressed();
    virtual void buttonDownPressed();
protected:
    int16_t ticketCount;
    Callback<TrainTicketView, int16_t> scrollTrainDest_ItemSelectedCallback;
    void scrollTrainDest_ItemSelectedHandler(int16_t itemSelected);
};

#endif // TRAINTICKETVIEW_HPP
