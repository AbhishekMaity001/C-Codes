#include<iostream>
using namespace std;
int main(){
    bool isPrime = 0;
    int n;

    cout << "Enter a number n : ";
    cin >> n;

    for(int i=2; i<n; i++){
        if(n%i == 0){
            isPrime=1;
            cout << n << " is not a prime no. "<< " divisible by " << i;
            break;
        }
    }
    if (isPrime == 0){
        cout<<n <<" is a Prime no.";
    }

    // for (int i=0; i<5; i--){
    //     cout << i << " ";
    //     i++;
    // }
}