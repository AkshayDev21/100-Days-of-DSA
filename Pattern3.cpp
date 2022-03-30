#include <iostream>
using namespace std;

int main(){
    
    //Pattern 1
    int n;
    cin>>n;

    int i=1;
    while(i<=n){
        int j=1;
        while(j<=i){
            cout<<i-j+1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
        
    }

    //Pattern 2
    int n;
    cin>>n;

    int row=1;
    while(row<=n){
        int col=1;
        while(col<=n){
            char ch = 'A' + row -1;
            cout<<ch;
            col =col+1;
        }
        cout<<endl;
        row =row+1;
        
    }
    
    //Pattern 3
    int n;
    cin>>n;

    int row=1;
    while(row<=n){
        int col =1;

        while (col<=row){
            char ch = 'A' + row -1;
            cout<<ch;
            col = col+1;

        }
        cout<<endl;
        row =row+1;
    }


}