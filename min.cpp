#include<iostream>
using namespace std;

int main(){ 
    int arr[] = {12, 5, 8, 2, 15, 3};  
    int n = sizeof(arr)/sizeof(int);
    int minimum = arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]<minimum){
            minimum=arr[i];
        }
    }
    cout<<"The Minimum number is: "<<minimum;  
    return 0; 
}