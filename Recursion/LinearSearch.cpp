#include <iostream>
using namespace std;

bool linearSearch(int arr[], int size, int k){
    if(size==0){
        return false;
    }
    if(arr[0]==k){
        return true;
    }
    else{
        bool remainingPart = linearSearch(arr+1, size-1, k);
        return remainingPart;
    }
}

int main(){
    cout<<"Enter the size of array :"<<endl;
    int size;
    cin>>size;
    cout<<"Enter the array :"<<endl;
    int arr[100];
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    cout<<"Enter the element to find it in array "<<endl;
    int key;
    cin>>key;

    int ans = linearSearch(arr, size, key);

    if(ans){
        cout<<"Element Found "<<endl;
    }
    else{
        cout<<"No element found"<<endl;
    }
    return 0;
    

}