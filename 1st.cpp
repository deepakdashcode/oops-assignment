/*
WAP to read values of a, b & c & display value of x where x=a/b-c
*/

#include<iostream>
using namespace std;
int main()
{
    int a, b, c, x;
    cout << "Enter a, b and c\n";
    cin >> a >> b >> c;
    x = a / b - c;
    cout << "X = " << x << endl;
    return 0;
}
// Output 
/*
Enter a, b and c
7 3 2
X = 0
*/