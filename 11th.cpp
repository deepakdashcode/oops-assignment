/*
WAP to enter a list of books for which we place an order with a
dealer. The list includes books serial number, quantity and price of
each book. Also perform operations such as adding a book to the
list, delete a book from list and printing the total value of the
order
*/
#include<iostream>
#include<stdlib.h>
using namespace std;
class Book{
    public:
    int serial, quantity, price;
    Book(int serial, int quantity, int price){
        this->serial = serial;
        this->quantity = quantity;
        this->price = price;
    }
    void disp(){
        cout << "Serial : " << serial << endl;
        cout << "Quantity : " << quantity << endl;
        cout << "Price : " << price << endl;
    }
};
class List{
    Book* arr = 0;
    int size = 0;
    int MaxSize;
    public:
    List(int MaxSize){
        this->MaxSize = MaxSize;
        arr = (Book*)malloc(sizeof(Book) * MaxSize);
    }
    void addBook(Book b){
        int present = 0;
        for(int i = 0; i < size; i ++){
            if(arr[i].serial == b.serial){
                arr[i].quantity += b.quantity;
                arr[i].price = b.price;
                present = 1;
            }
        }
        if(!present)
        {
            if(MaxSize == size){
            // We need to expand the array
            cout << "Maximum Size reached\n";
            cout << "Expanding Size\n";
            MaxSize *= 2;
            Book* temp = (Book*)malloc(sizeof(Book) * MaxSize);
            for(int i = 0; i < size; i ++){
                temp[i] = arr[i];
            }
            temp[size++] = b;
            free(arr);
            arr = temp;
            cout << "Expansion complete and book added successfully\n";
        }
        else
            arr[size++] = b;
        }
        
    }
    void deleteBook(int serial)
    {
        int index = -1;
        for(int i = 0; i < size; i ++){
            if(arr[i].serial == serial){
                index = i;
                break;
            }
        }
        if(index == -1){
            cout << "Error ! Book Not found\n";
            return;
        }
        else{
            for(int i = index; i < size - 1; i ++)
                arr[i] = arr[i + 1];
            size --;
            cout << "Book Deleted Successfully\n";
        }
    }
    void disp(){
        cout << "\n";
        for(int i = 0; i < size; i ++){
            arr[i].disp();
            cout << "\n";
        }
    }
};
int main()
{
    int n;
    cout << "Enter n : ";
    cin >> n;
    List books(n);
    for(int i = 0; i < n; i ++){
        int serial, quantity, price;
        cout << "Enter Serial : ";
        cin >> serial;
        cout << "Enter Quantity : ";
        cin >> quantity;
        cout << "Enter Price : ";
        cin >> price;

        Book temp(serial, quantity, price);
        books.addBook(temp);
    }
    books.disp();
    books.addBook(Book(10, 12, 200));
    books.addBook(Book(20, 2, 210));
    books.addBook(Book(30, 11, 230));
    books.addBook(Book(40, 7, 350));
    books.disp();
    books.deleteBook(23);
    books.deleteBook(2);
    books.disp();
    return 0;
}

/*
Enter n : 2
Enter Serial : 1
Enter Quantity : 10
Enter Price : 100
Enter Serial : 2
Enter Quantity : 3
Enter Price : 200

Serial : 1
Quantity : 10
Price : 100

Serial : 2
Quantity : 3
Price : 200

Maximum Size reached
Expanding Size
Expansion complete and book added successfully
Maximum Size reached
Expanding Size
Expansion complete and book added successfully

Serial : 1
Quantity : 10
Price : 100

Serial : 2
Quantity : 3
Price : 200

Serial : 10
Quantity : 12
Price : 200

Serial : 20
Quantity : 2
Price : 210

Serial : 30
Quantity : 11
Price : 230

Serial : 40
Quantity : 7
Price : 350

Error ! Book Not found
Book Deleted Successfully

Serial : 1
Quantity : 10
Price : 100

Serial : 10
Quantity : 12
Price : 200

Serial : 20
Quantity : 2
Price : 210

Serial : 30
Quantity : 11
Price : 230

Serial : 40
Quantity : 7
Price : 350
*/