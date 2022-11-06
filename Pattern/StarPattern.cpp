#include <iostream>
using namespace std;

int main(){

    /* 
    Code for following Pattern 
    *
    **
    ***
    ****
    ***** 


    */
    int n;
    cin>>n;
    int row=1;
    while(row<=n){
        int col=1;
        while(col<=row){
            cout<<"*";
            col = col + 1;
        }
        cout<<endl;
        row = row + 1;
    }

    /* Code to print following Pattern
    1
    22
    333
    4444
    55555
    */
    int n;
    cin>>n;

    int row=1;

    while(row<=n){
        int col=1;
        while(col<=row){
            cout<<row;
            col = col + 1;
        }
        cout<<endl;
        row = row + 1;
    }
    
}
