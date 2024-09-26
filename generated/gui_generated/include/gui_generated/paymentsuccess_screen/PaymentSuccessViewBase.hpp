/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef PAYMENTSUCCESSVIEWBASE_HPP
#define PAYMENTSUCCESSVIEWBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/paymentsuccess_screen/PaymentSuccessPresenter.hpp>
#include <touchgfx/widgets/Box.hpp>
#include <touchgfx/widgets/Image.hpp>

class PaymentSuccessViewBase : public touchgfx::View<PaymentSuccessPresenter>
{
public:
    PaymentSuccessViewBase();
    virtual ~PaymentSuccessViewBase();
    virtual void setupScreen();

protected:
    FrontendApplication& application() {
        return *static_cast<FrontendApplication*>(touchgfx::Application::getInstance());
    }

    /*
     * Member Declarations
     */
    touchgfx::Box __background;
    touchgfx::Image background;

private:

};

#endif // PAYMENTSUCCESSVIEWBASE_HPP
