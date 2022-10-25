/*Design an infinite loop to take 2 integers inputs from keyboard and also ask user for which 
operation to perform: ‘+’, or ‘-‘, or ‘*’. Perform the appropriate operation and show the 
result. (solve the problem using both if-else and switch case)
*/
#include<iostream>
using namespace std;
int main(){
    int a , b;
    char p;
    
    while(1){
    cout<<"Enter the numbers: ";
    cin>>a>>b;
    cout<<"Enter which operation to perform: ";
    cin>>p;
    if(p!='+'||p!='-'|| p!='*') break;
    switch(p){
        case '+': cout<<"Sum is: "<<(a+b);
        break;
        case '-': cout<<"Subtruction is: "<<(a-b);
        break;
        case '*': cout<<"Multiplication is: "<<(a*b);
        break;
    }
    cout<<endl;
    }
return 0;
}
