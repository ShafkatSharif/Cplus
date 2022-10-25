/*Write a function 𝑐𝑜𝑚𝑏𝑖𝑛𝑎𝑡𝑖𝑜𝑛(𝑖𝑛𝑡 𝑛, 𝑖𝑛𝑡 𝑟) that takes two integers as its parameter and 
calculates the combination using the formula given below.
𝑛𝐶𝑟 =𝑛!/𝑟! (𝑛 − 𝑟)!
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