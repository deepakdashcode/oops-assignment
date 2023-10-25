/*
Write a class template to represent a generic vector. Include
member functions to do the following tasks: to create the vector,
to modify the value of a given element, to multiply by a scalar
value, to display the vector in the form (10, 20, 30,…..)
*/

#include<iostream>
using namespace std;
class Vector{
    int* arr;
    int size;
    public:
    Vector(int size){
        this->size = size;
        arr = (int*)malloc(sizeof(int) * size);
    }
    void addElements(){
        cout << "Enter elements : ";
        for(int i = 0; i < size; i ++)
            cin >> arr[i];
    }
    void disp(){
        cout << "(";
        for(int i = 0; i < size - 1; i ++)
            cout << arr[i] << ", ";
        cout << arr[size - 1] << ")\n";
    }
    Vector operator*(int x){
        for(int i = 0; i < size; i ++)
            arr[i] *= x;
        return *this;
    }
};
int main()
{
    int n;
    cout << "Enter n : ";
    cin >> n;
    Vector v(n);
    v.addElements();
    v.disp();
    v = v * 3;
    v.disp();
    return 0;
}
/*
Enter n : 5
Enter elements : 2 4 3 5 6
(2, 4, 3, 5, 6)
(6, 12, 9, 15, 18)
*/