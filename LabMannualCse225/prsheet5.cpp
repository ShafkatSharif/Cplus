/*Write a function ππππππππ‘πππ(πππ‘ π, πππ‘ π) that takes two integers as its parameter and 
calculates the combination using the formula given below.
ππΆπ =π!/π! (π β π)!
*/
#include<iostream>
using namespace std;

int fact(int n){
    return n*fact(n-1);
}

int combination(int a, int b){
     return (fact(a)/(fact(b)*fact(a-b)));
}
 
int main(){
    int n ,r ;
    cout<<"Enter two numbers to have nCr: ";
    cin>>n>>r;
    cout<<"nCr= "<<combination(n,r);
    return 0;
}