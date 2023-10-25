/*
WAP to convert temperature in Fahrenheit to Celsius. 
*/ 
#include<iostream>
using namespace std;
int main()
{
    double f, c;
    cout << "Enter temperature in Fahrenheit\n";
    cin >> f;
    c = 5/9.0*(f - 32);
    cout << "Temperature in celcius = " << c << " degrees\n";
    return 0;
}
// Output
/*
Enter temperature in Fahrenheit
96.8
Temperature in celcius = 36 degrees
*/