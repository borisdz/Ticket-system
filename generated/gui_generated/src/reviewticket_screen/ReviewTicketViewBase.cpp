/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/reviewticket_screen/ReviewTicketViewBase.hpp>
#include <touchgfx/Color.hpp>
#include <images/BitmapDatabase.hpp>
#include <texts/TextKeysAndLanguages.hpp>

ReviewTicketViewBase::ReviewTicketViewBase() :
    buttonCallback(this, &ReviewTicketViewBase::buttonCallbackHandler)
{
    __background.setPosition(0, 0, 480, 272);
    __background.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    add(__background);

    background.setXY(0, 0);
    background.setBitmap(touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_BACKGROUNDS_480X480_SPOTLIGHTS_ID));
    add(background);

    textDestination.setPosition(17, 15, 122, 24);
    textDestination.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    textDestination.setLinespacing(0);
    textDestination.setTypedText(touchgfx::TypedText(T___SINGLEUSE_XLKZ));
    add(textDestination);

    textNoTickets.setXY(17, 112);
    textNoTickets.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    textNoTickets.setLinespacing(0);
    Unicode::snprintf(textNoTicketsBuffer, TEXTNOTICKETS_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_ZXT1).getText());
    textNoTickets.setWildcard(textNoTicketsBuffer);
    textNoTickets.resizeToCurrentText();
    textNoTickets.setTypedText(touchgfx::TypedText(T___SINGLEUSE_10CM));
    add(textNoTickets);

    buttonBuy.setXY(291, 201);
    buttonBuy.setBitmaps(touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_REGULAR_HEIGHT_50_SMALL_ROUND_INACTIVE_ID), touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_REGULAR_HEIGHT_50_SMALL_ROUND_INACTIVE_ID));
    buttonBuy.setLabelText(touchgfx::TypedText(T___SINGLEUSE_6ZVF));
    buttonBuy.setLabelColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    buttonBuy.setLabelColorPressed(touchgfx::Color::getColorFromRGB(255, 255, 255));
    buttonBuy.setAction(buttonCallback);
    add(buttonBuy);

    buttonCancel.setXY(17, 201);
    buttonCancel.setBitmaps(touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_REGULAR_HEIGHT_50_SMALL_ROUND_INACTIVE_ID), touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_REGULAR_HEIGHT_50_SMALL_ROUND_INACTIVE_ID));
    buttonCancel.setLabelText(touchgfx::TypedText(T___SINGLEUSE_XWMH));
    buttonCancel.setLabelColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    buttonCancel.setLabelColorPressed(touchgfx::Color::getColorFromRGB(255, 255, 255));
    buttonCancel.setAction(buttonCallback);
    add(buttonCancel);

    selectedDestination.setPosition(165, 15, 167, 24);
    selectedDestination.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    selectedDestination.setLinespacing(0);
    selectedDestination.setTypedText(touchgfx::TypedText(T___SINGLEUSE_719L));
    add(selectedDestination);
}

ReviewTicketViewBase::~ReviewTicketViewBase()
{

}

void ReviewTicketViewBase::setupScreen()
{

}

void ReviewTicketViewBase::buttonCallbackHandler(const touchgfx::AbstractButton& src)
{
    if (&src == &buttonBuy)
    {
        //reviewBuyButtonPressed
        //When buttonBuy clicked call virtual function
        //Call reviewBuyButtonPressed
        reviewBuyButtonPressed();
    }
    if (&src == &buttonCancel)
    {
        //reviewCancelButtonPressed
        //When buttonCancel clicked call virtual function
        //Call reviewCancelButtonPressed
        reviewCancelButtonPressed();
    }
}
