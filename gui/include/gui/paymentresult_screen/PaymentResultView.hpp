#ifndef PAYMENTRESULTVIEW_HPP
#define PAYMENTRESULTVIEW_HPP

#include <gui_generated/paymentresult_screen/PaymentResultViewBase.hpp>
#include <gui/paymentresult_screen/PaymentResultPresenter.hpp>

class PaymentResultView : public PaymentResultViewBase
{
public:
    PaymentResultView();
    virtual ~PaymentResultView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // PAYMENTRESULTVIEW_HPP
