/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef TRAINTICKETVIEWBASE_HPP
#define TRAINTICKETVIEWBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/trainticket_screen/TrainTicketPresenter.hpp>
#include <touchgfx/widgets/Box.hpp>
#include <touchgfx/widgets/Image.hpp>
#include <touchgfx/widgets/TextAreaWithWildcard.hpp>
#include <touchgfx/containers/buttons/Buttons.hpp>
#include <touchgfx/widgets/TextArea.hpp>
#include <touchgfx/widgets/ButtonWithLabel.hpp>
#include <touchgfx/containers/scrollers/ScrollList.hpp>
#include <gui/containers/DestinationMenu.hpp>

class TrainTicketViewBase : public touchgfx::View<TrainTicketPresenter>
{
public:
    TrainTicketViewBase();
    virtual ~TrainTicketViewBase();
    virtual void setupScreen();

    virtual void scrollTrainDestUpdateItem(DestinationMenu& item, int16_t itemIndex)
    {
        // Override and implement this function in TrainTicket
    }

    /*
     * Virtual Action Handlers
     */
    virtual void buttonDownPressed()
    {
        // Override and implement this function in TrainTicket
    }
    virtual void buttonUpPressed()
    {
        // Override and implement this function in TrainTicket
    }
    virtual void trainButtonCancelPressed()
    {
        // Override and implement this function in TrainTicket
    }

protected:
    FrontendApplication& application() {
        return *static_cast<FrontendApplication*>(touchgfx::Application::getInstance());
    }

    /*
     * Member Declarations
     */
    touchgfx::Box __background;
    touchgfx::Image background;
    touchgfx::TextAreaWithOneWildcard textTicketNo;
    touchgfx::IconButtonStyle< touchgfx::BoxWithBorderButtonStyle< touchgfx::TouchButtonTrigger >  >  buttonDown;
    touchgfx::IconButtonStyle< touchgfx::BoxWithBorderButtonStyle< touchgfx::TouchButtonTrigger >  >  buttonUp;
    touchgfx::TextArea textSelectedDest;
    touchgfx::ButtonWithLabel buttonNext;
    touchgfx::ButtonWithLabel buttonCancel;
    touchgfx::ScrollList scrollTrainDest;
    touchgfx::DrawableListItems<DestinationMenu, 7> scrollTrainDestListItems;
    touchgfx::TextArea textArea1;

    /*
     * Wildcard Buffers
     */
    static const uint16_t TEXTTICKETNO_SIZE = 10;
    touchgfx::Unicode::UnicodeChar textTicketNoBuffer[TEXTTICKETNO_SIZE];

private:

    /*
     * Callback Declarations
     */
    touchgfx::Callback<TrainTicketViewBase, touchgfx::DrawableListItemsInterface*, int16_t, int16_t> updateItemCallback;
    touchgfx::Callback<TrainTicketViewBase, const touchgfx::AbstractButtonContainer&> flexButtonCallback;
    touchgfx::Callback<TrainTicketViewBase, const touchgfx::AbstractButton&> buttonCallback;

    /*
     * Callback Handler Declarations
     */
    void updateItemCallbackHandler(touchgfx::DrawableListItemsInterface* items, int16_t containerIndex, int16_t itemIndex);
    void flexButtonCallbackHandler(const touchgfx::AbstractButtonContainer& src);
    void buttonCallbackHandler(const touchgfx::AbstractButton& src);

};

#endif // TRAINTICKETVIEWBASE_HPP
