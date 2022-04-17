#include <iostream>
using namespace std;

int binarysearch(int arr[], int size, int key){
    int start = 0;
    int end = size-1;

    int mid = (start + end)/2;

    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        // Go to right side part
        if(key > arr[mid]){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
        mid = (start + end)/2;
    }
    return -1;


}
int main(){
    int even[6] = {0,1,12,23,34,45};
    int odd[5] = {0,1,2,3,4};

    int evenindex = binarysearch(even, 6, 2);
    cout<<"Index of 2 is "<< evenindex<<endl;

    int oddindex = binarysearch(odd, 5, 20);
    cout<<"Index of 20 is "<< oddindex<<endl;


    return 0;
}
