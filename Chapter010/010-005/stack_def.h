#ifndef STACK_DEF_H_INCLUDED
#define STACK_DEF_H_INCLUDED

struct customer
{
    char fullname[35];
    double payment;
};

typedef customer Item;

class Stack
{
private:
    enum {MAX = 10};
    Item items[MAX];
    int top;
public:
    Stack();
    bool isempty() const;
    bool isfull() const;
    // push() returns false if stack already is full, true otherwise
    bool push(const Item & item);
    // pop() returns false if stack already is empty, true otherwise
    bool pop(Item & item);
};
#endif // STACK_DEF_H_INCLUDED
