#include <iostream>
using namespace std;

int main(){
     
    //First Space Star Problem
    int n;
    cin>>n;

    int row =1;
   
    while(row<=n){
        // space code
        int space=n-row;
        while(space){
            cout<<" ";
            space =space-1;
        }

        //star printing
        int col=1;
        while(col<=row) {
            cout<<"*";
            col = col+1;
        }
        cout<<endl;
        row = row + 1;
    }
    
   //Second Spcae Problem
   int n;
   cin>>n;

   int row =1;
   while(row<=n){
       //Space printing
       int space= n-row;
       while(space){
           cout<<" ";
           space=space-1;
       }

       //print 1 triangle
       int j=1;
       while(j<=row){
           cout<<j;
           j=j+1;
       }

       //print 2 triangle 
        int start= row-1;
        while(start){
            cout<<start;
            start =start-1;

        }
        cout<<endl;
        row = row + 1;
   }

}
