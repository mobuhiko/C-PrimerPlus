#ifndef LIST_DEF_H_INCLUDED
#define LIST_DEF_H_INCLUDED
#include <iostream>

using std::ostream;

typedef unsigned long Item;

class Stack
{
private:
    enum {MAX = 10};
    Item * pitems;
    int size;
    int top;
public:
    Stack(int n = MAX);
    Stack(const Stack & st);
    ~Stack();
    bool isempty() const;
    bool isfull() const;
    // push() returns false if stack already is full, true otherwise
    bool push(const Item & item);
    // pop() returns false if stack already is empty, true otherwise
    bool pop(Item & item);
    Stack & operator=(const Stack & st);
    friend ostream & operator<<(ostream & os, const Stack & st);
};
#endif // STACK_DEF_H_INCLUDED
