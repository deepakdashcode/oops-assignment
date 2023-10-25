/*
An electricity board charges
For the first 100 units – 60 p per unit.
For next 200 units- 80 p per unit.
Beyond 300 unit- 90 p per unit.

All users are charged a minimum of Rs 50.00. If the total amount is
more than Rs 300.00 then an additional surcharge of 15% is added.
WAP to read the names of users & no. of units consumed. Also, print
out the charges with names
*/

#include<iostream>
using namespace std;
class Bill{
    string name;
    int units;
    public:
    Bill(string name, int units){
        this->name = name;
        this->units = units;
    }
    float price(){
        float p = 50;
        if(units > 300)
            p = p + 0.6 * 100 + 0.8 * 200 + (units - 300) * 0.9;
        else if(units > 100)
            p = p + 0.6 * 100 + (units - 100) * 0.8;
        else
            p = p + 0.6 * units;
        
        if(p > 300){
            p = p + (15/100.0)*p;
        }

        return p;
    }
    void disp(){
        cout << "Name : " << name << endl;
        cout << "Units = " << units << endl;
        cout << "Price = " << price() << endl;
    }
};
int main()
{
    cout << "Enter the name : ";
    string name;
    int units;
    fflush(stdin);
    getline(cin, name);
    cout << "Enter the units : ";
    cin >> units;
    Bill a(name, units);
    a.disp();
    return 0;
}
// Output
/*
Enter the name : Deepak Kumar Dash
Enter the units : 246
Name : Deepak Kumar Dash
Units = 246
Price = 226.8
*/