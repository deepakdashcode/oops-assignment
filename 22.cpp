/*
Write a template function “alloc” that takes two parameter: n:
size of the array to allocate, val: a value of type T. The alloc
function should allocate an array of type T with n elements & set
all the elements in the array to the value val. A pointer to array is
returned.
*/
#include<iostream>
using namespace std;
template <class T>
T* alloc(int n, T val){
    T* arr = (T*)malloc(sizeof(T) * n);
    for(int i = 0; i < n; i ++)
        arr[i] = val;
    return arr;
}
int main()
{
    float* arr = alloc<float>(5, 5.4);
    for(int i = 0; i< 5; i ++)
        cout << arr[i] << "  ";
    cout << endl; 
    return 0;
}
/*
5.4  5.4  5.4  5.4  5.4
*/