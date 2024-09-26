#ifndef PAYMENTSUCCESSVIEW_HPP
#define PAYMENTSUCCESSVIEW_HPP

#include <gui_generated/paymentsuccess_screen/PaymentSuccessViewBase.hpp>
#include <gui/paymentsuccess_screen/PaymentSuccessPresenter.hpp>

class PaymentSuccessView : public PaymentSuccessViewBase
{
public:
    PaymentSuccessView();
    virtual ~PaymentSuccessView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // PAYMENTSUCCESSVIEW_HPP
