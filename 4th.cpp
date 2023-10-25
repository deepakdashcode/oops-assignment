/*
Write a function to swap the values of a pair of integers using call
by reference
*/
#include<iostream>
using namespace std;
void swap(int &a, int &b){
    a = a + b;
    b = a - b;
    a = a - b;
}
int main()
{
    int a, b;
    cout << "Enter a and b\n";
    cin >> a >> b;
    swap(a, b);
    cout << "a and b are " << a << " and " << b << endl;
    return 0;
}

// output 
/*
Enter a and b
3 5
a and b are 5 and 3
*/