#ifndef REVIEWTICKETVIEW_HPP
#define REVIEWTICKETVIEW_HPP

#include <gui_generated/reviewticket_screen/ReviewTicketViewBase.hpp>
#include <gui/reviewticket_screen/ReviewTicketPresenter.hpp>

class ReviewTicketView : public ReviewTicketViewBase
{
public:
    ReviewTicketView();
    virtual ~ReviewTicketView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // REVIEWTICKETVIEW_HPP
