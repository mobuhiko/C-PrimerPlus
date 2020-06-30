#include <iostream>
#include <cctype>
#include "stack_def.h"

int main()
{
    using namespace std;
    Stack st;
    char ch;
    customer temp_customer;
    double total_payment = 0;
    cout << "Please enter A to add a purchase order,\n"
        << "D to delete a purchase order, Q to quit\n";

    while(cin >> ch && toupper(ch) != 'Q')
    {
        while(cin.get() !='\n')
            continue;
        if(!isalpha(ch))
        {
            cout << '/a' << "ERROR\n";
            continue;
        }

        switch(ch)
        {
        case 'A':
        case 'a':
            cout << "Enter your name: ";
            cin.getline(temp_customer.fullname, 35);
            cout << "Enter the payment: ";
            cin >> temp_customer.payment;
            if(st.isfull())
                cout << "Stack is already full\n";
            else
                st.push(temp_customer);
            break;
        case 'D':
        case 'd':
            if(st.isempty())
                cout << "Stack is already empty\n";
            else
            {
                total_payment += temp_customer.payment;
                st.pop(temp_customer);
                cout << "The information is deleted\n";
            }
            break;
        }
        cout << "Please enter A to add a purchase order,\n"
            << "D to delete a purchase order, Q to quit\n";
    }
    cout << "TOTAL PAYMENT: " << total_payment << endl;
    cout << "Bye\n";
}
