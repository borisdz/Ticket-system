#ifndef PAYMENTRESULTPRESENTER_HPP
#define PAYMENTRESULTPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class PaymentResultView;

class PaymentResultPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    PaymentResultPresenter(PaymentResultView& v);

    /**
     * The activate function is called automatically when this screen is "switched in"
     * (ie. made active). Initialization logic can be placed here.
     */
    virtual void activate();

    /**
     * The deactivate function is called automatically when this screen is "switched out"
     * (ie. made inactive). Teardown functionality can be placed here.
     */
    virtual void deactivate();

    virtual ~PaymentResultPresenter() {}

private:
    PaymentResultPresenter();

    PaymentResultView& view;
};

#endif // PAYMENTRESULTPRESENTER_HPP
