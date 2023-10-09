#include<iostream>
using namespace std;

int main()
{

    int arr[5]= {1,2,3,4,5};

    int a; // 4 bytes

    // char a;  // 1 bytes
    // float a; // 4 bytes
    // bool a; // 1 bytes

   // cout<<sizeof(a)<<" ";

   // cout<<sizeof(arr)<<" "; 

   cout<<sizeof(arr)/sizeof(arr[0])<<" ";


    return 0;
}
