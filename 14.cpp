/*
Define a class of employees, containing employee number, name,
address and no.of dependents for the employee. Member
function: to insert and display information. Define an array of 20
employees. Display all employees with more than two
dependents
*/

#include<iostream>
using namespace std;
class Employee{
    int empno;
    string name;
    public:
    int dependents;
    Employee(int empno, string name, int dependents){
        this->empno = empno;
        this->name = name;
        this->dependents = dependents;
    }
    void disp(){
        cout << "Name : " << name << endl;
        cout << "Employee Number : " << empno << endl;
        cout << "Dependents : " << dependents << endl;
    }
};
int main()
{
    Employee** arr = (Employee**) malloc(sizeof(Employee**)*20);
    for(int i = 0; i < 3; i ++){
    int empno;
    string name;
    int dependents;
    cout << "Enter name : ";
    fflush(stdin);
    getline(cin, name);
    cout << "Enter employee number : ";
    cin >> empno;
    cout << "Enter dependents : ";
    cin >> dependents;
    Employee* temp = new Employee(empno, name, dependents);
    arr[i] = temp;
    }
    for(int i = 0; i < 3; i ++){
        if(arr[i]->dependents > 2) arr[i]->disp();
    }
    return 0;
}
// Output
/*
Enter name : Deepak Dash
Enter employee number : 1
Enter dependents : 2
Enter name : Raman Raj
Enter employee number : 2
Enter dependents : 3
Enter name : Ritu Nayak
Enter employee number : 3
Enter dependents : 4
Name : Raman Raj
Employee Number : 2
Dependents : 3
Name : Ritu Nayak
Employee Number : 3
Dependents : 4
*/