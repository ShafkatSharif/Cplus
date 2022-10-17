//2Dimentional
#include<iostream>

using namespace std;

int main(){
    int r,c;
    cout<<"Enter array size ";
    cin>>r>>c;
    char** arr= new char*[r] ;

    for(int i= 0; i<c ; i++){
        arr[i] = new char[c];
    }


    for(int i = 0 ; i< r ; i++){
        for(int j= 0 ; j< c ; j++){
            cin>> arr[i][j];
        }
    }
    cout<<"Printing array elements "<<endl;
    for(int i= 0 ;i< r ;i++){
        for(int j=0 ; j<c ; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<< "Deleting";
    for(int i = 0 ;i<r ; i++){
        delete [] arr;  //for row
    }
    delete [] arr;  //delocating whole
    return 0;
}