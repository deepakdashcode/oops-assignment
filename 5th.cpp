/*
WAP to calculate the variance & standard deviation of N numbers.
*/
#include<iostream>
#include<math.h>
#include<stdlib.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter n\n";
    cin >> n;
    int* v = (int*)malloc(sizeof(int)*n);
    float mean = 0, sq;
    cout << "Enter n numbers\n";
    for(int i = 0; i < n; i ++)
    {
        cin >> v[i];
        mean = mean + v[i];
    }
    mean = mean / n;
    float variance = 0;
    for(int i = 0; i < n; i ++)
        variance += pow((v[i] - mean), 2);
    
    variance = variance / n;
    float stdDev = sqrt(variance);
    cout << "Variance = " << variance << endl;
    cout << "Standard deviation = " << stdDev << endl;
    return 0;
}
// Output
/*
Enter n
5
Enter n numbers
1 2 3 4 5
Variance = 2
Standard deviation = 1.41421
*/