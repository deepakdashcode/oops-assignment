/*
Write a function for finding the average age of a class student.
Pass an array of student objects as parameter to that function.
Assume the default class strength to be 50 as default argument
*/
#include<iostream>
#include<stdlib.h>
using namespace std;
class Student{
    string name;
    int age;
    public:
    Student(string name, int age){
        this->name = name;
        this->age = age;
    }
    int getAge(){return age;}
};
float getAverage(Student** arr, int size = 50){
    float avg = 0;
    for(int i = 0; i < size; i ++)
        avg += arr[i]->getAge();
    avg /= size;
    return avg;
}
int main()
{
    int n;
    cout << "Enter n : (-1 for default)";
    cin >> n;
    if(n == -1) n = 50;
    Student** arr = (Student**)malloc(sizeof(Student*)*n);
    for(int i = 0;i < n; i ++){
        string name;
        int age;
        cout << "Enter name : ";
        fflush(stdin);
        getline(cin, name);
        cout << "Enter age : ";
        cin >> age;
        Student* temp = new Student(name, age);
        arr[i] = temp;
    }

    float avg = getAverage(arr, n);
    cout << "Average = " << avg << endl;
    return 0;
}
// Output
/*
Enter n : (-1 for default)3
Enter name : Deepak
Enter age : 19
Enter name : Raj Sahu
Enter age : 23
Enter name : Rita Malik
Enter age : 22
Average = 21.3333
*/