#include<iostream>
using namespace std;

// Question
// https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/

int main(){
    int n;
    cout << "Enter the value of n : " ;
    cin >> n;

    int sum=0, product=1;
    int rem;

    while(n>0){
        rem = n%10;
        sum += rem;
        product = product*rem;
        n = n/10;
    }
    cout << "Sum of the numbers : " << sum << endl;
    cout << "Product of the numbers : " << product;
}