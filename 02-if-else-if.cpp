#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
    char a;
    int asci;
    cout << "Enter a Character : ";
    cin >> a;
    asci = int(a);
    // cout << int('a') << '\t' << int('z') << '\t' << int('A') << '\t' << int('Z') << "\n";

    if ((asci >=97) && (asci <=122)) {
        cout<<"Small case!!";
    }
    else if ((asci>=65)&&(asci<=90)){
        cout<<"Capital Case!!";
    }
    else {
        cout << "Special character!!";
    }

    // int inp;
    // cout<<"Enter input : ";
    // cin>>inp;
    // while (i){

    // }

}