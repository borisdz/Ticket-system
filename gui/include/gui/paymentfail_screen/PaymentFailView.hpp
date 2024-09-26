#ifndef PAYMENTFAILVIEW_HPP
#define PAYMENTFAILVIEW_HPP

#include <gui_generated/paymentfail_screen/PaymentFailViewBase.hpp>
#include <gui/paymentfail_screen/PaymentFailPresenter.hpp>

class PaymentFailView : public PaymentFailViewBase
{
public:
    PaymentFailView();
    virtual ~PaymentFailView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // PAYMENTFAILVIEW_HPP
