#include <iostream>
#include <string>
using namespace std;


class BankAccount {
private :
    string accountHolder;
    int accountNumber;
    double balance;

public :
    BankAccount(string a, int an, double b){
     accountHolder = a;
     accountNumber = an;
     balance = b;

    }

    void deposit(double amount){
    balance = balance + amount;
    }

    void withdraw(double amount){

    if(amount>balance){
        cout<<"Sorry you have not enough balance"<<endl;
    }
    else {
        balance = balance - amount;


    }
    }

    void displayinfo() {
    cout<<"Your balance is: "<<balance<<endl;
    cout<<"Your accountNumber is: "<<accountNumber<<endl;
    cout<<"Your accountHolder is: "<<accountHolder<<endl;

    }


};

int main()
{
string accountHolder;
int accountNumber;
double balance;
double amount;

    cout<< "what is your account holder name?"<<endl;
    cin>>accountHolder;

    cout<<"what is your accountNumber?"<<endl;
    cin>>accountNumber;

    cout<<"what is your initial balance?"<<endl;
    cin>>balance;


    BankAccount bankaccount1(accountHolder, accountNumber, balance);

    int choice;

    while(true){
    cout << "1. Deposit\n";
    cout << "2. Withdraw\n";
    cout << "3. Display Info\n";
    cout << "4. Exit\n";
    cout << "Choose option: ";
    cin >> choice;

switch(choice) {
case 1 : cout<<"How much money you would like to deposit: ";
         cin>>amount;
         bankaccount1.deposit(amount);
         cout << "Deposited $" << amount << " successfully current balance: ";
         bankaccount1.displayinfo();
         break;
case 2 : cout<<"How much money you would like to withdraw: ";
         cin>>amount;
         bankaccount1.withdraw(amount);
         cout << "You withdrew $" << amount << " successfully current balance: ";
         bankaccount1.displayinfo();
         break;
case 3 :
         bankaccount1.displayinfo();
         break;
case 4 : return 0;

default : cout<<"invalid choice"<<endl;
    }
    }

    return 0;
}
