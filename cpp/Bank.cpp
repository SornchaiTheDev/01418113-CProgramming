#include <iostream>
using namespace std;
class BankAccount {
private:
  long _id;
  int balance;
public:
  BankAccount(long id , int amount) {
    _id = id;
    balance = amount;
  }

  void Deposit(int amount) {
    balance += amount;
  }

  void Withdraw(int amount) {
    balance -= amount;
  }

  void CurrentAmount() {
    cout << "You have " << balance << " Baht." << endl;
  }

  int getBalance() const {
    return balance;
  }
};

int main() {
  BankAccount Chokun(6131076688 , 100);
  // Chokun.balance = 1000;
  Chokun.Deposit(12389);
  cout << "You have " << Chokun.getBalance() << " Baht." << endl;
  // Chokun.CurrentAmount();
  return 0;
}