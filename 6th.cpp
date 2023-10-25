/*
WAP to allocate an array of n size, print the sum and average &
delete the array.
*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    float sum = 0, average;
    cout << "Enter n\n";
    cin >> n;
    int* arr = (int*)malloc(sizeof(int) * n);
    cout << "Enter " << n << " elements\n";
    for(int i = 0; i < n; i ++){
        cin >> arr[i];
        sum = sum + arr[i];
    }
    average = sum / n;
    cout << "Sum = " << sum << endl;
    cout << "Average = " << average << endl;
    free(arr); 
    return 0;
}
// Output
/*
Enter n
4
Enter 4 elements
1 4 2 3
Sum = 10
Average = 2.5
*/