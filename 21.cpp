/*
Write a function template for finding the minimum value
contained in an array
*/
#include<iostream>
using namespace std;
template <class T>
T min(T* arr, int size)
{
	T m = arr[0];
	for(int i = 1; i < size; i++)
	{
		if (arr[i] < m) m = arr[i];
	}
	return m;
}
int main()
{
	int arr[] = {1, 3, 5 , 7, -2, 5};
	cout << min(arr, 6) << endl;
	return 0;
}
// Output
/*
-2
*/