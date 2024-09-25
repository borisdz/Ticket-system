#include <gui/containers/ListItemContainer.hpp>

#include <texts/TextKeysAndLanguages.hpp>
#include <BitmapDatabase.hpp>

ListItemContainer::ListItemContainer() {

}

void ListItemContainer::initialize() {
	ListItemContainerBase::initialize();

}

void ListItemContainer::setListElements(int item) {
	switch (item) {
	case 0:
		image1.setBitmap(Bitmap(BITMAP_SIMPLE_DIV1_ID));
		textArea1.setTypedText(TypedText(T_RESOURCEID1));
		break;
	case 1:
		image1.setBitmap(Bitmap(BITMAP_SIMPLE_DIV1_ID));
		textArea1.setTypedText(TypedText(T_RESOURCEID2));
		break;
	case 2:
		image1.setBitmap(Bitmap(BITMAP_SIMPLE_DIV1_ID));
		textArea1.setTypedText(TypedText(T_RESOURCEID3));
		break;
	case 3:
		image1.setBitmap(Bitmap(BITMAP_SIMPLE_DIV1_ID));
		textArea1.setTypedText(TypedText(T_RESOURCEID4));
		break;
	case 4:
		image1.setBitmap(Bitmap(BITMAP_SIMPLE_DIV1_ID));
		textArea1.setTypedText(TypedText(T_RESOURCEID5));
		break;
	case 5:
		image1.setBitmap(Bitmap(BITMAP_SIMPLE_DIV1_ID));
		textArea1.setTypedText(TypedText(T_RESOURCEID6));
		break;
	case 6:
		image1.setBitmap(Bitmap(BITMAP_SIMPLE_DIV1_ID));
		textArea1.setTypedText(TypedText(T_RESOURCEID7));
		break;
	default:
		break;
	}
}
