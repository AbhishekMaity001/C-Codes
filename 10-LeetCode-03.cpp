// Reverse Integer
// Compliment of Base 10 int
// Number compliment
// Binary to Decimal

#include <iostream>
#include<math.h>
using namespace std;
int main(){
    int n, i=0;
    cout << "Enter n : ";
    cin >> n;
    int ans=0;

    while (n != 0){
        int bit = n & 1;
        ans = (bit * pow(10, i)) + ans;
        
        n = n >> 1;
        i++;
    }
    cout<<"Answer is : " << ans << endl;
}