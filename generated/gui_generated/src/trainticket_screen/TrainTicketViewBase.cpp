/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/trainticket_screen/TrainTicketViewBase.hpp>
#include <touchgfx/Color.hpp>
#include <images/BitmapDatabase.hpp>
#include <texts/TextKeysAndLanguages.hpp>

TrainTicketViewBase::TrainTicketViewBase() :
    updateItemCallback(this, &TrainTicketViewBase::updateItemCallbackHandler),
    flexButtonCallback(this, &TrainTicketViewBase::flexButtonCallbackHandler),
    buttonCallback(this, &TrainTicketViewBase::buttonCallbackHandler)
{
    __background.setPosition(0, 0, 480, 272);
    __background.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    add(__background);

    background.setXY(0, 0);
    background.setBitmap(touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_BACKGROUNDS_480X480_SPOTLIGHTS_ID));
    add(background);

    textTicketNo.setXY(249, 23);
    textTicketNo.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    textTicketNo.setLinespacing(0);
    Unicode::snprintf(textTicketNoBuffer, TEXTTICKETNO_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_QQ70).getText());
    textTicketNo.setWildcard(textTicketNoBuffer);
    textTicketNo.resizeToCurrentText();
    textTicketNo.setTypedText(touchgfx::TypedText(T___SINGLEUSE_QORF));
    add(textTicketNo);

    buttonDown.setBoxWithBorderPosition(0, 0, 70, 50);
    buttonDown.setBorderSize(5);
    buttonDown.setBoxWithBorderColors(touchgfx::Color::getColorFromRGB(255, 255, 255), touchgfx::Color::getColorFromRGB(255, 255, 255), touchgfx::Color::getColorFromRGB(255, 255, 255), touchgfx::Color::getColorFromRGB(255, 255, 255));
    buttonDown.setIconBitmaps(Bitmap(BITMAP_ICON_THEME_IMAGES_HARDWARE_KEYBOARD_ARROW_DOWN_50_50_000000_SVG_ID), Bitmap(BITMAP_ICON_THEME_IMAGES_ACTION_DONE_50_50_000000_SVG_ID));
    buttonDown.setIconXY(10, 0);
    buttonDown.setAction(flexButtonCallback);
    buttonDown.setPosition(249, 69, 70, 50);
    add(buttonDown);

    buttonUp.setBoxWithBorderPosition(0, 0, 70, 50);
    buttonUp.setBorderSize(5);
    buttonUp.setBoxWithBorderColors(touchgfx::Color::getColorFromRGB(255, 255, 255), touchgfx::Color::getColorFromRGB(255, 255, 255), touchgfx::Color::getColorFromRGB(255, 255, 255), touchgfx::Color::getColorFromRGB(255, 255, 255));
    buttonUp.setIconBitmaps(Bitmap(BITMAP_ICON_THEME_IMAGES_HARDWARE_KEYBOARD_ARROW_UP_50_50_000000_SVG_ID), Bitmap(BITMAP_ICON_THEME_IMAGES_ACTION_DONE_50_50_E8F6FB_SVG_ID));
    buttonUp.setIconXY(11, 0);
    buttonUp.setAction(flexButtonCallback);
    buttonUp.setPosition(379, 69, 70, 50);
    add(buttonUp);

    textSelectedDest.setXY(262, 170);
    textSelectedDest.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    textSelectedDest.setLinespacing(0);
    textSelectedDest.setTypedText(touchgfx::TypedText(T___SINGLEUSE_NJBN));
    add(textSelectedDest);

    buttonNext.setXY(359, 215);
    buttonNext.setBitmaps(touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_REGULAR_HEIGHT_50_TINY_ROUND_INACTIVE_ID), touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_REGULAR_HEIGHT_50_TINY_ROUND_INACTIVE_ID));
    buttonNext.setLabelText(touchgfx::TypedText(T___SINGLEUSE_2RSW));
    buttonNext.setLabelColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    buttonNext.setLabelColorPressed(touchgfx::Color::getColorFromRGB(255, 255, 255));
    buttonNext.setAction(buttonCallback);
    add(buttonNext);

    buttonCancel.setXY(229, 215);
    buttonCancel.setBitmaps(touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_REGULAR_HEIGHT_50_TINY_ROUND_INACTIVE_ID), touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_REGULAR_HEIGHT_50_TINY_ROUND_INACTIVE_ID));
    buttonCancel.setLabelText(touchgfx::TypedText(T___SINGLEUSE_T9GB));
    buttonCancel.setLabelColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    buttonCancel.setLabelColorPressed(touchgfx::Color::getColorFromRGB(255, 255, 255));
    buttonCancel.setAction(buttonCallback);
    add(buttonCancel);

    scrollTrainDest.setPosition(14, 20, 210, 230);
    scrollTrainDest.setHorizontal(false);
    scrollTrainDest.setCircular(false);
    scrollTrainDest.setEasingEquation(touchgfx::EasingEquations::backEaseOut);
    scrollTrainDest.setSwipeAcceleration(10);
    scrollTrainDest.setDragAcceleration(10);
    scrollTrainDest.setNumberOfItems(7);
    scrollTrainDest.setPadding(0, 0);
    scrollTrainDest.setSnapping(true);
    scrollTrainDest.setOvershootPercentage(75);
    scrollTrainDest.setDrawableSize(40, 0);
    scrollTrainDest.setDrawables(scrollTrainDestListItems, updateItemCallback);
    add(scrollTrainDest);

    textArea1.setXY(249, 136);
    textArea1.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    textArea1.setLinespacing(0);
    textArea1.setTypedText(touchgfx::TypedText(T___SINGLEUSE_ED33));
    add(textArea1);
}

TrainTicketViewBase::~TrainTicketViewBase()
{

}

void TrainTicketViewBase::setupScreen()
{
    scrollTrainDest.initialize();
    for (int i = 0; i < scrollTrainDestListItems.getNumberOfDrawables(); i++)
    {
        scrollTrainDestListItems[i].initialize();
    }
}

void TrainTicketViewBase::flexButtonCallbackHandler(const touchgfx::AbstractButtonContainer& src)
{
    if (&src == &buttonDown)
    {
        //buttonDownPressed
        //When buttonDown clicked call virtual function
        //Call buttonDownPressed
        buttonDownPressed();
    }
    if (&src == &buttonUp)
    {
        //buttonUpPressed
        //When buttonUp clicked call virtual function
        //Call buttonUpPressed
        buttonUpPressed();
    }
}

void TrainTicketViewBase::buttonCallbackHandler(const touchgfx::AbstractButton& src)
{
    if (&src == &buttonNext)
    {
        //buttonNextPressed
        //When buttonNext clicked change screen to ReviewTicket
        //Go to ReviewTicket with no screen transition
        application().gotoReviewTicketScreenNoTransition();
    }
    if (&src == &buttonCancel)
    {
        //trainButtonCancelPressed
        //When buttonCancel clicked call virtual function
        //Call trainButtonCancelPressed
        trainButtonCancelPressed();
    }
}

void TrainTicketViewBase::updateItemCallbackHandler(touchgfx::DrawableListItemsInterface* items, int16_t containerIndex, int16_t itemIndex)
{
    if (items == &scrollTrainDestListItems)
    {
        scrollTrainDestUpdateItem(scrollTrainDestListItems[containerIndex], itemIndex);
    }
}
