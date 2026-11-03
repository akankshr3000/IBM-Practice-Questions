#include<iostream>
using namespace std;

int main(){
    int sum=0;
    int arr[] = {10, 20, 30, 40, 50};
    int n=sizeof(arr)/sizeof(int);
    for(int i=0;i<n;i++){ 
        sum+=arr[i];
    }
    cout<<"The Sum of array elements:"<<sum; 
    return 0;
}