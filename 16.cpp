/*
A book shop maintains the inventory of books that are being sold
at the shop. The list includes details such as author, title, price,
publisher and stock position. Whenever a customer wants a book,
the sales person inputs the title and author and the system
searches the list and displays whether it is available or not. If it is
not, an appropriate message is displayed. If it is, then the system
displays the book details and request for the number of copies
required. If the requested copies are available, the total cost of
requested copies is displayed; otherwise the message “required
copies not in stock” is displayed. Design a system using a class
called books with suitable member functions and constructors.
Use new operator in constructor to allocate memory space
required.
*/
#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;
class Book{
    public:
    string author, title, publisher;
    int price, stock;
    Book(string author, string title, string publisher, int price, int stock){
        this->author = author;
        this->title = title;
        this->publisher = publisher;
        this->price = price;
        this->stock = stock;
    }
};
class Store{
    Book** arr = 0;
    int size = 0;
    public:
    Store(int size){
        this->size = size;
        arr = (Book**)malloc(sizeof(Book*)*size);
        for(int i = 0; i < size; i ++){
        string author, title, publisher;
        int price, stock;
        fflush(stdin);
        cout << "Enter Author name : ";
        getline(cin, author);
        fflush(stdin);
        cout << "Enter Book Title : ";
        getline(cin, title);
        fflush(stdin);
        cout << "Enter Publisher : ";
        getline(cin, publisher);
        cout << "Enter Price : ";
        cin >> price;
        cout << "Enter Stock : ";
        cin >> stock;
        arr[i] = new Book(author, title, publisher, price, stock);
        }
    }

    void buyBook(string title, string author){
        int present = 0;
        for(int i = 0; i < size; i++){
            if(arr[i]->author == author && arr[i]->title == title){
                present = 1;
                int qty;
                cout << "Enter Quantity : ";
                cin >> qty;
                if(arr[i]->stock >= qty){
                    cout << "Book Bought Successfully\n";
                    arr[i]->stock -= qty;
                }
                else{
                    cout << "Insufficient Stock\n";
                    cout << "Maximum Stock = " << arr[i]->stock << endl;
                }
            }
        }

        if(!present) cout << "Book Not Present in Store\n";
    }
};
int main()
{
    int n;
    cout << "Enter number of books : ";
    cin >> n;
    Store st(n);
    string title, author;
    cout << "\n\nBooks Added Successfully\n\n";
    cout << "Enter Title : ";
    fflush(stdin);
    getline(cin, title);
    cout << "Enter Author : ";
    fflush(stdin);
    getline(cin, author);
    st.buyBook(title, author);
    return 0;
}
// Output
/*
Enter number of books : 2
Enter Author name : Deepak Dash
Enter Book Title : War in Heaven
Enter Publisher : Peacock
Enter Price : 299
Enter Stock : 20
Enter Author name : Deepa Dash
Enter Book Title : Rewarding Curse
Enter Publisher : Peacock
Enter Price : 399
Enter Stock : 25


Books Added Successfully

Enter Title : Rewarding Curse
Enter Author : Deepa Dash
Enter Quantity : 5
Book Bought Successfully
*/