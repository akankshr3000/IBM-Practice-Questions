#include<iostream>
using namespace std;

int main(){
    
    int arr[] = {10, 20, 10, 30, 10, 40, 20};
    int target = 10;
    int n = sizeof(arr) / sizeof(int);
    int count = 0;
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            count++;
        }
    }
    cout<<"10 occurs "<< count <<" times";    
    return 0;
}   