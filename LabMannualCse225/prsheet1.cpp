/*Write a program that will ask the user to input his/her height in cm and weight in kg. The 
program will convert the height and weight from cm to inches and kg to pound 
respectively.
*/

#include<iostream>

using namespace std;

int main(){
    double h , w;
    cout<<"Enter height in cm and weight in kg: ";
    cin >> h>> w;
    cout<< "Height in inch: "<<(h/2.54)<<endl;
    cout<<"weight in  pound: "<<(w*2.20);
    
}
