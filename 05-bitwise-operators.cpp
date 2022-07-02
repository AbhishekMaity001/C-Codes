#include<iostream>
using namespace std;
int main(){
    int a = 5;
    int b = 6;
    cout << "a & b  = " << (a&b) << endl;
    cout << "a | b  = " << (a|b) << endl;
    cout << "~ a  = " << (~10) << endl;
    cout << "a ^ b  = " << (a^b) << endl;

    // LEFT SHIFT (multiply by the shift number * 2) & RIGHT SHIFT (divide by the shift number * 2) 
    // in the right shift just omit the last shifted digits.
    cout << (45>>1) << endl;
    cout << (45>>2) << endl;
    cout << (45<<1) << endl;
    cout << (45<<2) << endl;

}