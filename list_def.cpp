#include "list_def.h"
#include <iostream>

List::List()
{
    top = 0;
}

bool List::isempty() const
{
    return top == 0;
}

bool List::isfull() const
{
    return top == MAX;
}

bool List::push(const Item & item)
{
    if(top < MAX)
    {
        items[top++] = item;
        return true;
    }
    else
        return false;
}

bool List::pop(Item & item)
{
    if(top > 0)
    {
        item = items[--top];
        return true;
    }
    else
        return false;
}

void List::visit(void(*pf)(Item & item))
{
    for (int i = 0; i < top; i++)
    {
        pf(items[i]);
    }
}

void List::showitem() const
{
    for (int i = 0; i < top; i++)
    {
        std::cout << "#" << i+1 << ": " << items[i] << std::endl;
    }
}

void plus100(Item & item)
{
    item += 100;
}
