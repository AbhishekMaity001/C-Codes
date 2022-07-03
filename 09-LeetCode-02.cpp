#include<iostream>
using namespace std;

// Hamming Weight Question
// https://leetcode.com/problems/number-of-1-bits/
int main (){
    unsigned int n;
    int sum=0;
    cout << " Enter the binary input value : ";
    cin>>n; cout << endl;

    while (n!=0){
        if(n&1){
            sum=sum+1;
        }
        n = n>>1;
    }
    cout << "The total number or set bits are : " << sum;

}