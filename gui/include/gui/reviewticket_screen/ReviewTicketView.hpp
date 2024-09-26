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
protected:
    int16_t ticketCount;
};

#endif // REVIEWTICKETVIEW_HPP
