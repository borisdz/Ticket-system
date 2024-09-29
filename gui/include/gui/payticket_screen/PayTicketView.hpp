#ifndef PAYTICKETVIEW_HPP
#define PAYTICKETVIEW_HPP

#include <gui_generated/payticket_screen/PayTicketViewBase.hpp>
#include <gui/payticket_screen/PayTicketPresenter.hpp>

class PayTicketView : public PayTicketViewBase
{
public:
    PayTicketView();
    virtual ~PayTicketView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
    virtual void buttonPaymentCancelled();
protected:
};

#endif // PAYTICKETVIEW_HPP
