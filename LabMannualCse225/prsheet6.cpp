/*Write a program that calculate and print the Electricity bill of a given customer. The 
customer id, name and unit consumed by the user should be taken from the keyboard 
and display the total amount to pay to the customer. The charge are as follow : 
Unit Charge per unit (tk)
0 - 200 3.5
201 - 500 4
501 - 1000 5
> 1000 7
*/
#include<iostream>
using namespace std;

int main()
{
  int id ;
  string name;
  double unit, bill;
  cout<<"Enter the Customer id, name and unit: ";
  cin>>id;
  cin>>name;
  cin>>unit;
  if(unit<=200) bill=(unit*3.5);
  else if(unit>=201||unit<=500) bill =((200*3.5)+(unit-200)*4);
  else if(unit>=501 && unit<=1000) bill=(200*3.5)+(300*4)+((unit-500)*5);
  else if(unit>1000) bill=(200*3.5)+(300*4.0)+(500*5.0)+((unit-1000)*7.0);
  cout<<"ID= "<<id<<endl;
  cout<<"name= "<<name<<endl;
  cout<<"Total cost:"<<bill<<endl;
  
}