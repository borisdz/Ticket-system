#include <gui/containers/DestinationMenu.hpp>
#include <texts/TextKeysAndLanguages.hpp>

DestinationMenu::DestinationMenu() {

}

void DestinationMenu::initialize() {
	DestinationMenuBase::initialize();
}

void DestinationMenu::setNumber(int no) {
	text.invalidate();
	switch (no) {
	default:
		break;
	case 0:
		text.setTypedText(TypedText(T_SKOPJE));
		break;
	case 1:
		text.setTypedText(TypedText(T_DRACHEVO));
		break;
	case 2:
		text.setTypedText(TypedText(T_VELES));
		break;
	case 3:
		text.setTypedText(TypedText(T_GRADSKO));
		break;
	case 4:
		text.setTypedText(TypedText(T_NEGOTINO));
		break;
	case 5:
		text.setTypedText(TypedText(T_DEMIRKAPIJA));
		break;
	case 6:
		text.setTypedText(TypedText(T_GEVGELIJA));
		break;
	}
	text.invalidate();
}
