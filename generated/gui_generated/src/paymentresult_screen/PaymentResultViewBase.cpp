/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/paymentresult_screen/PaymentResultViewBase.hpp>
#include <touchgfx/Color.hpp>
#include <images/BitmapDatabase.hpp>
#include <texts/TextKeysAndLanguages.hpp>

PaymentResultViewBase::PaymentResultViewBase()
{
    __background.setPosition(0, 0, 480, 272);
    __background.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    add(__background);

    background.setXY(0, 0);
    background.setBitmap(touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_BACKGROUNDS_480X480_SPOTLIGHTS_ID));
    add(background);

    textPaySuccess.setXY(61, 41);
    textPaySuccess.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    textPaySuccess.setLinespacing(0);
    textPaySuccess.setTypedText(touchgfx::TypedText(T___SINGLEUSE_GJAA));
    add(textPaySuccess);

    textCardAmount.setXY(17, 216);
    textCardAmount.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    textCardAmount.setLinespacing(0);
    textCardAmount.setWildcard(touchgfx::TypedText(T___SINGLEUSE_1PMY).getText());
    textCardAmount.resizeToCurrentText();
    textCardAmount.setTypedText(touchgfx::TypedText(T___SINGLEUSE_IAFP));
    add(textCardAmount);

    textTicketPrice.setXY(17, 165);
    textTicketPrice.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    textTicketPrice.setLinespacing(0);
    textTicketPrice.setWildcard(touchgfx::TypedText(T___SINGLEUSE_3P0K).getText());
    textTicketPrice.resizeToCurrentText();
    textTicketPrice.setTypedText(touchgfx::TypedText(T___SINGLEUSE_ME5R));
    add(textTicketPrice);

    textPayFailure.setXY(102, 41);
    textPayFailure.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    textPayFailure.setLinespacing(0);
    textPayFailure.setTypedText(touchgfx::TypedText(T___SINGLEUSE_0YP6));
    textPayFailure.setVisible(false);
    add(textPayFailure);
}

PaymentResultViewBase::~PaymentResultViewBase()
{

}

void PaymentResultViewBase::setupScreen()
{

}
