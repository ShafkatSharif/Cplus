/*Write a program to count the total number of words in a string without any library 
functions*/
#include<iostream>
using namespace std;

int main(){
    string str;
    int w=0;
    cout<<"Enter the Sentence: ";
    getline(cin,str);
    for(int i = 0 ; i<str.size(); i++){
        if(str[i]==' ') w++;
    }
    w+=1;
    cout<< "Total words: "<<w;
}