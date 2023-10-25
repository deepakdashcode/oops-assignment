/*
Write a function power() to raise a number m to a power n. the
function takes a double value for m and int value for n, and
returns the result correctly. Use a default value of 2 for n to make
the function to calculate squares when this argument is omitted.
*/
#include<iostream>
using namespace std;
double power(double m, int n = 2){
    if(n == 0) return 1;
    else if(n & 1) return power(m, n/2) * power(m, n / 2) * m;
    return power(m, n/2) * power(m, n/2);
}
int main()
{
    double m;
    int n;
    cout << "Enter m and n : ";
    cin >> m >> n;
    cout << power(m, n) << endl;
    cout << power(m) << endl;
    return 0;
}
/*
Enter m and n : 3 4
81
9
*/