#ifndef LIST_DEF_H_INCLUDED
#define LIST_DEF_H_INCLUDED

typedef int Item;

class List
{
private:
    enum {MAX = 3};
    Item items[MAX];
    int top;
public:
    List();
    bool isempty() const;
    bool isfull() const;
    // push() returns false if stack already is full, true otherwise
    bool push(const Item & item);
    // pop() returns false if stack already is empty, true otherwise
    bool pop(Item & item);
    void visit(void(*pf)(Item & item));
    void showitem() const;
};


void plus100(Item & item);
#endif // STACK_DEF_H_INCLUDED
