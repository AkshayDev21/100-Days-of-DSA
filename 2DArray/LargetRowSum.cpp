#include <iostream>
#include <limits>
using namespace std;

int largetRowSum(int arr[3][3], int i, int j){
    int maxi = INT_MIN;
    int rowIndex = -1;
    for(int i=0; i<3; i++){
        int sum =0;
        for(int j =0; j<3; j++){
            sum += arr[i][j];
        }
        if(sum > maxi){
            maxi = sum;
            rowIndex = i;
        }
    }
    cout<<"The maximum Sum is " << maxi<<endl;
    return rowIndex;

}
int main(){
    int arr[3][3];
    // Input array
    cout<<"Enter the element in the array"<<endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin>> arr[i][j];
        }
    }

    // Output Array
    cout<<"The array is "<<endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<< arr[i][j] <<" ";
        }
        cout<<endl;
    }

    int ans = largetRowSum(arr, 3, 3);
    cout<< "Max Row is at Index" << ans <<endl;
    return 0;

}
