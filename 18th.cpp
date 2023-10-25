/*
Define a class string. Use overloaded == operator to compare two
strings.
*/
#include<iostream>
using namespace std;
class str{
    public:
    char* s;
    int size;

    str(char* s){
        this->s = s;
        size = 0;
        int index = 0;
        char ch = s[0];
        while(ch){
            ch = s[++index];
            size++;
        }
    }
    int operator==(str b){
        if(size != b.size) return 0;
        for(int i; i < size; i ++)
            if(s[i] != b.s[i]) return 0;
        return 1;
    }
};
int main()
{
    char a[] = "Deepak";
    char b[] = "Deepak";
    char c[] = "Raman";
    str s1(a);
    str s2(b);
    str s3(c);
    cout << (s1 == s2) << endl;
    cout << (s2 == s3) << endl;
    return 0;
}
// Output
/*
1
0
*/