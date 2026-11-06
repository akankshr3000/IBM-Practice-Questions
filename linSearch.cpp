#include<iostream>
using namespace std;

int linSearch(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[] = {10, 25, 30, 45, 50};
    int n = sizeof(arr)/sizeof(int);
    cout<<linSearch(arr,n,30); 
    return 0; 
}  