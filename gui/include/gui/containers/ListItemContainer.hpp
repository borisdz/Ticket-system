#ifndef LISTITEMCONTAINER_HPP
#define LISTITEMCONTAINER_HPP

#include <gui_generated/containers/ListItemContainerBase.hpp>

class ListItemContainer : public ListItemContainerBase
{
public:
    ListItemContainer();
    virtual ~ListItemContainer() {}

    virtual void initialize();

    void setListElements(int item);

protected:
};

#endif // LISTITEMCONTAINER_HPP
