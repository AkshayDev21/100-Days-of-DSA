#include <iostream>
using namespace std;

bool binarysearch(int arr[], int s, int e, int k){
    if(s>e){
        return false;
    }
    int mid = s + (e-s)/2;
    if(arr[mid] == k){
        return true;
    }
    if(arr[mid] < k){
        return binarysearch(arr, mid+1, e, k);
    }
    else{
        return binarysearch(arr, s, mid-1, k);
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

    int ans = binarysearch(arr, 0, 100, key);
    cout<<ans<<endl;
    return 0;
}
