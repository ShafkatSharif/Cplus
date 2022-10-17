/*Dynamic memory alllocation and deleting*/ 

#include<iostream>
using namespace std;
int main(){

    int* arr = new int[5]; //dynamic memory allocation

    for(int i = 0; i< 5; i++){
        cin >> arr[i];
    }
    cout<< "Print array element"<<endl;
    for(int i=0 ; i<5; i++){
        cout<< arr[i]<< " ";
    }

    delete[] arr ;
    for(int i=0 ; i<5; i++){
        cout<< arr[i]<< " ";
    }

    return 0;
}