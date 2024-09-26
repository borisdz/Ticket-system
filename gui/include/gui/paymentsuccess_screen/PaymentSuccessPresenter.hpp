#ifndef PAYMENTSUCCESSPRESENTER_HPP
#define PAYMENTSUCCESSPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class PaymentSuccessView;

class PaymentSuccessPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    PaymentSuccessPresenter(PaymentSuccessView& v);

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

    virtual ~PaymentSuccessPresenter() {}

private:
    PaymentSuccessPresenter();

    PaymentSuccessView& view;
};

#endif // PAYMENTSUCCESSPRESENTER_HPP
