// Find number, character and etc

#include<iostream>
using namespace std;
int main (){
    char ch;
    cout << "Enter any Character";
    cin >> ch;
     if(ch >= 'A' && ch <= 'Z') {
        cout << ch << " is Upper case";
     }
     else if( ch>= 'a' && ch <= 'z') {
        cout << ch << " is lower case";
     }
     else if( ch>= '0' && ch <= '9' ){
        cout << ch << " is a number";
     }
     else {
        cout << ch << " is a special character";
     }
     return 0;
} 
