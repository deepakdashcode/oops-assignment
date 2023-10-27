/*
Create a base class called shape. Derive two specific classes called
triangle and rectangle from the base shape. Using these three
classes design a program that will accept dimensions of a triangle
or a rectangle interactively, and display the area
*/
#include<iostream>
using namespace std;
class Shape{
    protected:
    int noOfsides;
};
class Triangle: public Shape{
    int base, height;
    public:
    Triangle(){
        noOfsides = 3;
        cout << "Enter base : ";
        cin >> base;
        cout << "Enter height : ";
        cin >> height;
    }
    Triangle(int base, int height){
        noOfsides = 3;
        this->base = base;
        this->height = height;
    }

    void area(){
        cout << "Area = " << (0.5 * base * height) << endl;
    }
};
class Rectangle: public Shape{
    int length, breadth;
    public:
    Rectangle(){
        noOfsides = 4;
        cout << "Enter Length : ";
        cin >> length;
        cout << "Enter breadth : ";
        cin >> breadth;
    }
    Rectangle(int length, int breadth){
        noOfsides = 4;
        this->length = length;
        this->breadth = breadth;
    }

    void area(){
        cout << "Area = " << (length * breadth) << endl;
    }
};
int main()
{
    char ch = 'y';
    while(ch == 'y' || ch =='Y'){
        int choice;
        cout << "Enter 1 for Triangle or 2 for Rectangle : ";
        cin >> choice;
        if(choice == 1){
            Triangle a;
            a.area();
        }
        else if(choice == 2){
            Rectangle b;
            b.area();
        }
        else{
            cout << "Wrong Choice\n";
        }
        cout << "Press Y to continue\n";
        fflush(stdin);
        ch = getchar();
    }
    return 0;
}
// Output
/*
Enter 1 for Triangle or 2 for Rectangle : 1
Enter base : 2
Enter height : 1
Area = 1
Press Y to continue
y
Enter 1 for Triangle or 2 for Rectangle : 2
Enter Length : 2  
Enter breadth : 3
Area = 6
Press Y to continue
N
*/