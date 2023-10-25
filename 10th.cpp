/*
Write a function that performs the same operation as above but
takes an int value for m. both the functions should have same
name. Use the concept of function overloading.
*/
#include<iostream>
using namespace std;
double power(double m, int n = 2){
    if(n == 0) 
    {
        cout << "Called double Function\n";
        return 1;
    }
    else 
    {
        double temp =  power(m, n/2);
        if(n & 1)return temp * temp * m;
        return temp * temp;
    }
    
}
int power(int m, int n = 2){
    if(n == 0) 
    {
        cout << "Called int Function\n";
        return 1;
    }
        else 
    {
        int temp =  power(m, n/2);
        if(n & 1)return temp * temp * m;
        return temp * temp;
    }
}
int main()
{
    double m;
    int n;
    cout << "Enter m and n : ";
    cin >> m >> n;
    cout << power(m, n) << endl;
    cout << power((int)m) << endl;
    return 0;
}
/*
Enter m and n : 3 5
Called double Function
243
Called int Function
9
*/