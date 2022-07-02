#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
    int inp;
    int i = 0, sum=0;
    cout << "Enter the input : ";
    cin>>inp;
    cout << "Formula is n/2 *(a+len) == " << (inp/2)*(1+inp);
    while (inp>0){
        cout << inp << " ";
        sum = sum + inp;
        inp-=1;
    }
    cout<< "Sum is : " << sum << endl;
    
}

