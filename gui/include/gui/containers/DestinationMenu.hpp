#ifndef DESTINATIONMENU_HPP
#define DESTINATIONMENU_HPP

#include <gui_generated/containers/DestinationMenuBase.hpp>

class DestinationMenu : public DestinationMenuBase
{
public:
    DestinationMenu();
    virtual ~DestinationMenu() {}

    virtual void initialize();

    void setNumber(int no);
protected:
};

#endif // DESTINATIONMENU_HPP
