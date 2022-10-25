/* Write a program to find the sum of the series 1 +11 + 111 + 1111 + .. n terms*/
#include<iostream>
using namespace std;
int main()
{
   int a=0, sum=0, n;
   cout<< "Enter the numbers in the series: ";
   cin>>n;
  
   for(int i = 1 ; i<=n ; i++)
   {
    a=(10*a)+1;
    if(i==n)
    {
        cout<<a<<"=";
    }
    else cout<<a<<"+";
    sum+=a;
   }
   cout<<sum;
   
}