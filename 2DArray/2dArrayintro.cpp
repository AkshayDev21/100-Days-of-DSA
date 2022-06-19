#include <iostream>
using namespace std;

bool isPresent( int arr[3][3], int target, int i, int j){
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(arr[i][j] == target){
                return 1;
            }
        }
    }
    return 0;
}
int main(){

    // Create 2D Array
    int arr[3][3];
    
    // taking input array 
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin >> arr[i][j];
        }
    }

    // output 
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout << arr[i][j]<< " ";
        }
        cout << endl;
    }

    cout<<"Enetr the element to search"<< endl;
    int target;
    cin >> target;

    if(isPresent(arr,target,3,3)){
        cout<<"Element Found"<< endl;
    }
    else{
        cout<<"Not Found"<< endl;
    }

}