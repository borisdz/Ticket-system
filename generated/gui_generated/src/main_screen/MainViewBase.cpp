/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/main_screen/MainViewBase.hpp>
#include <touchgfx/Color.hpp>
#include <images/BitmapDatabase.hpp>
#include <texts/TextKeysAndLanguages.hpp>

MainViewBase::MainViewBase() :
    buttonCallback(this, &MainViewBase::buttonCallbackHandler)
{
    __background.setPosition(0, 0, 480, 272);
    __background.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    add(__background);

    background.setXY(0, 0);
    background.setBitmap(touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_BACKGROUNDS_480X480_SPOTLIGHTS_ID));
    add(background);

    trainTicket.setXY(120, 86);
    trainTicket.setBitmaps(touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_REGULAR_HEIGHT_50_MEDIUM_ROUND_INACTIVE_ID), touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_REGULAR_HEIGHT_50_MEDIUM_ROUND_INACTIVE_ID));
    trainTicket.setLabelText(touchgfx::TypedText(T___SINGLEUSE_SHLD));
    trainTicket.setLabelColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    trainTicket.setLabelColorPressed(touchgfx::Color::getColorFromRGB(255, 255, 255));
    trainTicket.setAction(buttonCallback);
    add(trainTicket);

    busTicket.setXY(120, 148);
    busTicket.setBitmaps(touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_REGULAR_HEIGHT_50_MEDIUM_ROUND_INACTIVE_ID), touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_REGULAR_HEIGHT_50_MEDIUM_ROUND_INACTIVE_ID));
    busTicket.setLabelText(touchgfx::TypedText(T___SINGLEUSE_WF0K));
    busTicket.setLabelColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    busTicket.setLabelColorPressed(touchgfx::Color::getColorFromRGB(255, 255, 255));
    busTicket.setAction(buttonCallback);
    add(busTicket);
}

MainViewBase::~MainViewBase()
{

}

void MainViewBase::setupScreen()
{

}

void MainViewBase::buttonCallbackHandler(const touchgfx::AbstractButton& src)
{
    if (&src == &trainTicket)
    {
        //SwitchtoTrainTicket
        //When trainTicket clicked change screen to TrainTicket
        //Go to TrainTicket with screen transition towards East
        application().gotoTrainTicketScreenSlideTransitionEast();
    }
    if (&src == &busTicket)
    {
        //SwitchtoBusTicket
        //When busTicket clicked change screen to BusTicket
        //Go to BusTicket with screen transition towards East
        application().gotoBusTicketScreenSlideTransitionEast();
    }
}
