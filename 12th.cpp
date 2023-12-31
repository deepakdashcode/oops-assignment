/*
Define a class to represent a bank account. Include the following
data members: Name of the depositor, Account number, type of
the account, balance amount. Member Functions: To assign initial
value, to deposit an amount, to withdraw an amount, to display
name and balance. Write a program to test the class
*/
#include<iostream>
using namespace std;
class BankAccount{
    string name, type;
    long long accno;
    int balance;
    public:
    BankAccount(string name, string type, long long accno, int balance){
        this->name = name;
        this->type = type;
        this->accno = accno;
        this->balance = balance;
    }

    void deposit(int amount){
        cout << "Deposited Successfully\n";
        balance += amount;
    }
    void withdraw(int amount){
        if(balance >= amount){
            balance -= amount;
            cout << "Withdrawn Successfully\n";
            cout << "Remaining balance = " << balance << endl;
        }
        else
            cout << "Insufficient Balance\n";
    }
    void disp(){
        cout << "Name : " << name << endl;
        cout << "Balance : " << balance << endl;
    }

};
int main()
{
    string name, type;
    long long accno;
    int balance;
    cout << "Enter your name : ";
    fflush(stdin);
    getline(cin, name);
    cout << "Enter account type : ";
    cin >> type;
    cout << "Enter account number : ";
    cin >> accno;
    cout << "Enter initial balance : ";
    cin >> balance;

    BankAccount acc(name, type, accno, balance);
    acc.disp();

    return 0;
}
// Output
/*
Enter your name : Deepak Dash
Enter account type : Savings
Enter account number : 121121212
Enter initial balance : 2000
Name : Deepak Dash
Balance : 2000
*/