/*
Create a class MAT of size m x n. Define all possible matrix
operations for MAT type objects.
*/
#include<iostream>
#include<stdlib.h>
using namespace std;
class matrix{
    public:
    int rows, columns;
    int** arr = 0;
    matrix(int rows, int columns){
        arr = (int**)malloc(sizeof(int*) * rows);
        this->rows = rows;
        this->columns = columns;
        for(int i = 0; i < rows; i ++){
            cout << "Enter elements of Row " << (i + 1) << " : ";
            int* temp = (int*)malloc(sizeof(int) * columns);
            for(int j = 0; j < columns; j ++){
                cin >> temp[j];
            }
            arr[i] = temp;
            
        }
    }
    matrix(){}

    void disp(){
        for(int i = 0; i < rows; i ++){
            for(int j = 0; j < columns; j ++)
                cout << arr[i][j] << "  ";
            cout << "\n";
        }
    }

    matrix operator+(matrix b){
        matrix ans;
        if(rows == b.rows && columns == b.columns){
            ans.arr = (int**)malloc(sizeof(int*) * rows);
            ans.rows = rows;
            ans.columns = columns;
            for(int i = 0; i < rows; i ++){
                int* temp = (int*)malloc(sizeof(int) * columns);
                for(int j = 0; j < columns; j ++)
                    temp[j] = arr[i][j] + b.arr[i][j];
                ans.arr[i] = temp;
            }
            return ans;
        }
        cout << "Can't add matrices of different dimensions\n";
        cout << "Returning NULL MATRIX\n";
        return ans;
    }
    matrix operator-(matrix b){
        matrix ans;
        if(rows == b.rows && columns == b.columns){
            ans.arr = (int**)malloc(sizeof(int*) * rows);
            ans.rows = rows;
            ans.columns = columns;
            for(int i = 0; i < rows; i ++){
                int* temp = (int*)malloc(sizeof(int) * columns);
                for(int j = 0; j < columns; j ++)
                    temp[j] = arr[i][j] - b.arr[i][j];
                ans.arr[i] = temp;
            }
            return ans;
        }
        cout << "Can't subtract matrices of different dimensions\n";
        cout << "Returning NULL MATRIX\n";
        return ans;
    }

    matrix operator*(matrix b){
        matrix ans;
        if(columns == b.rows){
            ans.rows = rows;
            ans.columns = b.columns;
            ans.arr = (int**)malloc(sizeof(int*) * ans.rows);
            for(int i = 0; i < ans.rows; i ++){
                for(int j = 0; j < ans.columns; j ++)
                {
                    ans.arr[i][j] = 0;
                    for(int n = 0; n < columns; n++)
                        ans.arr[i][j] += arr[i][n] * b.arr[n][j];
                }
            }
            return ans;
        }
        
        cout << "Can't multiply matrices\n";
        cout << "Returning NULL MATRIX\n";
        return ans;
    }
};
int main()
{
    matrix m1(2, 2);
    matrix m2(2, 2);

    cout << "Addition\n";
    (m1 + m2).disp();
    cout << "\n\n";

    cout << "Subtraction\n";
    (m1 - m2).disp();
    cout << "\n\n";

    cout << "Multiplication\n";
    (m1 * m2).disp();
    return 0;
}
// Output
/*
Enter elements of Row 1 : 3 2
Enter elements of Row 2 : 4 1
Enter elements of Row 1 : 4 2
Enter elements of Row 2 : 7 6
Addition
7  4  
11  7  


Subtraction
-1  0
-3  -5


Multiplication
26  18
23  14
*/