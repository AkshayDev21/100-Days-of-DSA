#include<iostream>
using namespace std;

int main(){

    // declare array
    int number[10];

    //accessing an array
    cout<<"Value at 1 Index "<<number[1] << endl;

    //initializing array
    int second[3]={6,9,14};

    cout<<"Value at 2 Index "<< second[2] << endl;

    int third[20]={2,7};
    int n=15;
    cout<<"printing the array" <<endl;
    for(int i=0; i<n; i++){
        cout<<third[i]<< " ";
    }
    //initializing all locations 0
    int fourth[10]={0};

    int n1=10;
    cout<<"printing the array" <<endl;
    for(int i=0; i<n1; i++){
        cout<<fourth[i]<< " ";
    }
    

    return 0;
}
