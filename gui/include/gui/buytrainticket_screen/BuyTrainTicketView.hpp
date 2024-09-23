#ifndef BUYTRAINTICKETVIEW_HPP
#define BUYTRAINTICKETVIEW_HPP

#include <gui_generated/buytrainticket_screen/BuyTrainTicketViewBase.hpp>
#include <gui/buytrainticket_screen/BuyTrainTicketPresenter.hpp>

class BuyTrainTicketView : public BuyTrainTicketViewBase
{
public:
    BuyTrainTicketView();
    virtual ~BuyTrainTicketView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();

    virtual void scrollList1UpdateItem(ListItemContainer& item, int16_t itemIndex);
protected:
    Callback<BuyTrainTicketView, int16_t> scrollList1_ItemSelectedCallback;
    void scrollList1_ItemSelectedHandler(int16_t itemSelected);
};

#endif // BUYTRAINTICKETVIEW_HPP
