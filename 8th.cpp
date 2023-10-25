/*
WAP to calculate the simple interest and compound interest for a
given principal and time period
*/
#include<iostream>
#include<math.h>
using namespace std;
int main()
{   // Assuming compound interest to be compounded annually => n = 1
    float p, t, r, n = 1;
    cout << "Enter Principal, Time and Rate : ";
    cin >> p >> t >> r;
    float si = p*t*r/100.0;
    float ci = p * pow((1 + r*0.01/n), n*t) - p;
    cout << "Simple interest = " << si << endl;
    cout << "Compound Interest = " << ci << endl;
    return 0;
}
/*
Enter Principal, Time and Rate : 1000 3 8
Simple interest = 240
Compound Interest = 259.712
*/