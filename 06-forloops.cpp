#include<iostream>
using namespace std;
int main(){
    // for(int i=0, j=10; i<=10; i++,j--){
    //     cout<<"i : "<<i<<", j : "<<j<<endl;
    // }

    // Fibonacci series
    int a=0 , b=1, sum=0;
    int n;

    while (true){
        cout << "Please enter the length of fibonacci series : : ";
        cin >> n;
        if (n>=2){
            break;
        }
        else{
            cout << "Please Enter length >=2 !! " << endl;
        }
    }
    
    if (n >=2){
        cout<<a<<'\t'<<b<<'\t';
    }
    
    for(int i=0; i< n-2; i++){
        sum = a+b;
        cout<<sum<<'\t';
        a=b;
        b=sum;
    }
}