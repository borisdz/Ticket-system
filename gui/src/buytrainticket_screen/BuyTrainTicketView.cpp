#include <gui/buytrainticket_screen/BuyTrainTicketView.hpp>

#include <texts/TextKeysAndLanguages.hpp>
#include <BitmapDatabase.hpp>

BuyTrainTicketView::BuyTrainTicketView() :
		scrollList1_ItemSelectedCallback(this,
				&BuyTrainTicketView::scrollList1_ItemSelectedHandler) {

}

void BuyTrainTicketView::setupScreen() {
	scrollList1.setItemSelectedCallback(scrollList1_ItemSelectedCallback);
	BuyTrainTicketViewBase::setupScreen();
}

void BuyTrainTicketView::tearDownScreen() {
	BuyTrainTicketViewBase::tearDownScreen();
}

void BuyTrainTicketView::scrollList1UpdateItem(ListItemContainer& item,
		int16_t itemIndex) {
	item.setListElements(itemIndex);
}

void BuyTrainTicketView::scrollList1_ItemSelectedHandler(int16_t item) {
//	image1.invalidate();
//	textArea1.invalidate();
//
//	switch (item) {
//	case 0:
//		image1.setBitmap(Bitmap(BITMAP_SIMPLE_DIV1_ID));
//		textArea1.setTypedText(TypedText(T_RESOURCEID1));
//		break;
//	case 1:
//		image1.setBitmap(Bitmap(BITMAP_SIMPLE_DIV1_ID));
//		textArea1.setTypedText(TypedText(T_RESOURCEID2));
//		break;
//	case 2:
//		image1.setBitmap(Bitmap(BITMAP_SIMPLE_DIV1_ID));
//		textArea1.setTypedText(TypedText(T_RESOURCEID3));
//		break;
//	case 3:
//		image1.setBitmap(Bitmap(BITMAP_SIMPLE_DIV1_ID));
//		textArea1.setTypedText(TypedText(T_RESOURCEID4));
//		break;
//	case 4:
//		image1.setBitmap(Bitmap(BITMAP_SIMPLE_DIV1_ID));
//		textArea1.setTypedText(TypedText(T_RESOURCEID5));
//		break;
//	case 5:
//		image1.setBitmap(Bitmap(BITMAP_SIMPLE_DIV1_ID));
//		textArea1.setTypedText(TypedText(T_RESOURCEID6));
//		break;
//	case 6:
//		image1.setBitmap(Bitmap(BITMAP_SIMPLE_DIV1_ID));
//		textArea1.setTypedText(TypedText(T_RESOURCEID7));
//		break;
//	default:
//		break;
//	}
//
//	image1.invalidate();
//	textArea1.invalidate();

}
