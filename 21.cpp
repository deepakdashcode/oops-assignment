/*
Write a function template for finding the minimum value
contained in an array
*/
#include<iostream>
using namespace std;
int min(int arr[], int size){
    int m = arr[0];
    for(int i = 1; i < size; i ++){
        if(arr[i] < m) m = arr[i];
    }
    return m;
}
int main()
{
    int arr[] = {1, 8, 7, 6, 3};
    cout << "Minimum = " << min(arr, 5) << endl;
    return 0;
}
// Output
/*
Minimum = 1
*/