#include<iostream>
using namespace std;

void update(int arr[], int n){

    cout<<"Inside the function"<<endl; 

    
    
    //printing the array of
    for(int i=0; i<3; i++){
        cout<<arr[i]<<endl;
    }
    cout<<endl;
    cout<<"Going back to main function"<<endl;

    
}
int main(){

    int arr[3] = {1,2,3};
    update(arr,3);

    cout<<"Printing in the main function"<<endl;
    for(int i=0; i<3; i++){
        cout<<arr[i]<<endl;
    }
    cout<<endl;
    return 0;
}
