#include <stdio.h>
#include <iostream>
#include <cstdlib>
#include <cstring>
#include <string>

using namespace std;

class bank_account {
public:
  void withdraw();
  void deposit();
  // constructor
  bank_account();
  // deconstructor
  ~bank_account();
private:
  string m_user_name;
  int m_bank_id;
  double m_balance;
  int m_password;
  void show_balance();
};

void bank_account::show_balance() {
    cout << m_user_name << endl;
    printf("%06d\n", m_bank_id);
    printf("%.2f\n", m_balance);
}

void bank_account::withdraw() {
  double amount;
  cout << "Enter the amount\n";
  cin >> amount;
  if (amount > m_balance || amount < 0) {
    cout << "INVALID.\n\n";
  }
  else {
    m_balance -= amount;
  }
  show_balance();
  cout << "\n";
}

void bank_account::deposit() {
  double amount;
  cout << "Enter the amount\n";
  cin >> amount;
  if (amount < 0) {
    cout << "INVALID.\n\n";
  }
  else {
    cout << "Please insert the money\n";
    cout << "...\n"; // checking the amount by machine
    cout << "Transaction succeeded\n\n";
    m_balance += amount;
  }
  show_balance();
  cout << "\n";
}

bank_account::bank_account() {
  cout << "Enter your name\n";
  getline(cin, m_user_name);

  m_bank_id = rand();
  cout << "Your bank ID will be ";
  printf("%06d\n", m_bank_id);

  int password_1;
  cout << "Set your password\n";
  cin >> password_1;
  int password_2;
  cout << "Enter the password you set again\n";
  cin >> password_2;
  if (password_1 == password_2) {
      m_password = password_1;
  }
  else {
      cout << "ERROR. Please create the account again\n";
      exit(0);
  }

  m_balance = 0;

  cout << "The account is created successfully\n\n";
}

bank_account::~bank_account() {
    ;
}

void menu(bank_account bank_account);

int main() {
  cout << "Welcome to ABC Bank\n";
  cout << "Let's create your account\n";
  bank_account bank_account1;

  menu(bank_account1);

  return 0;
}

void menu(bank_account bank_account) {
    cout << "Welcome to ABC Bank\n";
    cout << "Deposit (Press 1)\n";
    cout << "Withdraw (Press 2)\n";
    cout << "Quit (Press 0)\n\n";
    int user_choice;
    cin >> user_choice;
    if (user_choice == 0) {
        bank_account.~bank_account();
        exit(0);
    }
    else if (user_choice == 1) {
        bank_account.deposit();
        return menu(bank_account);
    }
    else if (user_choice == 2) {

        bank_account.withdraw();
        return menu(bank_account);
    }
    else {
        cout << "ERROR! Please try again.\n\n";
        return menu(bank_account);
    }
}
