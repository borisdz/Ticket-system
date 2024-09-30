#ifndef REVIEWTICKETVIEW_HPP
#define REVIEWTICKETVIEW_HPP

#include <gui_generated/reviewticket_screen/ReviewTicketViewBase.hpp>
#include <gui/reviewticket_screen/ReviewTicketPresenter.hpp>
#include <touchgfx/hal/types.hpp>

class ReviewTicketView : public ReviewTicketViewBase
{
public:
    ReviewTicketView();
    virtual ~ReviewTicketView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
    virtual void setSelectedDestItem(int16_t itemSelected);
    virtual void reviewCancelButtonPressed();
    virtual void reviewBuyButtonPressed();
protected:
    int16_t ticketCount;
    int totalTicketPrice;
    char destinationName[100];
};

#endif // REVIEWTICKETVIEW_HPP
