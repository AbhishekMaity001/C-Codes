#include <iostream>
#include<stdio.h>
using namespace std;
// g++ first.cpp -o first_executable_file // to create an executable file through cmd
int main()
{
    /*
    MEMORY ALLOCATION : 
    int 4 bytes
    float 8 bytes
    double 8 bytes
    char 1 byte
    bool 1 bit

    HOW NEGATIVE NUMBERS ARE STORED?? (first 1 means it is negative!)
    1. first convert into binary --> 2. take 1's compliment --> 3. take 2's compliment

    Signed means both negative and positive nos.
    Unsigned means only positive nos.
    2**32 -1 is the max limit that it can be stored in integer!

    */

    // int a = 123;  
    // cout << a << "\n";

    // char b = 'c';  
    // cout << b << endl;

    // bool bb = true;
    // cout << bb << endl;

    // double dd = 22.3345;
    // cout << dd << endl;

    // string st = "abhishek";
    // cout << st << endl;

    // cout<<sizeof(bb) <<endl;

    // cout << "namaste duniya!!" << endl;

    // char a  = 97; // 97 TYPECASTED TO char DATATYPE
    // int a = 'a'; // 'a' is TYPECASTED TO int DATATYPE AUTOMATICALLY!!
    // cout << a << endl;

    // float ff = 3.0/4;
    // cout << ff;

    int aa = 3;
    float bb = 3.0;
    // bool ans = (aa==bb);
    // cout << ans <<endl;

    if (aa>bb) {
        cout<<"a is greater!!";
    }
    else if (aa<bb) {
        cout << "b is greater";
    }
    else {
        cout << "both are equal";
    }

    int n;
    cout << "\n Enter the number : ";
    cin >> n;
    cout << "\n Hellow the entered number is ==> " <<  n;
    // return 0;
}