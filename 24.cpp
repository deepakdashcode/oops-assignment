/*
Write a program to implement the stack data structures. Include
member functions push and pop with proper exception handling
*/
#include<iostream>
#include<stdlib.h>
using namespace std;
class Stack{
    int MaxSize;
    int* arr;
    int size;
    public:
    Stack(int MaxSize){
        size = 0;
        this->MaxSize = MaxSize;
        arr = (int*)malloc(sizeof(int) * MaxSize);
    }
    void push(int data){
        if(size == MaxSize)
            throw runtime_error("Unable to insert, Stack is Full");
        else
            arr[size++] = data;
    }
    int pop(){
        if(size == 0)
            throw runtime_error("Can not pop from an empty stack");
        else{
            size --;
            return arr[size];
        }
    }
    void disp(){
        for(int i = size - 1; i >= 0; i --)
            cout << arr[i] << "  ";
        cout << endl;
    }

};
int main()
{
    Stack s(5);
    s.push(3);
    s.push(4);
    s.push(1);
    s.push(3);
    s.push(4);
    s.push(1);
    s.disp();
    cout << s.pop() << endl;
    return 0;
}
/*
1  4  3  
1
*/