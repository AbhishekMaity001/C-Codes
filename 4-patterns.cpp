#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
    int i=0, n;
    cout << "Enter the value of n : ";
    cin>>n;
    while (i<=n){
        int j=1;
        while(j<=n){
            cout<<i+1;  //"*";
            j+=1;
        }
        cout<<endl;
        i+=1;
    }
    // while (i<=n){
    //     int j = 1;
    //     while (j<=i){
    //         cout<<"*";
    //         j+=1;
    //     }
    //     i+=1;
    //     cout<<endl;
    // }
}