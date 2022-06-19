#include <iostream>
using namespace std;

// To print row wise Sum
void printSumrow(int arr[3][3], int i, int j){
    cout << "Printing Sum row wise ->" << endl;
    for(int i=0; i<3; i++){
        int sum =0;
        for(int j=0; j<3; j++){
            sum += arr[i][j];
        }
        cout<< sum << " ";
    }
}

// To print column wise Sum
void printSumColumn(int arr[3][3], int i, int j){
    cout << "Printing Sum column wise ->" << endl;
    for(int j=0; j<3; j++){
        int sum =0;
        for(int i=0; i<3; i++){
            sum += arr[i][j];
        }
        cout<< sum << " ";
    }
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

    printSumrow(arr, 3, 3);
    cout<<endl;
    printSumColumn(arr, 3, 3);

}