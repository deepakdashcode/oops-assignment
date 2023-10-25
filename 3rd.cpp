/*
Create a bio-data or resume on your name having student name,
address, father’s name, telephone no, email address, academic
qualification, extracurricular activities etc.
*/
#include<iostream>
#include<string.h>
using namespace std;
class Resume{
    string Sname, Fname, email,
    qualification, extras, address, phone;
    public:
    Resume(string Sname, string Fname, string email, string qualification, string extras, string phone, string address)
    {
        this->address = address;
        this->phone = phone;
        this->Sname = Sname;
        this->Fname = Fname;
        this->email = email;
        this->qualification = qualification;
        this->extras = extras;
    }
    void disp(){
        cout << "Student's Name :" << Sname<< endl;
        cout << "Father's Name :" << Fname<< endl; 
        cout << "Email address :" << email<< endl; 
        cout << "Phone number :" << phone<< endl; 
        cout << "Qualifications :" << qualification<< endl; 
        cout << "Extra Curricular :" << extras << endl;
    }
};
int main()
{
    string Sname, Fname, email,
    qualification, extras, address;
    string phone;
    cout << "Enter Your name\n";
    fflush(stdin);
    getline(cin, Sname);

    cout << "Enter Your Father's Name\n";
    fflush(stdin);
    getline(cin, Fname);

    cout << "Enter Your Email Address\n";
    fflush(stdin);
    getline(cin, email);

    cout << "Enter Your Address\n";
    fflush(stdin);
    getline(cin, address);

    cout << "Enter Your Phone Number\n";
    fflush(stdin);
    getline(cin, phone);

    cout << "Enter Your academic qualifications\n";
    fflush(stdin);
    getline(cin, qualification);

    cout << "Enter Your Extracurricular activities\n";
    fflush(stdin);
    getline(cin, extras);

    cout << "\n";
    Resume r(Sname, Fname, email, qualification, extras, phone, address);
    r.disp();
    return 0;
}

// Output
/*
Enter Your name
Deepak Dash
Enter Your Father's Name
Manoj Dash
Enter Your Email Address
dipudash.2003@gmail.com
Enter Your Address
Khordha, Odisha
Enter Your Phone Number
2314214312
Enter Your academic qualifications
Bachelor In Technology
Enter Your Extracurricular activities
Football, Online FPS and Novel writing

Student's Name :Deepak Dash
Father's Name :Manoj Dash
Email address :dipudash.2003@gmail.com
Phone number :2314214312
Qualifications :Bachelor In Technology
Extra Curricular :Football, Online FPS and Novel writing
*/