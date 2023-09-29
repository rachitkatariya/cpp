// nested if else statements

#include<iostream>
using namespace std;

// Take the age from the user and then decide accordingly
// 1. If age <= 18,
//     printf -> "not eligible for job" 
// 2. If age >= 54,
//     printf -> "eligible for job"
// 3. If age >= 55 and age <= 57,
//     printf >= "eligble for job, but retirement soon."
// 4. If age > 57
//     printf -> "retirement time"

 
int main(){
     int age;
     cin >> age;
     if(age < 18){
        cout << "not eligible for job";
     }
     else if(age <= 54){
        cout << "eligible for job";
     }
     // >= 18
     else if(age <= 57){
        cout << "eligible for job";
        if( age >= 55) {
            cout << " , but retirement soon";
        }
     }
     else {
        cout << "retirement time";
     }
     return 0;
