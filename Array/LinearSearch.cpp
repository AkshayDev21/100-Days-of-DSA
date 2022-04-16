#include<iostream>
using namespace std;

bool search(int arr[], int size, int key) {
    for(int i=0; i<size; i++){
        if(arr[i]==key){
            return 1;
        }
    }
    return 0;

}
int main(){
    int arr[10] = {1,2,3,4,53,6,7,80,9,15};
    // whether 4 is present in it or not?
    cout<< "Eneter the key which should be search in array : " <<endl;
    int key;
    cin>> key;
    bool found = search(arr, 10, key);
    if (found){
        cout<<"Key is present in array : "<<endl;
    }
    else{
        cout<<"Key is not present in array "<<endl;
    }

}