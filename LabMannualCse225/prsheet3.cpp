/*Write a program that will keep taking inputs from the user until the user inputs -1. Finally 
display the all numbers and also display all numbers excludes the odd number and find 
the sum of them.*/

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>v;
    int sum=0, n;
    cout<< "Enter the numbers: ";
    while(1){
        cin>>n;
        if(n==-1) break;
        v.push_back(n);
    }
    cout<<"Excluding the odd numbers: ";
    for(int i = 0; i<v.size(); i++){
        if(v[i]%2==0){
         cout<<v[i]<<" ";
         sum+=v[i];
        }
    }
    cout<<endl<<"Sum of even numbers are: "<<sum;

}