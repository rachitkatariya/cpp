// If else statement


#include<iostream>
using namespace std;
// write a program that takes an input of age
// and print if you are an adult
// >= 18, yes
// < 18, no
int main(){
    int age;
    cin >> age;
    if( age >= 18){
         cout << "You are an adult!";
    }
    else {
        cout << "You are not an adult!";
    }

    return 0;
} 
