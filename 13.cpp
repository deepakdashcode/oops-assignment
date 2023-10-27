/*
Modify the above class for handling 10 customers
*/
#include<iostream>
#include<stdlib.h>
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
    BankAccount** arr = (BankAccount**)malloc(sizeof(BankAccount*)*10);
    for(int i = 0; i < 2; i ++)
    {
    string name, type;
    long long accno;
    int balance;
    cout << "Enter your name : ";
    getline(cin, name);
    cout << "Enter account type : ";
    cin >> type;
    cout << "Enter account number : ";
    cin >> accno;
    cout << "Enter initial balance : ";
    cin >> balance;
    BankAccount* acc = new BankAccount(name, type, accno, balance);
    arr[i] = acc;
    fflush(stdin);
    }
    for(int i = 0; i < 2; i ++){
        arr[i]->disp();
    }
    return 0;
}
// Output
/*
Enter your name : Deepak Dash
Enter account type : Savings
Enter account number : 1212
Enter initial balance : 2000
Enter your name : Rajat Sahu
Enter account type : Savings
Enter account number : 12412
Enter initial balance : 5000
Name : Deepak Dash
Balance : 2000
Name : Rajat Sahu
Balance : 5000
*/