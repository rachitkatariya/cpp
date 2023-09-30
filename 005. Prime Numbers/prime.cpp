// Prime Number

#include<iostream>
using namespace std;
int main() {
   int n;
   cin >> n;
   
   int i = 2;

   while( i<n ) {
      // divide ho gaya, not prime 
      if ( n%i==0) {
         cout << "Not prime for " << endl;
      }
      else {
         cout << "Prime for " << i << endl;
      }
      i = i + 1;
   }
   return 0;
} 
