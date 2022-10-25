/*Dynamically allocate memory to create array and copy the elements of one array into 
another array in reverse order.*/
#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<< "Enter array size: ";
    cin>>n;

    int* a = new int[n];
    int* b = new int[n];
    
    for(int i= 0 ;i<n ; i++){
        cin>>a[i];
    }
    for(int i= 0 ;i<n ;i++){
      b[n-i-1]= a[i];
    }
    for(int i = 0;i<n ;i++){
        cout<<b[i]<<" ";
    }
}