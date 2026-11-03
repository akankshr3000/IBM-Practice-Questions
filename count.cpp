#include<iostream>
using namespace std;

int main(){
    int even=0;
    int odd=0;
    int arr[] = {12, 7, 5, 8, 10, 3, 14};
    int n=sizeof(arr)/sizeof(int);
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){ 
            even++;
        }
        else{
            odd++; 
        }
    }
    cout<<"Even Numbers:"<<even<<endl;
    cout<<"Odd Numbers:"<<odd; 
    return 0;
}